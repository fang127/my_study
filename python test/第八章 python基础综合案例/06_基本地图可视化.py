from pyecharts.charts import Map
from pyecharts.options import TitleOpts,VisualMapOpts,LegendOpts,ToolboxOpts
map = Map()
# 准备数据
data = [
    ('北京市',99),
    ('上海市',199),
    ('湖南省',299),
    ('台湾省',399),
    ('广东省',499)
]
# 添加数据
map.add("测试地图",data,"china")
map.set_global_opts(
    visualmap_opts = VisualMapOpts(
        is_show=True,
        is_piecewise=True,
        pieces = [
            {"min":1,"max":9,"label":"1-9","color":"#CCFFFF"},
            {"min":10,"max":99,"label":"10-99","color":"#FF6666"},
            {"min":100,"max":500,"label":"100-500","color":"#990033"}
            ]
        ),
    title_opts = TitleOpts(title = "全国地图数据",pos_left = "center",pos_bottom = "1%"),
    legend_opts = LegendOpts(is_show=True),
    toolbox_opts = ToolboxOpts(is_show=True)
)
map.render("基础地图.html")