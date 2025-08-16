__all__ = ["cheng"]

def add(x,y):
    return x - y

def cheng(x,y):
    return x * y

# 通过此if判断，只在此进行测试，在调用此模块时不进行
if __name__ == "__main__":
    print(add(2,1))
    print(cheng(2,2))