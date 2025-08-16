# python中一个特殊的字面量：None。类型是<class 'NoneType'>
# None表示空的，无实际意义的意思
# None可以return None，也可以不写return，默认是返回None


# 应用场景
# 用在函数无返回值上
def say_hi():
    print("hello world")

result = say_hi()
print(type(say_hi()))
print(result)

# 用在if判断上 None等同于False,配合if判断做相关处理
def age_judge(age):
    if age > 18:
        return "SUCCESS"
    else:
        return None
result = age_judge(16)
if not result:#not代表c++中的!，非的意思
    print("未成年，进制入内")
# 用于声明无内容的变量 定义变量但暂时不需要变量的具体值，可以用None代替
name = None