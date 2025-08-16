import numpy as np
import matplotlib.pyplot as plt
import matplotlib.gridspec as gridspec

# 方法1 .subplot2grid()
plt.figure()
ax1 = plt.subplot2grid((3,3),(0,0),colspan=3,rowspan=1)# 第一个元组表示总共多少行列，第二个表示本图从何开始，第三个表示本土列跨度，第四个表示本土行跨度
ax1.plot([1,2],[1,2])
# 当有对象是都要加set_,      plt.不用加
ax1.set_title('ax1_title')

ax2 = plt.subplot2grid((3,3),(1,0),colspan=2)

ax3 = plt.subplot2grid((3,3),(1,2),rowspan=2)

ax4 = plt.subplot2grid((3,3),(2,0),colspan=1)

ax5 = plt.subplot2grid((3,3),(2,1),colspan=1)

plt.show()

# 方法2 gridspec
plt.figure()
gs = gridspec.GridSpec(3,3)
ax6 = plt.subplot(gs[0, :])
ax7 = plt.subplot(gs[1, :2])
ax8 = plt.subplot(gs[1:, 2])
ax9 = plt.subplot(gs[-1, 0])
ax10 = plt.subplot(gs[-1, -2])
plt.show()

# 方法3 easy to define structure
f,((ax11,ax12),(ax21,ax22)) = plt.subplots(2,2,sharex = True,sharey = True) # sharex和sharey为是否共享x和y轴
ax11.scatter([1,2],[1,2])
plt.show()