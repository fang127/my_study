# 形参名:类型，形参名:类型,...
def func(a:int,b:int):
    return a + b
func(1,12)

# def 函数方法名(类型，形参名:类型,...) -> 类型
def func01(data:list) -> list:
    return data
print(f"{func01(1)}") # 类型注解只是提示性的，对代码没有影响
