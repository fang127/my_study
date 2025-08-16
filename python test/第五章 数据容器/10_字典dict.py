# 字典有key和value  和c++的map类似
# 可以通过key找到关联的value 因此字典的key不可重复，value可以重复
# 字典同样使用{}

# 字面量：{key:value,key:value,key:value,...}
# {1:"hello",2:"world",3:"nihao"}

# 定义字典变量： 变量名称 = {key:value,key:value,key:value,...}
my_dict = {"周杰伦":88,"王力宏":77,"Jee":99}

# 定义空字典：变量名称 = {}     变量名称 = dict()
my_dict1 = {}
my_dict2 = dict()

print(f"字典1：{my_dict},类型：{type(my_dict)}")
print(f"字典2：{my_dict1},类型：{type(my_dict1)}")
print(f"字典3：{my_dict2},类型：{type(my_dict2)}")

my_dict1 = {"王力宏":77,"王力宏":77,"Jee":99}
print(f"重复key字典的内容为：{my_dict1}")

# 通过key找value 字典[key]
score = my_dict["Jee"]
print(f"Jee的考试分数为：{score}")
score1 = my_dict["周杰伦"]
print(f"周杰伦的考试分数为：{score1}")

# 字典的嵌套 字典中key和value可以为任意数据类型，但key不可以为字典
d = {"王力宏":{"语文":77,"数学":66,"英语":33},
     "周杰伦":{"语文":88,"数学":86,"英语":55},
     "林俊杰":{"语文":99,"数学":96,"英语":66}}
print(f"d = {d}")
d1 = d["周杰伦"]
print(f"周杰伦的成绩为：{d1}")
yuwen_score_d1 = d["周杰伦"]["语文"]
print(f"周杰伦的语文成绩为：{yuwen_score_d1}")
yingyu_score_linjunjie = d["林俊杰"]["英语"]
print(f"林俊杰的英语成绩为：{yingyu_score_linjunjie}")