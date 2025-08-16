import matplotlib.pyplot as plt
import numpy as np

fig = plt.figure()
x = [1,2,3,4,5,6,7]
y = [1,3,4,2,5,8,6]
# 设置坐标区域
left,bottom,width,height = 0.1,0.1,0.8,0.8
ax1 = fig.add_axes((left,bottom,width,height))# 添加一个坐标轴区域，其值表示某侧里画布figure的留白占比
# 绘图
ax1.plot(x,y,'r')
# 设置坐标轴
ax1.set_xlabel('x')
ax1.set_ylabel('y',rotation=0) # rotation = 0表示水平放置
ax1.set_title('title')

left,bottom,width,height = 0.2,0.6,0.25,0.25
ax2 = fig.add_axes((left,bottom,width,height))
ax2.plot(x,y,'b')
ax2.set_title("title inside 1")
ax2.set_xlabel("x")
ax2.set_ylabel("y",rotation=0)

plt.axes((0.6,0.2,0.25,0.25))
plt.plot(y[::-1],x,'g')
plt.xlabel("x")
plt.ylabel("y",rotation=0)
plt.title('title isside 2')

plt.show()