def print_file_info(file_name):
    f = None
    try:
        f = open(file_name,'r',encoding = "utf-8")
        contend = f.read()
        print(f"内容为：{contend}")
    except Exception as e:
        print(f"出现异常:{e}")
    finally:
        if f:# 如果变量是None，表示False，如果有任何内容，是True
            f.close()    

def append_to_file(file_name,data):
    with open(file_name,'a',encoding = 'utf-8') as f:
        f.write(data)
    f.close()


if __name__ == "__main__":
    print_file_info("D:/python test/bill.txt")
    append_to_file('D:/python test/bill.txt','\nhello,world')