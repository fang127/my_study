# 案例需求 定义一个数字1-10，通过三次机会判断来猜出数字
# 案例要求 每次猜不中 会提示大了或者小了
import random
num = random.randint(1,10)
print(num)
guess_value = int(input("请输入猜测的数字："))

# if guess_value == num:
#     print("恭喜，第一次就猜中了")
# else:
#     if guess_value > num:
#         print("你猜测的数字大了")
#     else:
#         print("你猜测的数字小了")
#     guess_value = int(input("请输入猜测的数字："))
#     if guess_value == num:
#         print("恭喜，第二次猜中了")
#     else:
#         if guess_value > num:
#             print("你猜测的数字大了")
#         else:
#             print("你猜测的数字小了")
#         guess_value = int(input("请输入猜测的数字："))
#         if guess_value == num:
#             print("恭喜，第三次猜中了")
#         else:
#             print("游戏结束，你输了")
i = 0
while i < 3:
    if guess_value == num:
        print(f"恭喜，第{i + 1}次就猜中了")
        break
    elif i < 2:
        if guess_value > num:
            print("你猜测的数字大了")
        else:
            print("你猜测的数字小了")
        guess_value = int(input("请输入猜测的数字："))
        i += 1
    else:
        print("游戏结束，你输了")
        break