x=input()
i=0
while x != "":
     i+=1

     x=x.replace(x[0],"")

if i%2 ==1 :
        print ("IGNORE HIM!")
else : print ("CHAT WITH HER!")