# 列表提供了一系列功能：
# 插入元素 删除元素 清空列表 修改元素 统计元素个数等 统称为方法
# 如果将函数定义为class（类）的成员，那么函数会称之为:方法
# list是一个类，list内封装了很多函数，称之为方法,方法的调用语法：类对象.函数名（）
my_list = [1,2,3,4,5,6,7,None,True,False,'hello']
# 查找元素下标 列表.index(元素)
num = my_list.index(2)
print(num)
print(my_list.index("hello"))
# 修改元素 = 
my_list[2] = 33333333333
print(my_list)
# 插入 列表.insert(位置,元素)
my_list.insert(1,0)
print(my_list)
# 追加元素 列表.append(元素)
my_list.append("world")
print(my_list)
# 追加一批元素 列表.extend(其他数据容器)
name = ["s",1,2,3,4,5,6,None]
my_list.extend(name)
print(my_list)
# 删除元素
# 语法1 del列表[下标]
# 语法2 列表.pop(下标) # 注意，可以用其他变量接收pop的结果，它会返回被删除的元素
del my_list[-1]
value = my_list.pop(0)
print(my_list)
print(value)
# 删除某元素在列表的第一个匹配值(从前往后) 列表.remove(元素)
my_list.remove(2)
print(my_list)
# 清空列表 列表.clear()
my_list.clear()
print(my_list)
# 统计元素在列表内数量 列表.count(元素)
my_list = [1,1,12,3,4,1,2,1,4,1]
count = my_list.count(1)
print(count)
# 统计列表长度 len(列表)
print(f"列表长度为{len(my_list)}")

# 列表特点
# 可以容纳2**63-1个元素
# 可以容纳不同类型元素
# 数据是有序存储的 有下标序号
# 允许重复
# 可以修改