# 新增元素 字典[key] = value   字典被修改，新增了元素
# key不可重复，如果key已存在，会对该元素更新
my_dict = {"Jee":99,"Jack":88,"An":77}
my_dict["Hj"] = 66
print(f"字典新增元素后为：{my_dict}")

my_dict["Jee"] = 33
print(f"字典更新后为：{my_dict}")

# 删除元素 .pop(key)  获得指定key的value，同时字典中的key和对应value被删除
score = my_dict.pop("Jee")
print(f"字典中删除了元素{score}后，为：{my_dict}")

# 清空元素 .clear()
my_dict.clear()
print(f"字典清空后为：{my_dict}")

# 获取全部key  .keys()
my_dict = {"Jee":99,"Jack":88,"An":77}
keys = my_dict.keys()
print(f"字典的keys为：{keys}，类型为：{type(keys)}")

# 遍历字典
# 方法1：通过获取key值遍历
for key in keys:
    print(f"字典的key为：{key}")
    print(f"字典的value为：{my_dict[key]}")
# 方法2：直接对字典进行for循环，每一次循环都直接得到key
for key in my_dict:
    print(f"字典的key为：{key}")
    print(f"字典的value为：{my_dict[key]}")

# 统计字典元素数量 len()
num = len(my_dict)
print(f"字典的元素个数为：{num}")

# 字典特点
# 容纳多个数据
# 容纳不同数据类型
# 每一份key-value都是对应的
# 可以通过key获取value key不可重复
# 不支持下标索引
# 可以修改
# 支持for，不支持while

# 案例：
employees = {
    "王力鸿":
    {
        "部门": "科技部",
        "工资": 3000,
        "级别": 1
    },
    "周杰轮":
    {
        "部门": "市场部",
        "工资": 5000,
        "级别": 2
    },
    "林俊节":
    {
        "部门": "市场部",
        "工资": 7000,
        "级别": 3
    },
    "张学油":
    {
        "部门": "科技部",
        "工资": 4000,
        "级别": 1
    },
    "刘德滑":
    {
        "部门": "市场部",
        "工资": 6000,
        "级别": 2
    }
}
print(f"员工信息为：{employees}")

for key in employees:
    if employees[key]["级别"] == 1:
        employees[key]["级别"] += 1
        employees[key]["工资"] += 1000
print(f"修改后的员工信息为：{employees}")