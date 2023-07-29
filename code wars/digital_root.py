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

def digital_root2(n):
	return n%9 or n and 9 
print( 16%9 or 16) #16 ->7

n=106
y=map(int,str(n))
print(y)