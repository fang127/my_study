# return执行之后，函数立马结束
# def func():
#     return 1
#     return 2 只返回1

# 多返回值语法
def test_return():
    return 1, 2, 3

x,y,z = test_return() # 返回顺序对应
print(x,y,z)