import numpy as np
import matplotlib.pyplot as plt

def f(x,y):
    # 根据xy的值返回高度
    return (1-x/2+x**5+y**3) * np.exp(-x**2-y**2)

n = 256
x = np.linspace(-3,3,n)
y = np.linspace(-3,3,n)
# 构建网格底图
X,Y = np.meshgrid(x,y)
# 放上高度颜色
plt.contourf(X,Y,f(X,Y),8,alpha=0.75,cmap=plt.cm.hot) # 8即9条等高线10份，默认0为等分
# 绘制等高线
C = plt.contour(X,Y,f(X,Y),8,colors='black',linewidth=1)
# 等高线上增加数值
plt.clabel(C,inline=True,fontsize=10)

plt.show()