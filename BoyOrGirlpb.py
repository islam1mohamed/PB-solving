x=input()
i=0
while x != 0:
     if x == "":
       break
      
     i+=1

     x=x.replace(x[0],"")

print(i)