inp = input().split()
x=int(inp[0])
k = int(inp[1])
for i in range(k):
    if x%10==0 :
        x= x/10
    else :
        x=x-1
print(int(x))

