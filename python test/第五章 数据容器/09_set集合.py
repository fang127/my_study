# 集合特点
# 列表可修改，支持元素重复
# 元组、字符串不可修改，支持元素重复
# 集合不支持元素重复且内容无序
# 集合使用{}

# 字面量 {element1,element2,element3,...}
# {"hello",1,2,3,None,True,False,'a'}

# 定义集合变量 变量名称 = {element1,element2,element3,...}
my_set = {"hello",1,2,3,None,True,False,'a',"hello","hello",1}

# 定义空集合 变量名称 = set()
empty_set = set()

print(f"my_set的内容为：{my_set},类型为：{type(my_set)}") # 会去掉重复元素，并且内容无序
print(f"empty_set的内容为：{empty_set},类型为：{type(empty_set)}")

# 因为无序，所以无法下标索引
# 但集合允许修改
# 添加元素 .add(element)
my_set.add("python")
my_set.add("hello") # 重复元素添加不进去
print(f"添加后的结果为：{my_set}")

 # 移除元素 .remove(element)
my_set.remove("hello")
print(f"移除元素之后为：{my_set}")

# 随机取出一个元素 .pop() 会的到一个元素的结果，同时集合本身被修改，元素被移除
element = my_set.pop()
print(f"被取出的元素为：{element},集合变为：{my_set}")

# 清空集合 .clear()
my_set.clear()
print(f"清空之后为：{my_set}")

# 取两个集合差集 集合1.difference(集合2)  取出集合1和集合2的差集，集合1有而集合2没有的元素
# 结果：取差集后得到一个新集合，集合1和集合2不变
set1 = {1,2,3}
set2 = {3,4,5}
set3 = set1.difference(set2)
print(f"集合1{set1}和集合2{set2}，取差集得到集合3{set3}")

# 消除差集 集合1.difference_update(集合2) 对比集合1和集合2，在集合1内，删除和集合2相同的元素
# 结果：集合1被修改，集合2不变
set1.difference_update(set2)
print(f"集合1{set1},集合2{set2}")

# 合并集合 集合1.union(集合2) 将集合1和集合2组合成新集合
# 结果：得到新集合，集合1和集合2不变
set1 = {1,2,3}
set2 = {3,4,5}
set3 = set1.union(set2)
print(f"集合1{set1}和集合2{set2}合并后得到：{set3}")

# 统计集合元素数量 len()
num = len(set3)
print(f"集合3{set3}的元素个数为：{num}")
set4 = {1,1,1,1,2,3,4,5}
num2 = len(set4)
print(f"集合4{set4}的元素个数为：{num2}")

# 集合的遍历
# while不可以，因为集合不支持下标索引
# for可以
for x in set4:
    print(f"集合的元素有：{x}")

# 集合特点
# 容纳多个数据
# 数据类型不限
# 无序存储，不支持下标索引
# 不允许元素重复
# 可以修改
# 只支持for循环

# 案例
my_list = ['hello','hello','world','hello','Fang','python']
my_set = set()
for x in my_list:
    my_set.add(x)

print(f"my_set = {my_set}")