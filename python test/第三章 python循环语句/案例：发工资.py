import random
money = 10000
for id in range(1,21):
    score = random.randint(1,10)
    if score < 5:
        print(f"员工{id},绩效为：{score}，不发工资，下一位")
        continue
    else:
        if money >= 1000:
            money -= 1000
            print(f"员工{id},绩效为：{score},发放工资1000元，账户余额还剩{money}元")
        else:
            print(f"余额不足，当前余额：{money}，不足以发工资，下个月再发")
            break