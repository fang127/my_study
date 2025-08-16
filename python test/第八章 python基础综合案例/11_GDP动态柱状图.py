# # sort排序
# my_list = [['a',33], ["b",55], ["c",11]]

# # 排序
# my_list.sort(key = lambda element:element[1],reverse=True)
# print(my_list)

# def func(element):
#     return element[1]

# my_list.sort(key = func,reverse = True)
# print(my_list)

# 数据处理
import json
from pyecharts.charts import Bar,Timeline
from pyecharts.options import *
from pyecharts.globals import *
f = open(r'D:\python test\动态柱状图数据\1960-2019全球GDP数据.csv','r',encoding='GB2312')
data_lines = f.readlines()
f.close()
data_lines.pop(0)
data_dict = dict()
for line in data_lines:
    year = int(line.split(',')[0])
    country = line.split(',')[1]
    gdp = float(line.split(",")[2])
    # 判断字典是否有指定的key
    try:
        data_dict[year].append([country,gdp])# 如果year存在执行此句
    except KeyError:
        data_dict[year] = list()
        data_dict[year].append([country,gdp])
# print(data_dict)

# 创建时间线对象
timeline = Timeline({'theme':ThemeType.LIGHT})

# 给年份即key排序
sorted_year_list = sorted(data_dict.keys())

for year in sorted_year_list:
    # 对每年的各个国家gdp排序，只取前八
    data_dict[year].sort(key=lambda element:element[1],reverse = True)
    # 取前八
    year_data = data_dict[year][0:8]
    x_data = list()
    y_data = list()
    for country_gdp in year_data:
        x_data.append(country_gdp[0])
        y_data.append(country_gdp[1]/100000000)

    # 构建柱状图
    bar = Bar()
    x_data.reverse()
    y_data.reverse()
    bar.add_xaxis(x_data)
    bar.add_yaxis('GDP(亿)',y_data,label_opts=LabelOpts(position="right"))
    # 反转x和y轴
    bar.reversal_axis()
    # 设置每一年标题
    bar.set_global_opts(
        title_opts=TitleOpts(title=f"{year}年全球前8GDP数据")
    )
    timeline.add(bar,str(year))

# 时间线全局设置
timeline.add_schema(
    play_interval=1000,
    is_timeline_show=True,
    is_auto_play=True,
    is_loop_play=False
)

# 绘图
timeline.render("1960-2019年全球GDP前8国家.html")