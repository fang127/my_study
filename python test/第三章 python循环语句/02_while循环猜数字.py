import random
num = random.randint(1, 100)
i = 0
while True:
    guess_value = int(input("请输入你猜测的数字："))
    if guess_value == num:
        print(f"恭喜你，第{i + 1}次猜对了")
        break
    else: 
        i += 1
        if guess_value > num:
            print("你猜的数字大了")
        else:
            print("你猜的数字小了")
