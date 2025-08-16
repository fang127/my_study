# 布尔类型
# 变量名称 = 布尔类型字面量
result = 10 > 5
print("10 > 5的结果为：%s,数据类型为：%s" % (result,type(result)))
num = 1
print(f"num == 2的结果是：{num == 2},数据类型为：{type(num == 2)}")
bool_1 = True
bool_2 = False
print(f"bool_1 = {bool_1},数据类型为：{type(bool_1)}")
print(f"bool_2 = {bool_2},数据类型为：{type(bool_2)}")

# 比较运算符
# == != > < >= <=
num1 = 10
num2 = 10
print(f'10 == 10的结果为：{num1 == num2}')
num2 = 15
print(f'10 > 15的结果为：{num1 > num2}')
print(f'10 < 15的结果为：{num1 < num2}')
print(f'10 >= 15的结果为：{num1 >= num2}')
print(f'10 <= 15的结果为：{num1 <= num2}')
print(f'10 != 15的结果为：{num1 != num2}')
# 字符串也可以对比
name1 = 'Jee'
name2 = 'Jack'
print(f'name1 == name2结果为：{name1 == name2}')
a = 'a'
b = 'b'
print(f'a < b结果为：{a < b},a = {ord(a)},b = {ord(b)}')