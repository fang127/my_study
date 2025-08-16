import random
num = random.randint(1,100)
while True:
    value = int(input("请输入猜想的数字:"))
    if value == num:
        print("恭喜你猜对啦")
        break
    elif value > num:
        print("你猜测的数字大了，再猜一次")
        continue
    elif value < num:
        print("你猜测的数字小了，请再猜一次")
        continue