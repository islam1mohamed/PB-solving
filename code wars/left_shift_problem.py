def shuffle_it(arr,*lists):
    lists = list(lists)
    for a,b in lists:   # remember python is very dynamic
        arr[a],arr[b]=arr[b],arr[a]
    return arr
        
print(shuffle_it([1,2,3,4,5],[1,2]))


