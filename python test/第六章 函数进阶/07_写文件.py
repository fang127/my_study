# .write(内容)  内容并未真正写入文件，而是在程序内存中，称为缓冲区
# .flush() 内容刷新，使其真正写入文件
f = open("python.txt",'w',encoding = "UTF-8")
f.write("Hello World!")
f.flush()
f.close() # close()内置了flush功能，如果不调用flush，只调用close也可以写入文件
f = open("python.txt",'w',encoding = "UTF-8")
f.write("Hello World!!!")
f.close()
# 文件不存在，创建文件并且写入，文件存在，会先清空再重写