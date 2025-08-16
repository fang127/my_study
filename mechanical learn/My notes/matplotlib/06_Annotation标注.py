import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(-3,3,50)
y = 2 * x + 1

plt.figure(figsize=(12,8))
plt.plot(x,y,color='r',linewidth=2,linestyle='-')

ax = plt.gca()
ax.spines['top'].set_color('none')
ax.spines['right'].set_color('none')
ax.xaxis.set_ticks_position('bottom')
ax.yaxis.set_ticks_position('left')
ax.spines['bottom'].set_position(('data',0))
ax.spines['left'].set_position(('data',0))

# 在线中加点
x0 = 1
y0 = 2 * x0 + 1
plt.scatter(x0,y0,s=50,c='b') # size为尺寸,color为颜色 scatter需简写参数，s为size，c为color
# 添加线
plt.plot([x0,x0],[y0,0],color='k',linestyle='--',linewidth=2.5)

# 添加文字
# 方式1 .annotate()
plt.annotate(rf'$2x+1={y0}$',xy=(x0,y0),xycoords='data',xytext=(+30,-30),
             textcoords='offset points',fontsize=16,
             arrowprops=dict(arrowstyle='->',connectionstyle='arc3,rad=.2'))
# 方法2 .text()
plt.text(-2.5,3,r'$This\ is\ the\ some\ text\ \mu\ \sigma_i\ \alpha_t$',
         fontdict={'size':16,'color':'k'})

plt.show()