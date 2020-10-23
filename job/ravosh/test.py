from ctypes import *

so_file ='./backend.so'
functions = cdll.LoadLibrary(so_file)

abc = 2
b = functions.square(abc)
print(b)