# 通过下标索引取出特定位置元素[],从前向后，起始为位置为0；从后向前，最后一个为-1，倒数第二个为-2
my_list = [1,2,3,4,5,6,7,'w',"hello",None,True,False]
print(my_list[0])
print(my_list[1])
print(my_list[2])
print(my_list[-3])
print(my_list[-2])
print(my_list[-1])

num = my_list[0]
print(num)
my_list[3] = 22222222
print(my_list)

# 嵌套列表
my_list2 = [[1,2,3,4],[5,6,7,8,9]]
print(my_list2[0][0])
print(my_list2[0][3])
print(my_list2[1][2])
print(my_list2[-1][2])
print(my_list2[-1][-1])