from ctypes import *
def printandreturn(inputs):
    p = inputs["string"]
    val = inputs["number"]
    val = int(val)
    so_file ='./backend.so'
    functions = cdll.LoadLibrary(so_file)
    val = functions.square(val)
    print(p)
    print(val)
    return float(val)

