def func02(name,age,score):
    print(f"name = {name},age = {age},score = {score}")
# 位置参数 调用函数时根据函数定义的参数位置进行传递参数
func02("Jh",18,99)

# 关键字参数 函数调用时通过"形参名称 = 值"形式传递参数 可以打乱顺序
func02(age = 20,score = 90,name = "Jee")# 可以打乱顺序
func02("Jack",score = 0,age = 20)# 可与位置传参混合使用

# 缺省参数 函数调用时，可以使用默认的形参,即形参具有默认值
def func03(name,age,score = 90):
    print(f"name = {name},age = {age},score = {score}")
func03("Jee",18)
func03("Jee",18,88) # 如果传入实参，会代替默认形参
# def func03(name,age = 18,score):# 错误，默认值必须设在最后
    # print(f"name = {name},age = {age},score = {score}")

# 不定长参数 也叫可变参数，用于不确定调用的时候会传递多少个参数（不传参也可以）的场景
# 位置传递
def func04(*args):# *名称 即为元组容器，所有传入的参数都被其收集
    print(f"args的内容为：{args},类型为：{type(args)}")
func04('Jee',99,999,"sss")
# 关键字传递
def func05(**kwargs): # 参数是"键 = 值"，所有的"键 = 值"都被kwargs接受，根据键值组成字典
    print(f"kwargs的内容为：{kwargs},类型为：{type(kwargs)}")
func05(key1=1,key2=2,name = "Jee",age = 20,score = 100)