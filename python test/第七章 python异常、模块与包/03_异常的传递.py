# 异常具有传递性
def func01():
    print("func01执行")
    num = 1/0
    print("func01结束")

def func02():
    print("func02执行")
    func01()
    print("func02结束")

def func03():
    print("func03执行")
    try:# 捕获异常并不需要深处到真正异常的那一句代码，因为异常可以被传递
        func02()
    except Exception as e:
        print(e)
    print("func03结束")

func03()