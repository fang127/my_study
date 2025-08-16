# 文件相关的类定义
from data_define import Record
import json
# 抽象类
class FileReader:
    # 读取文件
    def read_data(self) -> list[Record]:
        # 将读取的数据转为Record对象，封装到list内返回
        pass

class TextFileReader(FileReader):
    def __init__(self,path):
        # path 文件路径
        self.path = path

    # 复写父类方法
    def read_data(self) -> list[Record]:
        f = open(self.path,'r',encoding='utf-8')
        record_list:list[Record] = list()
        for line in f.readlines():
            line = line.strip('\n') # 消除每一行的\n
            data_list = line.split(",")
            print(data_list)
            record = Record(data_list[0],data_list[1],int(data_list[2]),data_list[3])
            record_list.append(record)
        f.close()
        return record_list
    
class JsonFileReader(FileReader):
    def __init__(self,path):
        self.path = path

    def read_data(self) -> list[Record]:
        f = open(self.path,'r',encoding='utf-8')
        record_list:list[Record] = list()
        for line in f.readlines():
            line_dict = json.loads(line)
            record = Record(line_dict['date'],line_dict['order_id'],line_dict['money'],line_dict['province'])
            record_list.append(record)
            print(line_dict,type(line_dict))
        f.close()
        return record_list


if __name__ == "__main__":
    text_file_reader = TextFileReader("D:/python test/第九章 面向对象/13_数据分析案例/2011年1月销售数据.txt")
    list1 = text_file_reader.read_data()
    json_file_reader = JsonFileReader("D:/python test/第九章 面向对象/13_数据分析案例/2011年2月销售数据JSON.txt")
    list2 = json_file_reader.read_data()

    for element in list1:
        print(element)

    for element in list2:
        print(element)