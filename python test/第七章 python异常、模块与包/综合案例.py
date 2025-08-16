import my_utils.str_util
from my_utils import file_util
print(my_utils.str_util.str_reverse("hello"))
print(my_utils.str_util.substr("hello",1,3))
file_util.append_to_file("D:/python test/bill.txt", "\nhello")
file_util.print_file_info("D:/python test/bill.txt")