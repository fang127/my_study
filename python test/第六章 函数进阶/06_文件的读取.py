# 文章、视频、可执行程序都可以被保存为一个文件，并赋予一个文件名
# 分为：文本文件，视频文件，音频文件，图像文件，可执行文件等
# open()打开函数 可以打开一个已存在文件或创建一个新文件
# open(name,mode,encoding)  
# name为目标文件名的字符串，可以包括文件所在具体路径
# mode 为打开文件模式：只读，写入，追加
# encoding：编码格式 推荐UTF-8
# 文件打开以文件对象的类型接收，对象是python中特殊的数据类型 拥有属性和方法
# r只读     w写入（从头编辑）原有内容删除,文件不存在，自动创建     a追加,文件不存在，自动创建 

# 打开文件opm()
# f = open("D:/python test/第六章 函数进阶/测试.txt","r",encoding = "UTF-8")# 如果只给文件名称，默认和当前python代码同一文件
# print(f"File类型为：{type(f)}")

# 读取文件 .read(num) 表示从文件中读取的数据的长度为num，如果没有num，那么就表示全部读取
# print(f"读取10字节的结果为：{f.read(10)}")
# print(f"读取全部内容的结果为：{f.read()}")
# .readlines() 表示按照行的方式读取整个文件，并且返回一个列表，每一行数据为列表中一个元素
# L = f.readlines()
# print(f"L读取的内容为：{L}，类型为：{type(L)}")
# python读取文件实际有个光标位置，读了一次后，在读会接着上次读取的位置
# readline() 一次读取一行
# L1 = f.readline()
# L2 = f.readline()
# L3 = f.readline()
# print(f"第1行为{L1}")
# print(f"第2行为{L2}")
# print(f"第3行为{L3}")

# for循环读取
# for line in f:
#     print(f"每一行的结果为：{line}")

# 关闭文件 .close()  如果不调用关闭文件，程序没有停止运行，那么文件也将一直被python程序占用
# import time
# time.sleep(10) # 表示让程序一直运行，10秒，10秒后关闭
# f.close()

# with open() as 名称       可以在操作完成后自定关闭文件，避免忘记.close()
with open("D:/python test/第六章 函数进阶/测试.txt","r",encoding = "UTF-8") as f:
    for line in f:
        print(f"每一行内容为：{line}")