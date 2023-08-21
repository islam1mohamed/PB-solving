
dic= {}
words = []
with open(r"D:\Data_sets\Excercise\poem.txt",'r') as f:
    for line in f:
        #print(line)
        words+= line.split()
    print(words)

    for word in words:
        #for item in line:
        try :
            dic[word]+=1
        except:
            dic[word]= 1


    
sort_dic= sorted(dic.items(),key= lambda x:x[1],reverse=True );
print(sort_dic)

