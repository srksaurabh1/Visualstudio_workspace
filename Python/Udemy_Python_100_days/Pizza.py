print("Welcome to Python pizza delivery.")
size = input("What size of pizza you want? \n Small-$15, Medium - $20, Large - $30 \n Type S M L reps: ")
add_pepperoni = input("Do you want pepperoni? \n S = $2 extra, for L & M - $3 \ntype Y for yes & type N for No: ")
extra_cheese = input("Do you want extra cheese?\n $1 extra \ntype Y for yes and N for NO: ")

if size == 'S':
    if add_pepperoni == 'Y': 
        price = 15 + 2
        if extra_cheese == 'Y': price = price + 1
elif size == 'M':
    if add_pepperoni == 'Y': 
        price = 20 + 3
        if extra_cheese == 'Y': price = price + 1
else :
    if add_pepperoni == 'Y': 
        price = 30 + 3
        if extra_cheese == 'Y': price = price + 1
print("Your pizza cost is $",price)