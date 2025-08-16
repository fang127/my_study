# JSON格式数据，是一种在各种编程语言都可以交互的格式 JSON是字典格式
# 数据转JSON 通过 json.dumps()
import json
data = [{'name':'Jee','age':18},{'name':'Kee','age':28},{'name':'张三','age':38}]
json_str = json.dumps(data,ensure_ascii=False)# 如果有中文需要转换为中文 需要ensure_ascii=False
print(f"json_str = {json_str},类型为：{type(json_str)}")

d = {'name':'周杰伦','age':40}
json_str = json.dumps(d,ensure_ascii=False)
print(f"json_str = {json_str},类型为：{type(json_str)}")

# JSON字符串转为python数据 json.loads()
# 转列表
s = '[{"name": "Jee", "age": 18}, {"name": "Kee", "age": 28}, {"name": "张三", "age": 38}]'
l = json.loads(s)
print(l)
print(type(l))
# 转字典
s = '{"name": "Jee", "age": 18}'
l = json.loads(s)
print(l)
print(type(l))