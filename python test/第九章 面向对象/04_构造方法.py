# 构造方法：通过__init__()为成员属性赋值 类似c++构造函数
# 在创建类对象时，会自动执行
# 在创建类对象时，将传入的参数自动传递给__init__方法使用
# 同时，属性成员变量的声明可以不写，在构造方法内会进行声明
# class Student:
#     def __init__(self, name, age,score):
#         self.name = name
#         self.age = age
#         self.score = score
#         print('Student构造方法的调用')

# p = Student('Jee',18,99.2)
# print(f"{p.name}\t{p.age}\t{p.score}")

# 案例
class Student:
    def __init__(self, name, age, position):
        self.name = name
        self.age = age
        self.position = position

i = 0
for i in range(0,10):
    print(f"当前录入第{i + 1}位学生信息，总共需录入10位学生信息")
    name = str(input("请输入学生姓名："))
    age = int(input("请输入学生年龄："))
    position = str(input("请输入学生地址："))
    stu = Student(name,age,position)
    print(f"学生{i + 1}录入完成，信息为：[姓名：{stu.name},年龄：{stu.age},地址：{stu.position}]")
