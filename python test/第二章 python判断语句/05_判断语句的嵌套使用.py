import random
# score = random.randint(1,100)
score = int(input("请输入你的成绩："))
if score > 60:
    print("及格")
    if  score > 90:
        print("优秀")
    elif score > 80:
        print("良好")
    else:
        print("及格")
else:
    print("不及格")
    if score > 50:
        print(f"score > 50 , score = {score}")
    elif score > 40:
        print(f"score > 40 , score = {score}")
    else:
        print(f"score < 40 , score = {score}")   