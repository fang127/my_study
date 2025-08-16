# ATM
money = 5000000
name = None
def research_money(value):
    if value:
        print("--------------查询余额--------------")
    print(f"您账户的余额为：{money}")

def set_money():
    print("--------------存款--------------")
    cunkuan = float(input("请输入存款金额："))
    global money
    money = money + cunkuan
    print(f"您存款{cunkuan}成功")
    research_money(False)

def get_money():
    print("--------------取款--------------")
    qukuan = float(input("请输入取款金额："))
    global money
    money = money - qukuan
    print(f"你已取款{qukuan}")
    research_money(False)

def show_menu():
    print("1.查询余额")
    print("2.存款")
    print("3.取款")
    print("4.退出")

name = input("请输入您的姓名：")
print("欢迎来到China bank！")
while True:
    print("--------------主菜单--------------")
    show_menu()
    num = input("请输入您的选择：")
    if num == "1":
        research_money(True)
        continue
    elif num == "2":
        set_money()
        continue
    elif num == "3":
        get_money()
        continue
    else:
        print("欢迎下次使用！")
        break