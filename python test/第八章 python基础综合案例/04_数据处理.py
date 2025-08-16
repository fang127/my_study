import json
f_us = open("D:/python test/折线图数据/美国.txt",'r',encoding="utf-8")
us_data = f_us.read()
# 去掉JSON不规范的开头
us_data = us_data.replace("jsonp_1629344292311_69436(","")
# 去掉JSON不规范的结尾
us_data = us_data[:-2:1]
# json转python字典
us_dict = json.loads(us_data)
# 获取trend key
trend_data = us_dict['data'][0]['trend']
# 获取日期数据 用于x轴 只取到2020年 即下标为314
x_data = trend_data['updateDate'][:314]
print(type(x_data))
print(x_data)
# y轴数据
y_data = trend_data['list'][0]['data'][:314]
print(type(y_data))
print(y_data)