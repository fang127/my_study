# class 类名称:
#    类属性: # 即定义在类中的变量，成员变量
#    类行为: # 即定义在类中的函数，成员方法


# 对象名称 = 类名称()

# self关键字市成员方法定义时，必须填写的。
# 表示类对象本身的意思
# 当我们使用类对象调用方法时，self会自动被python传入
# 在方法内部，想要访问类的成员变量，必须使用self

class Person:
    name:str
    age:int
    gender:str
    def say_hi(self):
        print(f"My name is {self.name},age is {self.age},gender is {self.gender}")
    def say_lo(self,msg):
        print(f"{msg}")

p = Person()
p.name = "JEe"
p.age = 18
p.gender = "男"
p.say_hi()
p.say_lo("hello,world")