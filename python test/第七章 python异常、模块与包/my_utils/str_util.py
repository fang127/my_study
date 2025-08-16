def str_reverse(s):
    return s[::-1]

def substr(s,x,y):
    return s[x:y:1]

if __name__ == "__main__":
    print(str_reverse("hello"))
    print(substr("hekkio",1,3))