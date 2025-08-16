# def关键字定义带有名称的函数 可以重复使用
# lambda关键字定义匿名函数 匿名函数只可以临时使用一次
# lambda 传入参数：函数体(只可写一行代码)   函数体默认将结果return

def func(compute):
    result = compute(1,2)
    print(f"result = {result}")

func(lambda x, y : x + y)