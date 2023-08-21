def rot13(message):
    ciphered_message = ''
    for i in message:
        temp = ord(i)
        if (temp <= 90 and temp >= 65) or (temp <= 122 and temp >= 97):
            temp = temp+13
        ciphered_message+= chr(temp)
    return ciphered_message
        
        
print(rot13('t'))