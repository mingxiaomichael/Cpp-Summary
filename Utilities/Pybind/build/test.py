import numpy as np
import module_name

m = module_name
print(dir(module_name))
q = np.zeros(20)
m.update(q)
print(q)