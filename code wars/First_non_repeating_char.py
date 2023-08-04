def first_non_repeating_letter(s):
    s_lis=list(s.lower())
    nums =[]

    s_dic= {}
    sol = ''
    # we want to get the letter that is not repeated so we get it's number
    for i in s_lis:
        try:
            s_dic[i] +=1
        except:
            s_dic[i] = 1
    
    for i in s_dic:
        
        if s_dic[i] == 1 :
            sol = i
            break
    
    if sol in s:
        return sol
    else :
        return sol.upper()

def first_non_repeating_letter_clever(string):
    string_lower = string.lower()
    for i, letter in enumerate(string_lower):
        if string_lower.count(letter) == 1:
            return string[i]
            
    return ""
    
x=first_non_repeating_letter('Go hang a salami, I\'m a lasagna hog!')
print(x)