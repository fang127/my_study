# python有很多内置模块
# 但有时候需要自定义个性化的模块
# import my_module
# print(my_module.add(1,2))

# from my_module import add
# from my_module2 import add #最后一个会覆盖前面的同名功能
# print(add(2,1))# 调用时，使用的是最后一个模块的功能

# import my_module2

# __all__变量，当时有from xxx import *导入时，只能导入这个列表中的元素
from my_module2 import *
print(cheng(2,3))
# print(add(4,2)) 无法使用add，因为__all__没有add名称