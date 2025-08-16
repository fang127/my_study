def func3():
    print("语句3")

def func2():
    print("语句2")

def func1():
    func3()
    func2()
    print("语句1")

func1()