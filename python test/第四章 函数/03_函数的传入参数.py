# 传入参数的功能是 在函数进行调用的时候，接受外部提供的数据
def calculate(a,b):# 这里的是形式参数
    return a + b

print(calculate(1,2))# 这里是实际参数

# 案例
def temperature_judge(temperature):
    if temperature < 37.5:
        print(f"体温{temperature}正常，请进")
    else:
        print(f"体温{temperature}过高，需要隔离")

import random
# temperature = random.randint(36,38) + random.random()
temperature = round(random.uniform(36,39),2)
temperature_judge(temperature)