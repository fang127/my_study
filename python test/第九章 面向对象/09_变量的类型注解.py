import random
import json
# 类型注解：帮助第三方IDE对代码进行类型推断，协助代码提示   帮助开发者自身对变量进行类型注解
# 支持：变量的类型注解    函数形参列表和返回值的类型注解
# 基础语法：      变量:类型

# 基础数据类型注解
a:int = 10
b:bool = True

# 容器注解
my_list:list = [1,2,3]
my_str:str = "abc"
my_tuple:tuple = (1,2,3)
my_set:set = {1,2,3}
my_dict:dict = {1:1,2:2,3:3}
# 容器详细注解，可以注解内部存放的数据类型
my_list1:list[int] = [1,2,3]
my_tuple1:tuple[str,int,bool] = ("1",1,True)
my_dict1:dict[str,int] = {"1":1,"2":2}

# 对象也可以注解属于什么类的对象
class Student:
    pass
stu:Student = Student()
# 等等

# # type:类型
c = random.randint(1,10)  # type:int
d = json.loads('{"1":1}') # type:dict[str,int]
def func():
    return 10
e = func() # type:int

# 类型注解仅用来提示，对实际代码无影响
var:int = "1"
print(var)