# len()
my_list = [3,1,2,4,5]
my_tuple = (3,1,2,4,5)
my_str = "cabde"
my_set = {3,1,2,4,5}
my_dict = {"key3":1,"key1":2,"key2":3,"key4":4,"key5":5}
print(f"列表大小为：{len(my_list)}")
print(f"元组大小为：{len(my_tuple)}")
print(f"字符串大小为：{len(my_str)}")
print(f"集合大小为：{len(my_set)}")
print(f"字典大小为：{len(my_dict)}")
# 统计容器最大元素 max() # 字典按key值比较的 字符串是按ascii值判断
print(f"列表最大为：{max(my_list)}")
print(f"元组最大为：{max(my_tuple)}")
print(f"字符串最大为：{max(my_str)}")
print(f"集合最大为：{max(my_set)}")
print(f"字典最大为：{max(my_dict)}")
# 统计容器最小元素 min() # 字典按key值比较的 字符串是按ascii值判断
print(f"列表最小为：{min(my_list)}")
print(f"元组最小为：{min(my_tuple)}")
print(f"字符串最小为：{min(my_str)}")
print(f"集合最小为：{min(my_set)}")
print(f"字典最小为：{min(my_dict)},{type(min(my_dict))}")

# 容器通用转换 
# list(容器)  将给定容器转为list
print(f"列表转列表结果是：{list(my_list)}")
print(f"元组转列表结果是：{list(my_tuple)}")
print(f"字符串转列表结果是：{list(my_str)}")
print(f"集合转列表结果是：{list(my_set)}")
print(f"字典转列表结果是：{list(my_dict)}")# 只保留key
# tuple(容器) 将给定容器转为tuple
print(f"列表转元组结果是：{tuple(my_list)}")
print(f"元组转元组结果是：{tuple(my_tuple)}")
print(f"字符串转元组结果是：{tuple(my_str)}")
print(f"集合转元组结果是：{tuple(my_set)}")
print(f"字典转元组结果是：{tuple(my_dict)}")# 只保留key
# str(容器) 将给定容器转为str
print(f"列表转字符串结果是：{str(my_list)}") # 结果为'[1, 2, 3, 4, 5]'，只不过终端不显示‘’
print(f"元组转字符串结果是：{str(my_tuple)}")
print(f"字符串转字符串结果：{str(my_str)}")
print(f"集合转字符串结果是：{str(my_set)}")
print(f"字典转字符串结果是：{str(my_dict)}")# 保留key和value
# set(容器) 将给定容器转为set
print(f"列表转集合结果是：{set(my_list)}")
print(f"元组转集合结果是：{set(my_tuple)}")
print(f"字符串转集合结果是：{set(my_str)}")
print(f"集合转集合结果是：{set(my_set)}")
print(f"字典转集合结果是：{set(my_dict)}")# 只保留key

# 容器排序 sorted(容器,[reverse = True])  排序结果都会被转为列表
print(f"列表排序后为：{sorted(my_list)}")
print(f"元组排序后为：{sorted(my_tuple)}")
print(f"字符串排序后为：{sorted(my_str)}")
print(f"集合排序后为：{sorted(my_set)}")
print(f"字典排序后为：{sorted(my_dict)}") # 字典排序后转为列表，只保留key
# 降序排序
print(f"列表排序后为：{sorted(my_list,reverse = True)}")
print(f"元组排序后为：{sorted(my_tuple,reverse = True)}")
print(f"字符串排序后为：{sorted(my_str,reverse = True)}")
print(f"集合排序后为：{sorted(my_set,reverse = True)}")
print(f"字典排序后为：{sorted(my_dict,reverse = True)}") # 字典排序后转为列表，只保留key