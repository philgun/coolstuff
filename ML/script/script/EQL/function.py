import tensorflow as tf
import sympy

tf.config.run_functions_eagerly(True)
tf.get_logger().setLevel(3)

################################### UNARY FUNC
class func_sin:
    def __init__(self):
        pass

    def apply(self,x):
        return tf.math.sin(x,name="sin") 

    def eq_print(self,x):
        return sympy.sin(x)

class func_cos:
    def __init__(self):
        pass

    def apply(self,x):
        return tf.math.cos(x,name="cos") 

    def eq_print(self,x):
        return sympy.cos(x)

class func_square:
    def __init__(self):
        pass

    def apply(self,x):
        return tf.math.square(x,name="square")
        
    def eq_print(self,x):
        return x**2

class func_ln:
    def __init__(self):
        pass

    def apply(self,x):
        out = tf.math.log(
            tf.math.abs(x,name="abs"),name="log"
        )
        '''
        boolean = tf.math.is_nan(out).numpy()
        if any(boolean) is True:
            raise ValueError(
                "Shit happens, NaN is spotted in this tensor. Tensor: \n\n %s \n\n Input:\n\n %s"%(out.numpy(), x.numpy())
            )
        '''
        return tf.math.log(
            tf.math.abs(x,name="abs"),name="log"
        )
        
    def eq_print(self,x):
        return sympy.ln(
            sympy.Abs(x)
        )

class func_exp:
    def __init__(self):
        pass

    def apply(self,x):
        return tf.math.exp(x,name="exp")
        
    def eq_print(self,x):
        return sympy.exp(x)

class func_sqrt:
    def __init__(self):
        pass

    def apply(self,x):
        #print(
        #    "Sqrt function input: \n\n", x.numpy()
        #)

        out = tf.math.sqrt(
            tf.math.abs(x,name="sqrt")
        )
        '''
        b = tf.math.is_nan(out).numpy()

        if any(b) is True:
            raise ValueError(
                "Shit happens, NaN is spotted in this tensor. Tensor: \n\n %s \n\n Input:\n\n %s"%(out.numpy(), x.numpy())
            )
        '''
        return tf.math.sqrt(
            tf.math.abs(x,name="sqrt")
        )

    def eq_print(self,x):
        return sympy.sqrt(
            sympy.Abs(x)
        )

class func_id:
    def __init__(self):
        pass

    def apply(self,x):
        return tf.math.multiply(x,1,name="identity")

    def eq_print(self,x):
        return x

class func_cubic:
    def __init__(self):
        pass

    def apply(self,x):
        return tf.math.multiply(
            x , tf.math.multiply(x,x),name="cubic"
        )

    def eq_print(self,x):
        return x**3

class func_inv:
    def __init__(self):
        pass

    def apply(self,x):
        return tf.math.reciprocal(
            x,name="inverse"
        )

    def eq_print(self,x):
        return 1/x

############################ FUNC BINARY
class func_multiply:
    def __init__(self):
        pass

    def apply(self,x,y):
        return tf.math.multiply(x,y,name="multiply")

    def eq_print(self,x, y):
        return sympy.Mul(x,y)

class func_power:
    def __init__(self):
        pass

    def apply(self,x,y):
        return tf.math.pow(
            tf.math.abs(x),
            y,
            name="power"
        )

    def eq_print(self,x, y):
        return sympy.Abs(x)**y
    
class func_div:
    def __init__(self):
        pass

    def apply(self,x,y):
        return tf.math.truediv(x, y, name="division")

    def eq_print(self,x, y):
        return x/y
