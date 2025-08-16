import numpy as np
A = np.arange(0,12).reshape(3,4)
print(A)
# .spilt(数组，份数，axis = 行/列)分割
print(np.split(A,2,1))
print(np.split(A,3,0))
# print(np.split(A,3,1)) 错误，注意份数要满足等分，这里4列分成3份显然不可以
print(np.array_split(A,3,1)) # 当进行不均分割时，要使用.array_split()
print(np.vsplit(A,3)) # 使用.vsplit直接表示进行纵向分割
print(np.hsplit(A,4))