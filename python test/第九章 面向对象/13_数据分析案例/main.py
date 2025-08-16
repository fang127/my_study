# 主业务逻辑代码
# 设计一个类，完成数据封装
# 设计抽象类，完成文件读取相关功能，并使用子类完成具体功能

from file_define import FileReader,TextFileReader,JsonFileReader
from data_define import Record
from pyecharts.charts import Bar
from pyecharts.options import *
from pyecharts.globals import ThemeType

test_file_reader = TextFileReader("D:/python test/第九章 面向对象/13_数据分析案例/2011年1月销售数据.txt")
json_file_reader = JsonFileReader("D:/python test/第九章 面向对象/13_数据分析案例/2011年2月销售数据JSON.txt")
jan_data = test_file_reader.read_data()
feb_data = json_file_reader.read_data()
# 两个月数据合并为1个list
all_data:list[Record] = jan_data + feb_data

# 数据计算
data_dict = dict()
for record in all_data:
    if record.date in data_dict.keys():
        # 当前日期已经有记录了，所以和老记录做累加
        data_dict[record.date] += record.money
    else:
        data_dict[record.date] = record.money
print(data_dict)

# 可视化的开发
bar = Bar(init_opts=InitOpts(theme=ThemeType.LIGHT))
bar.add_xaxis(list(data_dict.keys())) # x轴 日期
bar.add_yaxis("销售额",list(data_dict.values()),label_opts=LabelOpts(is_show=False))
bar.set_global_opts(
    title_opts=TitleOpts(title="每日销售额"),
    toolbox_opts=ToolboxOpts(is_show=True),
)
bar.render("每日销售额柱状图.html")