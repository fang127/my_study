# 模块：是一个python文件，以.py结尾
# 模块可以定义函数，类和变量，模块也包含可执行的代码
# 每一个模块可以帮助我们快速实现一些功能，比如实现和时间有关的功能需要time模块，可以认为一个模块就是一个工具包，每一个工具包包含不同工具给我们使用不同功能
# 注意 一般模块导入写在一个文件开头部分

# 模块导入方式
# [form 模块名] import [模块 | 类 | 变量 | 函数 | *][as 别名]
# 基本语法 import 模块名
# import time # 导入内置的time模块，即time.py文件
# print("hello")
# time.sleep(5) # 通过.就可以使用模块内全部功能(类，函数，变量)
# print("world")

# 通过from导入模块的功能
# form 模块名 import 功能名 # 即只使用具体的功能，其他不可使用，只import可以使用所有功能
# from time import sleep
# print("hello")
# sleep(5)
# print("world")

# from time import * # *表示导入全部功能 使用时不需要time.
# print("hello")
# sleep(5)
# print("world")

# as[别名]
# form 模块名 import 功能名 as 别名
# 给功能改个名字方便使用
# import time as t
# print("hello")
# t.sleep(5)
# print("world")

from time import sleep as sl
print("hello")
sl(5)
print("world")