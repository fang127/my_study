import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-3,3,50)
y = 0.1 * x

plt.figure()
plt.plot(x,y,color='r',linewidth=10,linestyle='-',alpha=1,zorder=1)# alpha设置透明度 zorder设置图层

plt.ylim(-2,2)

ax = plt.gca()
ax.spines['top'].set_color('none')
ax.spines['right'].set_color('none')
ax.xaxis.set_ticks_position('bottom')
ax.yaxis.set_ticks_position('left')
ax.spines['bottom'].set_position(('data',0))
ax.spines['left'].set_position(('data',0))

# 线挡住了数值
for label in ax.get_xticklabels() + ax.get_yticklabels():
    label.set_fontsize(12)
    label.set_bbox(dict(facecolor='white',edgecolor='None',alpha=0.5,zorder=2)) # 


plt.show()