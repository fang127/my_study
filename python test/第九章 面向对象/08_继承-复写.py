# 复写：子类继承父类的成员属性和成员方法后，如果对其“不满意”，那么可以进行复写。
# 即：在子类中重新定义同名的属性

class Phone:
    IMEI:str
    producer = "HW"

    def call_by_4g(self):
        print("4g通话")

class MyPhone(Phone):
    producer = "XM"

    def call_by_4g(self):
        print("开启单核模式")
        # 复写之后如何调用父类同名成员
        # 方法1
        # 父类名.成员变量
        print(f"父类厂商为：{Phone.producer}")
        # 父类名.成员方法(self)
        Phone.call_by_4g(self)

        # 方法2
        # super().成员变量
        print(f"父类厂商为：{super().producer}")
        # super().成员方法
        super().call_by_4g()

        print("使用4g进行通话")
        print("关闭CPU单核模式，确保性能")

phone = MyPhone()
phone.call_by_4g()
print(phone.producer)