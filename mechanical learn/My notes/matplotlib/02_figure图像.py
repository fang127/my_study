import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-3,3,100)
y1 = 2 * x + 1
y2 = x ** 2

# plt.figure() # 加上figure()，下面所有的数据就是这张图的
# plt.plot(x,y1)

# plt.figure()
# plt.plot(x,y2)
# # plt.show()

# plt.figure(num=100,figsize=(8,5)) # num是确定是figure多少，figsize是图框大小
# plt.plot(x,y2)
# plt.show()

# 绘制两条线在一个figure上，只需要在figure()下，两次.plot即可
plt.figure()
plt.plot(x,y2)
plt.plot(x,y1,color='red',linewidth=1.0,linestyle='--')
plt.show()