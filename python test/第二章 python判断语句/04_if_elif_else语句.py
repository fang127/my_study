while True:
    score = int(input("请输入成绩："))
    if score > 90 :
        print("成绩优秀")
    elif score > 80 :
        print("成绩良好")
    elif score > 60 :
        print("成绩及格")
    else :
        print("不及格，下次继续努力")
        break
