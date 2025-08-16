import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(3,-3,50)
print(x)
y1 = x * 2 + 1
y2 = x ** 2

# 创建画布
plt.figure(figsize=(12,8))
# 坐标轴范围
plt.xlim(-4,4)
plt.ylim(-5,10)
# 坐标轴名称
plt.xlabel("I am X",loc='right')
plt.ylabel("I am Y",loc='top')
# 坐标轴刻度划分
plt.xticks(np.linspace(-4,4,5))
plt.yticks([-2,-1.8,-1,1.22,3],
           [r'$very\ bad$',r'$bad$',r'$normal$',r'$good$',r'$very\ good$'])
# 坐标原点设置
ax = plt.gca()
ax.spines['top'].set_color('none')
ax.spines['right'].set_color('none')
ax.xaxis.set_ticks_position('bottom')
ax.yaxis.set_ticks_position('left')
ax.spines['bottom'].set_position(('data',0))
ax.spines['left'].set_position(('data',0))
# 绘图
l1 = plt.plot(x,y1,color = 'blue',linewidth=2,linestyle='--',label='down')
l2 = plt.plot(x,y2,color = 'red',linewidth=2,linestyle='-',label='up')
# 绘制图例 注意图例要在绘图步骤后面，在绘图中要设置label .legend(handles=[],labels=[],loc='')
plt.legend(loc='best') # handles传入图 labels定义名称 loc图例位置top bottom right left best等等

plt.show()