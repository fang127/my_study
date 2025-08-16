# while循环和for循环遍历列表
# 将容器内的元素依次取出进行处理的行为，称之遍历迭代

# def list_while_func():
#     my_list = ["hello","world",1,2]
#     index = 0
#     while index < len(my_list):
#         element = my_list[index]
#         print(f"列表的元素：{element}")
#         index += 1

# list_while_func()

# def list_for_func():
#     my_list = ["hello","world",1,2]
#     for x in my_list:
#         print(f"列表的元素：{x}")
    
# list_for_func()

# 案例
my_list = [1,2,3,4,5,6,7,8,9,10]
def list_while_func(list01):
    index = 0
    new_list = []
    while index < len(list01):
        if list01[index] % 2 == 0:
            new_list.append(list01[index])
        index += 1
    return new_list
    
print(f"通过while循环取出的结果为：{list_while_func(my_list)}")

def list_for_func(list01):
    new_list = list()
    for x in list01:
        if x % 2 == 0:
            new_list.append(x)
    return new_list

print(f"通过for循环取出的结果为：{list_for_func(my_list)}")