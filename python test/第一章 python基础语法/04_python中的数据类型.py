# 通过type()查看数据类型信息
# 第一种
print(type("你好"))
print(type(666))
print(type(13.14))
# 第二种
int_type = type(666)
str_type = type("hello")
float_type = type(13.14)
print(int_type)
print(str_type)
print(float_type)
int_type = 13.14
print("变量没有类型，变量存储的数据才有类型",type(int_type))