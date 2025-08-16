import numpy as np
import matplotlib.pyplot as plt
n = 1024
X = np.random.normal(0,1,n)
Y = np.random.normal(0,1,n)
T = np.arctan2(Y,X) # 颜色 ​公式说明​：θ = arctan(Y/X) θ ∈ (-π, π]​颜色映射​：角度值对应hsv色环（默认使用viridis colormap）

plt.scatter(X,Y,s=75,c=T,alpha=0.5)

plt.xlim((-1.5,1.5))
plt.ylim((-1.5,1.5))
plt.xticks(())# 取消x轴刻度
plt.yticks(())# 取消y轴刻度

plt.show()