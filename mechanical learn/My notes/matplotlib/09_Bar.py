import numpy as np
import matplotlib.pyplot as plt

n = 12
X = np.arange(n)
Y1 = (1 - X / float(n)) * np.random.uniform(0.5,1,n)
Y2 = (1 - X / float(n)) * np.random.uniform(0.5,1,n)

plt.figure()
# 柱状图，+向上，-向下
plt.bar(X,+Y1,facecolor='#9999ff',edgecolor='white')
plt.bar(X,-Y2,facecolor='#ff9999',edgecolor='white')

# 在柱状图上加数值
# 加上zip将一次返回x和y两个值，不加则一次只能返回一个值
for x,y in zip(X,Y1):
    plt.text(x,y,'%.2f'%y,ha='center',va='bottom')  # ha为horizontal alignment水平对其方式 va是竖向对其方式 都是以文本文件为参考的

for x,y in zip(X,Y2):
    plt.text(x,-y,'%.2f'%y,ha='center',va='top')

plt.xlim(-.5,n)
plt.xticks(())
plt.ylim(-1.25,1.25)
plt.yticks(())

plt.show()