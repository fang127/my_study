import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(10,-10,1000)
y1 = 2 * x + 1
y2 = x ** 2 + 100

plt.figure()
plt.plot(x,y1,color='red',linewidth=2.0,linestyle='--')
plt.plot(x,y2,color='blue',linewidth=2.0,linestyle='-')
# 使用.xlim(min,max)和.ylim(min,max)可以限制坐标轴的取值范围
plt.xlim((-10.10))
plt.ylim(-20,300)
# 使用.xlabel(名称)和.ylable(名称)可以给坐标轴命名
plt.xlabel("I am X")
plt.ylabel("I am Y")
# 使用.xticks(min,max,num)和.yticks(min,max,num)可以换坐标轴间隔为num
new_ticks = np.linspace(-10,10,5)
print(new_ticks)
plt.xticks(new_ticks)
# plt.yticks(np.linspace(-20,300,9))
# plt.yticks([-20,10,50,150,300],
#            ['really bad','bad','normal','good','very good']) # 将坐标轴的数字改为文字
plt.yticks([-20,10,50,150,300],
           [r'$really\ bad$',r'$bad\ \alpha$','$normal$',r'$good$',r'$very\ good$']) # 文字前后加上$可以变字体，更好看，但是这样无法识别空格，需要在空格前加\,同时\转义字符可以将alpha等字符转为数学形式的字符

plt.show()