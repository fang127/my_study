# python模块太多了，会造成混乱，因此有了包
# python包，是一个文件夹，文件夹下包含一个__init__.py文件该文件夹包含多个模块文件，从逻辑上看，包本质是模块
# 有__init__.py才是包，没有就只是个文件夹

# import my_package.my_module1
# import my_package.my_module2

# my_package.my_module1.info_print1()
# my_package.my_module2.info_print2()

# from my_package import my_module1
# from my_package import my_module2
# my_module1.info_print1()
# my_module2.info_print2()

# from my_package.my_module1 import info_print1
# from my_package.my_module2 import info_print2
# info_print1()
# info_print2()

# __all__也可以存在包里面，但要放在__init__.py中

from my_package import * # __all__控制了*只含有my_module1
my_module1.info_print1()
# my_module2.info_print2() 不存在