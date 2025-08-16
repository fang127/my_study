print("hello")
print("hello")

print("hello",end='')
print("hello")

print("hello",end='\t')
print("world")

print("hello \twang")
print("I am \twang")

print("hello","world",sep='->')

# while输出99乘法表
i = 1
while i <= 9:
    j = 1
    while j <= i:
        print(f"{j}*{i}={i * j}",end='\t')
        j += 1
    print() # 空内容就是换行
    i += 1