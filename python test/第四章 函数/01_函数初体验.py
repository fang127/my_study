name = "hello world"
length = len(name) # len是python内置的函数
print(length)

# 自定义函数统计字符串长度
def my_len(data):
    count = 0
    for i in data:
        count += 1
    print(f"{data} length is {count}")

name = "hello world"
my_len(name)

str1 = "hello"
my_len(str1)

str2 = "sssssssdxxxxxxx"
my_len(str2)