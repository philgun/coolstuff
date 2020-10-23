#include <python2.7/Python.h>
#include <stdio.h>

double RunPython(const char* , const double , const char *, const char *, const char *);

int main()
{
    const char* text = "lalala";
    const double input = 21;
    const char* ppath = "/home/philgun/Documents/codecodecode/codecodecode/job/ravosh";
    const char* pname = "interface";
    const char* pfunc = "printandreturn";

    //send stuff to python 2.7
    double res = RunPython(
        text,
        input,
        ppath,
        pname,
        pfunc
    );
    //print the return from python
    printf("%f\n",res);
}

double RunPython(const char* inputString, const double inputNumber, const char *ppath, const char *pname, const char *pfunc)
{
    double res;
    PyObject *pName, *pModule, *pFunc;
    PyObject *pArgs, *pValue, *inputs;
    int i;

    Py_Initialize();

    PyObject *sys_path = PySys_GetObject("path");
    PyList_Append(sys_path, PyString_FromString((char *)ppath));

    pName = PyString_FromString(pname);
    pModule = PyImport_Import(pName);
    Py_DECREF(pName);

    if (pModule != NULL) {
        pFunc = PyObject_GetAttrString(pModule, pfunc);
        /* pFunc is a new reference */

        pArgs =PyTuple_New(1);

        if (pFunc && PyCallable_Check(pFunc)) {
            inputs = PyDict_New();
            PyDict_SetItemString(inputs, "string", PyString_FromString((char *)inputString));
            pValue = PyFloat_FromDouble(inputNumber);
            PyDict_SetItemString(inputs, "number", pValue);
            PyTuple_SetItem(pArgs, 0, inputs);

            pValue = PyObject_CallObject(pFunc, pArgs);

            res=PyFloat_AsDouble(pValue);


            Py_DECREF(pArgs);
            Py_DECREF(inputs);
            if (pValue != NULL) {
                Py_DECREF(pValue);
            }
            else {
                Py_DECREF(pFunc);
                Py_DECREF(pModule);
                PyErr_Print();
                fprintf(stderr,"Call failed\n");
            }
        }
        else {
            if (PyErr_Occurred())
                PyErr_Print();
            fprintf(stderr, "Cannot find function \"%s\"\n", pfunc);
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    }
    else {
        PyErr_Print();
        fprintf(stderr, "Failed to load \"%s\"\n", pname);
    }

    return res;
    
}
