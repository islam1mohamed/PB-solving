def descending_order(num):
    num = str(num)
    num = list(num)
    num.sort(reverse= True)
    op = ''
    for i in num:
        op+= i

    return int(op)

print(descending_order(919))
