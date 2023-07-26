def digital_root(n):
    # ...
    sum = 0
    if len(str(n)) == 1:
        sum =n
    
    while len(str(n)) !=1:
        n=str(n)
        sum=0
        
        for i in n:
            sum += int(i)
        n = sum
        
    return sum

print(digital_root(5)) #16 ->7

n=106
y=map(int,str(n))
print(y)