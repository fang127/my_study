name = input("Who are you ?")
print(f"Oh , you are {name}")

# 输入数字类型
num = int(input("请告诉我你的银行密码："))
print("密码类型是：",type(num))
# 不管输入是什么，系统都作为字符串
# 可以通过类型转换int(x),float(),str()进行转换