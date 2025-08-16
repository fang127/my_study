# 继承
# 语法：   class 类名(父类名
class Phone:
    IMEI:str # 序列号
    producer:str = 'HW' # 厂商

    def call_by_4G(self):
        print("4G通话")

class Phone2022(Phone):
    face_id = "10001" # 面部识别

    def call_by_5G(self):
        print("2022新功能，5G通话")

phone = Phone2022()
print(phone.face_id)
print(phone.producer)
phone.call_by_4G()
phone.call_by_5G()

# 多继承
# class 类名(父类1，父类2，...)
class NFCReader:
    nfc_type = "第五代"
    producer = "XW"

    def read_card(self):
        print("NFC读卡")

    def write_card(self):
        print("NFC写卡")

class RemoteControl:
    rc_type = "红外遥控"

    def control(self):
        print("红外遥控开启了")

class MyPhone(Phone,NFCReader,RemoteControl):
    pass # pass可用来补全语法，因为类语法要求有内容，通过pass补全语法

phone = MyPhone()
phone.call_by_4G()
phone.read_card()
phone.write_card()
phone.control()

# 当继承时，多个父类中，有相同的成员名称，那么按继承从左到右的顺序保留，即继承的优先级为从左到右
print(phone.producer) # 此时这个producer为Phone类内的