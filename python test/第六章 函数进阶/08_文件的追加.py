 # a模式 追加的形式继续写
f = open("test.txt",'a',encoding = "UTF-8")
f.write("hello,world,fang!!!!!!!")
f.flush()
f.write("\n你好")
f.close()