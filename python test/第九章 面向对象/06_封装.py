# 封装：将现实世界的事物的属性和行为，封装到类中，描述为成员变量和成员方法
# 属性和行为有对用户开方的，也有对用户不开放的

# 私有成员  在定义变量或方法时名称以__开头(两个下划线)
# 私有成员，在类外不可访问，类内可以
class Phone:
    __current_voltage : float

    def __keep_single_core(self):
        print("让CPU以单核模式运行")

    def __init__(self,__current_voltage):
        self.__current_voltage = __current_voltage

    def call_bt_5G(self):
        if self.__current_voltage >= 1:
            print("5G已打开")
        else:
            self.__keep_single_core()
            print("电量不足，无法开启5G")

phone = Phone(0) # 类内可以调用
# phone.__keep_single_core() 类外无法调用
phone.call_bt_5G()