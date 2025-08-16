import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(-3, 3, 50)
y1 = 2*x + 1
y2 = x**2

plt.figure(figsize=(8,8))
plt.plot(x, y2)
plt.plot(x, y1, color='red', linewidth=1.0, linestyle='--')
# set x limits
plt.xlim((-1, 2))
plt.ylim((-2, 3))

# set new ticks
new_ticks = np.linspace(-1, 2, 5)
plt.xticks(new_ticks)

# set tick labels
plt.yticks([-2, -1.8, -1, 1.22, 3],
           ['$really\ bad$', '$bad$', '$normal$', '$good$', '$really\ good$'])

# gca 即 'get current axis'
ax = plt.gca() # 获取图
ax.spines['right'].set_color("none") # .spines即图的四个边框 将右边框设置为无
ax.spines['top'].set_color("none") # 将顶部边框设置为无
ax.xaxis.set_ticks_position('bottom') # 将x轴设为底边框
ax.yaxis.set_ticks_position('left') # 将y轴设置为左边框
ax.spines['bottom'].set_position(('data',-1)) # 将x轴绑定在y=-1的位置
ax.spines['left'].set_position(('data',0)) # 将y轴绑定在x = 0的位置

plt.show()