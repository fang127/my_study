import json
from pyecharts.charts import Map
from pyecharts.options import *
henan_f = open(r"D:\python test\地图数据\疫情.txt",'r',encoding = 'utf-8')
henan_data = henan_f.read()
henan_f.close()
henan_dict = json.loads(henan_data)
# print(henan_dict)
# 取出河南各市数据
henandata = henan_dict['areaTree'][0]['children'][3]['children']
# print(henandata)

# 将数据转为map可接收的元组嵌套列表
data = list()
for shi in henandata:
    shi_name = shi['name'] + '市'
    shi_data = shi['total']['confirm']
    data.append((shi_name, shi_data))
# print(type(data))
# 手动添加济源市
data.append(('济源市',5))
print(data)

# 创建地图
map = Map()
map.add("河南省各市确诊人数分布图",data,"河南")
# 全局设置
map.set_global_opts(
    title_opts = TitleOpts(title='河南省各市确诊人数分布图',pos_left='center',pos_bottom='1%'),
    legend_opts=LegendOpts(is_show=True),
    toolbox_opts=ToolboxOpts(is_show=True), 
    visualmap_opts=VisualMapOpts(is_show=True,is_piecewise=True,
                                 pieces=[
                                     {"min":0,'max':49,'lable':'0-49','color':'#CCFFFF'},
                                     {'min':50,"max":99,'label':'40-99','color':'#FFFF99'},
                                     {'min':100,"max":149,'label':'100-149','color':'#FF9966'},
                                     {'min':150,"max":199,'label':'150-199','color':'#FF6666'},
                                     {'min':200,"max":249,'label':'200-249','color':'#CC3333'},
                                     {'min':250,'label':'250+','color':'#990033'},
                                 ]
                                 )
)
# 生成地图
map.render("河南省各市确诊人数.html")