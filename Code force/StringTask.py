user_input=input()
user_input = user_input.lower()

for letter in user_input:
       if letter not in ['a' , 'o' , 'e' , 'i' , 'u','y']:
            print('.'+letter, end = '')
