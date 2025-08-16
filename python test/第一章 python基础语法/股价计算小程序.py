name = "传智播客"
stock_price = 19.99
stock_code = "003032"
growth_index = 1.2
growth_days = 7
growth_days = int(input("请输入增长天数："))
finally_stock_price = stock_price * growth_index ** growth_days
print(f"公司：{name},股票代码：{stock_code}，当前股价：{stock_price}")
print("增长系数：%.1f,经过%d天增长,股价达到了：%.2f" % (growth_index,growth_days,finally_stock_price))