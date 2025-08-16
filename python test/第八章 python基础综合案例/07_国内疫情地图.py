import json
from pyecharts.charts import Map
from pyecharts.options import TitleOpts,LegendOpts,ToolboxOpts,VisualMapOpts
# 打开数据
cn_f = open(r"D:\python test\地图数据\疫情.txt",'r',encoding="utf-8")
# 读取数据
cn_data = cn_f.read()
# 关闭文件
cn_f.close()
# 转为字典
cn_dict = json.loads(cn_data)
# print(cn_dict)
# 取出省份数据
province_data_list = cn_dict['areaTree'][0]['children']
# print(province_data_list)
# print(type(province_data_list))

# 解决省份名字后面没有带省字，缺失的问题
def def_province(pro):
    provinces = ["北京市", "天津市", "河北省", "山西省", "内蒙古自治区", "辽宁省", "吉林省", "黑龙江省", "上海市", "江苏省", "浙江省", "安徽省", "福建省", "江西省",
                 "山东省", "河南省", "湖北省", "湖南省", "广东省", "广西壮族自治区", "海南省", "重庆市", "四川省", "贵州省", "云南省", "西藏自治区", "陕西省", "甘肃省",
                 "青海省", "宁夏回族自治区", "新疆维吾尔自治区", "台湾省", "香港特别行政区", "澳门特别行政区"]
    for p in provinces: 
        if pro in p:
            return p
            break

data = list()
for province in province_data_list:
    province_name = def_province(province['name'])
    # print(province_name,type(province_name))
    province_data = province["total"]["confirm"]
    data.append((province_name, province_data))
    # print(f"每行数据为：{data_tuple}")
print(data)
map = Map()
map.add("中国疫情数据",data,"china")
# 全局设置
map.set_global_opts(
    title_opts = TitleOpts(title = '中国各省确诊人数图',pos_left = 'center',pos_bottom = '1%'),
    legend_opts = LegendOpts(is_show=True),
    toolbox_opts = ToolboxOpts(is_show=True),
    visualmap_opts = VisualMapOpts(is_show=True,is_piecewise=True,
                                   pieces = [
                                           {'min':1,"max":99,'label':'1-99','color':'#CCFFFF'},
                                           {'min':100,"max":999,'label':'100-999','color':'#FFFF99'},
                                           {'min':1000,"max":4999,'label':'1000-4999','color':'#FF9966'},
                                           {'min':5000,"max":9999,'label':'5000-9999','color':'#FF6666'},
                                           {'min':10000,"max":99999,'label':'10000-99999','color':'#CC3333'},
                                           {'min':100000,'label':'100000+','color':'#990033'},
                                    ]
                                )
)
# 生成地图
map.render("中国疫情数据.html")