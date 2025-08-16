# 基础折线图
# 导入包，导入Line功能构建折线图对象
from pyecharts.charts import Line
from pyecharts.options import TitleOpts,LegendOpts,ToolboxOpts,VisualMapOpts
# 得到折线图对象
line = Line()
# 添加x轴数据
line.add_xaxis(['中国','美国','英国'])
# 添加y轴数据
line.add_yaxis("GDP", [30,20,10])
# 生成图表
# line.render()

# pyecharts模块中有很多配置选项，常用2个类别的选项：
# 全局配置选项 设置标题，图例，工具箱等等，针对通用配置进行设置
# set_global_opts方法 
line.set_global_opts(
    title_opts=TitleOpts(title="GDP展示",pos_left = "center",pos_bottom = "1%"), # 标题
    legend_opts=LegendOpts(is_show=True),# 图例
    toolbox_opts=ToolboxOpts(is_show=True),# 工具箱
    visualmap_opts=VisualMapOpts(is_show=True)# 视觉映射
)

# 系列配置选项


line.render()