# 从文件中读取的数字，默认是字符串，我们需要转换成数字类型
# input()语句，默认结果是字符串，若需要数字需要转换
# 将数字转换成字符串写出到外部系统
# int(x) 将x转换为整数 会输出一个类型结果
# float(x) 同理
# str(x) 同理

# 数字转字符串
num_str = str(11)
print(type(num_str),num_str)
float_str = str(11.111)
print(type(float_str),float_str)

# 字符串转数字
num = int("11")
print(type(num),num)
num2 = float("13.11")
print(type(num2),num2)

# num3 = int("hello") 错误 字符串转数字，必须要求字符串内的内容全都是数字
# print(type(num3),num3)

# 整型转浮点型
float = float(11)
print(type(float),float)

# 浮点转整型
int = int(11.11)
print(type(int),int)