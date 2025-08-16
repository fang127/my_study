import numpy as np
import pandas as pd
import matplotlib.pyplot as plt # 主要用到matplotlib下面的pyplot模块

x = np.linspace(-1,1,50)
# y = 2 * x + 1
y = x**2 + 1
plt.plot(x,y)
plt.show()