# __init__构造方法，是python类内置的方法之一
# 这些内置的类方法，各自有各自的功能，这些内置方法统称为：魔术方法

class Student:
    def __init__(self, name,age):
        self.name = name
        self.age = age

    # __str__字符串方法
    def __str__(self):
        return f"Student类对象，name:{self.name},age:{self.age}"
    
    # __lt__小于和大于符号比较方法
    def __lt__(self, other):
        return self.age < other.age
    
    # __le__小于等于或大于等于比较方法
    def __le__(self,other):
        return self.age <= other.age
    
    # __eq__比较运算符实现方法
    def __eq__(self, other):
        return self.name == other.name


stu = Student("周杰伦",18)
print(stu)
print(str(stu)) # 没有__str__，打印的是这个对象的地址，有了__str__可以控制打印的结果

stu1 = Student("Jee",18)
stu2 = Student("qee",20)
print(stu1 > stu2)
print(stu1 < stu2)

stu3 = Student("qee",18)
stu4 = Student("1ee",18)
print(stu3 >= stu4)
print(stu3 <= stu4)

print(stu2 == stu3)
print(stu3 == stu4)