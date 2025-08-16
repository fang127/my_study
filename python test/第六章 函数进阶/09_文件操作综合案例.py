f = open('bill.txt','r',encoding="utf-8")
f_beifen = open('bill_beifen.txt','w',encoding="utf-8")
for line in f:
    print(line)
    line = line.strip('\n')
    L = line.split(',')
    if L[4] == '测试':
        continue
    f_beifen.write(line)
    f_beifen.write('\n')
f_beifen.close()
f.close()