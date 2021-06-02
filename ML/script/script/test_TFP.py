import numpy as np
import tensorflow_probability as tfp
import tensorflow as tf

def ode_fn(t, y):
  return tf.linalg.matvec(A, y)

t_init, t0, t1 = 0, 0.5, 1
y_init = tf.constant([1., 1.], dtype=tf.float64)
A = tf.constant([[-1., -2.], [-3., -4.]], dtype=tf.float64)
t = np.linspace(0.0,10.0,10)
ts = tf.constant(t)

print("\n\n\n\n\n\n")
print(tf.reduce_max(ts))
print("\n\n\n\n\n\n")

solver = tfp.math.ode.BDF()
results = solver.solve(
    ode_fn,
    initial_time=t_init,
    initial_state=y_init,
    solution_times=ts,
)

res = results.states.numpy()
print(res[:,0])
print(res[:,1])