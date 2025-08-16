# 列表可以修改
# 当传递的信息不被篡改时，列表就不合适，而元组可以不被修改，一旦封装就不可更改
# 元组定义使用小括号()，使用逗号隔开各个数据，数据可以是不同的数据类型
# 字面量 (element1,element2,element3,...)
# (1,"hello",True,None,12.12)
# 定义元组变量 变量名称 = (element1,element2,element3,...)
t1 = (1,"hello",True,None,12.12)
# 定义空元组 变量名称 = ()    变量名称 = tuple()
t2 = ()
t3 = tuple()
print(f"t1的类型{type(t1)},内容为：{t1}")
print(f"t2的类型{type(t2)},内容为：{t2}")
print(f"t3的类型{type(t3)},内容为：{t3}")

# 定义单个元素的元组
t4 = ("hello") # 单个元素的元组，要在元素后面加逗号，否则类型是str
t5 = ("hello",)
print(f"t4的类型{type(t4)},内容为：{t4}")
print(f"t5的类型{type(t5)},内容为：{t5}")

# 嵌套元组
t6 = ((1,2,3),(4,5,6))
print(f"t6的类型{type(t6)},内容为：{t6}")

# 下标索引取出元素
num = t6[1][2]
print(num)
num1 = t6[-1][-1]
print(num1)

# 元组相关操作 方法
# 查找元素 元组.index(元素)
t = ("hello","world","python","python")
index = t.index("python")
print(index)
# 统计元素个数 元组.count(元素)
count = t.count("python")
print(f"t中python的个数为：{count}")
# 统计元组元素总个数 len(元组)
len_t = len(t)
print(f"元组t的元素总个数为：{len_t}")
# 元组的遍历
index = 0
while index < len(t):
    print(f"while循环元组的元素有：{t[index]}")
    index += 1

for x in t:
    print(f"for循环元组的元素有：{x}")

# 元组不可修改
# t[3] = "nihao"

# 元组嵌套list列表，列表中的元素可以修改
T = (1,2,["hello",1,3,4,5,True])
print(f"T修改前为：{T}")
T[2][0] = 0
print(f"T修改后为：{T}")

# 案例
T_in_list = ('周杰伦',11,["football",'music'])
index = T_in_list.index(11)
print(f"年龄下标的位置为：{index}")
name = T_in_list[0]
print(f"姓名为：{name}")
# 删除football
T_in_list[2].pop(0)
print(f"删除football后的元组T_in_list为：{T_in_list}")
# 增加爱好coding
T_in_list[2].insert(0,"coding")
print(f"增加coding后的结果为：{T_in_list}")