import time

def timeit(f):

    def wrapper(*args, **kwargs):
        start = time.time()
        ret = f(*args, **kwargs)
        print(time.time() - start)
        return ret
    return wrapper

@timeit
def my_func(x):
    time.sleep(x)

# my_func(1) # my_func = timeit(my_func) 返回wrapper，然后进行wrapper(1)

@timeit
def other_func(x):
    return x * 2
# print(other_func(2))

@timeit
def add(x,y):
    return x + y

# print(add(1,2))

@timeit
def double(X):
    return 2 * X

# double = timeit(10)(double)
print(double(10))