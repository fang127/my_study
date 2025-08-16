import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D 

fig = plt.figure()
ax = Axes3D(fig)
fig.add_axes(ax)
X = np.arange(-4,4,0.25)
Y = np.arange(-4,4,0.25)
X,Y = np.meshgrid(X,Y)
R = np.sqrt(X ** 2 + Y ** 2)
Z = np.sin(R) # height value

ax.plot_surface(X,Y,Z,rstride=1,cstride=1,cmap='rainbow',edgecolor='black')

ax.contourf(X,Y,Z,zdir='z',offset=-2,cmap='rainbow') # zdir即从什么方向投影 offset即投影面位置

ax.set_zlim(-2,2)

plt.show()