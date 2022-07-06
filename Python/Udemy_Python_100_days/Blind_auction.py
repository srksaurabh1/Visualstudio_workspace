from curses.ascii import islower
import os
os.system("cls")

from art_auction import logo
print(logo)

dict = {}
n = 10

for i in range(n):
    name = input("What is your name: ")
    bid = input("What is your bid amount: $")
    another_candidate = input("Is their any another collegues? Type 'yes' or 'no'... ")
    
    dict[name] = bid

    
    if another_candidate == 'yes':
        os.system("cls")
    elif another_candidate == 'no':
        break
        

for _ in dict:
    if dict[_+1] > dict[_]:
        won = str(dict[_+1])
    else:
        won = str(dict[_])

print(f"The bid is won by {won}")
print(dict)