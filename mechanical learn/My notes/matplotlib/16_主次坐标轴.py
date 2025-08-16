import matplotlib.pyplot as plt
import numpy as np

x = np.arange(0, 10,0.1)
y1 = 0.05 * x ** 2
y2 = -1 * y1

fig,ax1 = plt.subplots()# plt.subplots() 是快速创建 ​Figure（画布）​​ 和 ​Axes（坐标系）​​ 的工厂函数
# plt.subplots(nrows=1, ncols=1, figsize=(6.4, 4.8), dpi=100)
# nrows为子图行数，ncols为子图列数，figsize为画布尺寸（宽x高，单位英寸），dpi为分辨率（每英寸像素数）

# 通过.twinx()将坐标轴反转
ax2 = ax1.twinx()

ax1.plot(x,y1,"g-")
ax2.plot(x,y2,"b--")

ax1.set_xlabel("X data")
ax1.set_ylabel("Y1 data",rotation=0)
ax2.set_ylabel("Y2 data",rotation=0)

plt.show()