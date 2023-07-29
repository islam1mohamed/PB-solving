def open_or_senior(data):
    
    state = []
    for age  , handicap in data:
        if age >=55 and handicap >7:
            state.append ('Senior')
        else :
            state.append('Open')
   
    return state
print(open_or_senior())