# 多态指多种状态，即完成某个行为时，使用不同的对象会得到不同的状态
class Animal:
    def speak(self):
        pass

class Dog(Animal):
    def speak(self):
        print("汪汪汪")

class Cat(Animal):
    def speak(self):
        print("喵喵喵")

def make_noise(animal:Animal):
    animal.speak()

dog = Dog()
cat = Cat()

make_noise(dog)
make_noise(cat)

# 父类确定有什么方法
# 具体的方法实现，由子类自行决定 通过复写实现
# 这种写法，叫抽象类（也可以称为接口）
# 抽象类：含有抽象方法大的类
# 抽象方法：方法体是空实现的(pass)称之为抽象方法