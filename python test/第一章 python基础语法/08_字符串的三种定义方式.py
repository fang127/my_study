# 1.单引号定义法
name = '你好'
print(type(name))
# 2.双引号定义法
name = "你好"
print(type(name))
# 3.三引号定义法 与多行注释一样 支持换行操作 如果不使用变量接收它，就可以作为多行注释使用
name = """
hello
world
"""
print(type(name))

# 如何定义字符串本身 包含：单引号双引号自身
name = '"你好"'
print(name)
name = "'hello'"
print(name)
# 使用\转义字符解除引号的效用
name = "\"hello"
print(name)
name = '\'hello\''
print(name)