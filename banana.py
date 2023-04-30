inp = input()
parts= inp.split(' ')
banana_price=int(parts[0])
my_money=int(parts[1])
num_bananas=int(parts[2])
money_needed=0
for i in range(num_bananas+1):
    money_needed += i*banana_price


borrowed_money= money_needed-my_money
if borrowed_money>0:
        print(borrowed_money)
else :
        print ("0")
