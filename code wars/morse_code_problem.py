from preloaded import MORSE_CODE


def decode_morse(morse_code):
    # Remember - you can use the preloaded MORSE_CODE dictionary:
    # For example: 
    # MORSE_CODE['.-'] = 'A'
    # MORSE_CODE['--...'] = '7'
    # MORSE_CODE['...-..-'] = '$'

    counter=0
    morse_code = morse_code +' '
    message = ''
    holder=''
    for i in morse_code:
        if i != ' ':
            counter =0
            holder +=i 
        else:
            counter+=1
            if counter==2:
                message += ' '
            elif counter == 3:  # Three consecutive spaces indicate the end of a word
                message = message   # Add a space to separate words
            else :
                print(holder)
                if str(MORSE_CODE.get(holder))!= None:
                    message+= str(MORSE_CODE.get(holder))
                holder = ''
        if message[0]== ' ':
            return message[1:-1]
    return message