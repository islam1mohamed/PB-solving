
dic= {}
with open(r"D:\Data_sets\Excercise\nyc_weather.csv",'r') as f:
#    for line in f: # this could also work
    title = f.readline()
    lines= f.readlines()
    len(lines)
    for i in lines:
        line= i.split(',')
        date , temp= line
        dic[date] = temp
sum= 0
for i in range(1,8,1):
    sum+=int(dic[f"Jan {i}"])
avg = sum/7
print (avg)

    
    