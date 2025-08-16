from typing import Union
# Union[类型1，类型2，...] 表示类型要么是类型1，要么是类型2，要么是...
list:list[Union[int,str]] = [1,2,"hello","hi"]

def func(data:Union[int,str]) -> Union[int,str]:
    return data
func(2)