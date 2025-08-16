# for循环中待处理数据集，严格来说，称为序列类型
# 序列类型指内容可以一个一个依次取出的一种类型 包括：字符串、列表、元组等
# range生成数字序列
# 语法1：range(num) 从0开始到num结束的数字序列(不包含num2本身)
for x in range(10):
    print(x,end=" ")
print()
# 语法2：range(num1,num2) 从num1开始到num2结束的数字序列(不包含num2本身)
for x in range(5 , 10):
    print(x,end=" ")
print()
# 语法3：range(num1,num2,step) 从num1开始到num2结束的数字序列(不包含num2本身)，数字之间的步长为step
for x in range (5 , 10 , 2):
    print(x,end=" ")
print()

#  案例
import random
num = random.randint(1, 100)
print(f"num = {num}")

i = 0
for x in range(1,num + 1):
    if x % 2 == 0:
        i += 1

print(f"1到{num}一共有{i}个偶数")