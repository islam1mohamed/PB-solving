def filter_list(l):
    'return a new list with the strings filtered out'
    filtered_data=[]
    for element in l:
        if type(element)== int :
            filtered_data.append(element)
        
    return filtered_data

'''
def filter_list(l):

    return [i for i in l if not isinstance(i, str)]
  '''
print(filter_list([1, 2,9,'a', 'a', 'b']))
print(isinstance(3,int))
