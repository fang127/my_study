# 给函数添加说明文档，对函数进行说明
def func(x,y):
    """
    x，y为乘数
    result为积
    return返回结果
    """
    result = x * y
    print(f"{x} * {y} = {x * y}")
    return result 

func(11,2)