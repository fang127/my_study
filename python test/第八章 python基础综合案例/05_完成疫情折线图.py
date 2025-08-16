import json
import pyecharts
# 美国数据
f_us = open("D:/python test/折线图数据/美国.txt",'r',encoding="utf-8")
us_data = f_us.read()
# 去掉JSON不规范的开头
us_data = us_data.replace("jsonp_1629344292311_69436(","")
# 去掉JSON不规范的结尾
us_data = us_data[:-2:1]
# json转python字典
us_dict = json.loads(us_data)
# 获取trend key
us_trend_data = us_dict['data'][0]['trend']
# 获取日期数据 用于x轴 只取到2020年 即下标为314
us_x_data = us_trend_data['updateDate'][:314]
print(type(us_x_data))
print(us_x_data)
# y轴数据
us_y_data = us_trend_data['list'][0]['data'][:314]
print(type(us_y_data))
print(us_y_data)

# 日本数据
f_jp = open("D:/python test/折线图数据/日本.txt",'r',encoding="utf-8")
jp_data = f_jp.read()
# 去掉JSON不规范的开头
jp_data = jp_data.replace("jsonp_1629350871167_29498(","")
# 去掉JSON不规范的结尾
jp_data = jp_data[:-2:1]
# json转python字典
jp_dict = json.loads(jp_data)
# 获取trend key
jp_trend_data = jp_dict['data'][0]['trend']
# 获取日期数据 用于x轴 只取到2020年 即下标为314
jp_x_data = jp_trend_data['updateDate'][:314]
print(type(jp_x_data))
print(jp_x_data)
# y轴数据
jp_y_data = jp_trend_data['list'][0]['data'][:314]
print(type(jp_y_data))
print(jp_y_data)

# 印度数据
f_in = open(r"D:\python test\折线图数据\印度.txt",'r',encoding='utf-8')
in_data = f_in.read()
in_data = in_data.replace("jsonp_1629350745930_63180(","")
in_data = in_data[:-2:1]
in_dict = json.loads(in_data)
in_x_data = in_dict['data'][0]['trend']['updateDate'][:314]
print(type(in_x_data))
print(in_x_data)
in_y_data = in_dict['data'][0]['trend']['list'][0]['data'][:314]
print(type(in_y_data))
print(in_y_data)

line = pyecharts.charts.Line()
line.add_xaxis(us_x_data)
line.add_yaxis("美国确诊人数",us_y_data,label_opts=pyecharts.options.LabelOpts(is_show=False))
line.add_yaxis("日本确诊人数",jp_y_data,label_opts=pyecharts.options.LabelOpts(is_show=False))
line.add_yaxis("印度确诊人数",in_y_data,label_opts=pyecharts.options.LabelOpts(is_show=False))

line.set_global_opts(
    title_opts=pyecharts.options.TitleOpts(title = "2020年美日印三国确诊人数折线图",pos_left = 'center',pos_bottom='1%'),
    legend_opts=pyecharts.options.LegendOpts(is_show=True),
    toolbox_opts=pyecharts.options.ToolboxOpts(is_show=True),
    visualmap_opts=pyecharts.options.VisualMapOpts(is_show=True,pos_left="right")
)

line.render("疫情折线图.html")
f_us.close()
f_jp.close()
f_in.close()