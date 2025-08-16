# 通过%s,%表示占位 s表示变量  将内容转成字符串，放入占位位置
name = 'Jee'
age = 19
num = 11111111111
print("My name is %s " % name)
message = "My name is %s , My age is %s , My num is %s !" % (name,age,num)
print(message)

# %d 将内容转成整型，放入占位位置
# %f 将内容转成浮点型，放入占位位置
birthday = 2001
day = 12.7
message1 = "My name is %s , my birthday is %d.%f" % (name,birthday,day)
print(message1)