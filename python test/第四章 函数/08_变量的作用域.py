# 局部变量 定义在函数体内的变量，只在函数体内部生效
# 局部变量作用：在函数体内部，临时保存数据，即当函数调用完成后，立即销毁局部变量
def test01():
    num = 100
    print(num)

# print(num) 局部变量无法在函数体外使用

# 全局变量 在函数体内外都可以生效的变量

num2 = 200 # 全局变量
def test02():
    print(f"test02:{num2}")

def test03():
    # num2 = 500 # 局部变量 和外面的num2不是一个变量，没有任何关系
    global num2 # global可以让函数内部定义的变量为全局变量
    num2 = 0
    print(f"test03:{num2}")


test02()
test03()
print(num2)

# 在函数内修改全局变量
# 关键字 global