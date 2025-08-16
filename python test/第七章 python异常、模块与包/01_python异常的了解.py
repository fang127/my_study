# 异常 当检测到一个错误时，python解释器就无法继续执行，会出现一些错误的提示，这就是异常，即BUG
# 例如：通过open打开不存在的文件，会异常
f = open('w.txt','r',encoding="utf-8")
# 提示：FileNotFoundError: [Errno 2] No such file or directory: 'w.txt'