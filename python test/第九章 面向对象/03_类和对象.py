class Person:
    name:str
    age:int
    score:float
    def __init__(self, name, age,score):
        self.name = name
        self.age = age
        self.score = score
        print(f"init的调用")

p = Person(name = "Jee",age = 18,score = 88.9)


class Clock:
    id:str
    price:float

    def ring(self):
        import winsound
        winsound.Beep(2000,3000)

clock1 = Clock()
clock1.id = "00001"
clock1.price = 99.99
print(f"闹钟id{clock1.id},价格{clock1.price}")
clock1.ring()

clock2 = Clock()
clock2.id = "00002"
clock2.price = 29.99
print(f"闹钟id{clock2.id},价格{clock2.price}")
clock2.ring()