# 字符串是字符的容器，可以存放任意数量的字符
str = "hello,world"
print(f"str[1] = {str[1]}")
print(f"str[-4] = {str[-4]}")

# 字符串不可修改 如果必须修改，会得到新的字符串
# str[0] = "H"

# 查找元素 .index(element)
index = str.index("world")# 查找world首位置
print(f"world的首位置为：{index}")
# 字符串的的替换 .replace(字符串1,字符串2) 原字符串不变，得到新的字符串
new_str = str.replace("o","1111")
print(f"字符串{str},进行替换后得到：{new_str}")
# 字符串的分割 .split(分割符字符串) 字符串本身不变，得到一个列表对象
new_str1 = str.split(",")
print(f"将字符串{str},进行分割后得到{new_str1}")
new_str2 = str.split("o")
print(f"将字符串{str},进行分割后得到{new_str2}")
# 字符串规整操作(去前后空格/去前后指定字符串) .strip()
str1 = "      Hello World  "
new_str3 = str1.strip()
print(f"字符串{str1},进行去除空格得到{new_str3}")
str2 = "12Hello World21"
new_str4 = str2.strip("12")
print(f"字符串{str2}，进行去除前后12得到:{new_str4}")
# 统计某字符串出现次数 .count(element)
str3 = "it is a ititit"
count = str3.count("it")
print(f"it出现的次数为：{count}")
# 统计长度 len(名称)
len = len(str3)
print(f"字符串str3的长度为：{len}")

# 字符串特点
# 只可以存储字符串
# 长度任意 取决于电脑内存大小
# 支持下标索引
# 允许重复字符串存在
# 不可以修改’
# 支持for和while循环

# 案例
s = "itheima itcast boxuegu"
count = s.count("it")
print(f"字符串{s}中it出现的的次数为：{count}")
new_s = s.replace(" ","|")
print(f"将字符串{s}中的空格替换为|后的到：{new_s}")
l = new_s.split("|")
print(f"将字符串{new_s}按照|进行分割得到：{l}")