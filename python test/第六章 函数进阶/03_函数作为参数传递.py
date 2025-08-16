# 函数本身可以作为参数，传入另一个函数中进行使用
# 本质 计算逻辑的传递，而非数据的传递
def func(compute):
    result = compute(1,2)
    print(f"compute类型为：{type(compute)}")
    print(f"result = {result}")

def compute(x,y):
    return x + y

func(compute)