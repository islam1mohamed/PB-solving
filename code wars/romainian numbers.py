def solution(roman):
    """complete the solution by transforming the roman numeral into an integer"""
    sum = 0
    before =100000000
    n = 0
    for i in roman:
        if i == 'I':
            n=1
        elif i == 'V':
            n= 5
        elif i == 'X':
            n=10
        elif i == 'L':
            n=50
        elif i == 'C':
            n=100
        elif i == 'D':
            n = 500
        elif i == 'M':
            n=1000    
        if n<=before:
            sum += n
        else :
            sum += (n-2*before)
        before = n
    
    return sum


roman = 'XXIV'

'''
x add 10
if before is smaller then -
'''

print(solution(roman))