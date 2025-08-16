# 当程序遇到bug有两种情况 1.整个程序停止运行 2.对bug进行提醒，程序继续运行
# 在实际工作中，我们需要达到第二种情况，就需要捕获异常
# 异常捕获的作用：提前假设某处会出现异常，做好提前准备，当真的出现异常时，可以有后续手段

# 基本语法 
# try:
#     可能发生错误的代码
# except:
#     如果出现异常执行的代码
try:
    f = open('abc.txt','r',encoding="utf-8")
except: # 捕获所有异常
    print(f"出现异常，文件不存在,将以w模式打开")
    f = open('abc.txt','w',encoding="utf-8")

# 捕获指定异常
# 基本语法 
# try:
#     可能发生错误的代码
# except NameError:
#     如果出现异常执行的代码

try:
    print(name)
except NameError as e:
    print("出现变量未定义异常")
    print(e)

# try:
#     1/0
# except NameError as e:# 指定异常错误，捕获不到
#     print(e)

# 捕获多个异常
try:
    1/0
except (NameError,ZeroDivisionError) as e: # 捕获多个异常
    print(e)

# 捕获所有异常
try:
    1/0
except Exception as e:
    print("出现异常了")

# 异常else
# 基本语法 
# try:
#     可能发生错误的代码
# except:
#     如果出现异常执行的代码
# else：
#     如果没有异常执行代码
try:
    print('hello')
except Exception as e:
    print("出现异常")
else:
    print("没有异常")

# 异常finally
# 表示无论是否异常都要执行的代码
try:
    open('123.txt','r',encoding='utf-8')
except Exception as e:
    print("出现异常了")
else:
    print('没有异常')
finally:
    print('有没有异常都要执行此句')
    
try:
    print('hello')
except Exception as e:
    print("出现异常了")
else:
    print('没有异常')
finally:
    print('有没有异常都要执行此句')