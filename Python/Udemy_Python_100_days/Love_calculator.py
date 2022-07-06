print("***Welcome to love calculator***")
name1 = input("What is your name? \n").lower()
name2 = input("What is your Crush's name? \n").lower() #lower() function - bd me aata h

t = name1.count("t") + name2.count("t") # count fn bhi bd me aata h lekin usme arguments dene hote h
r = name1.count("r") + name2.count("r")
u = name1.count("u") + name2.count("u")
e = name1.count("e") + name2.count("e")

true = t + r + u + e

l = name1.count("l") + name2.count("l")
o = name1.count("o") + name2.count("o")
v = name1.count("v") + name2.count("v")

love = l + o + v + e

love_score = str(true) + str(love)
x = int(love_score)
print("your love score is: ",love_score)

if x<10 or x>90:
    print("You go together like coke and mentos")
elif x>=10 and x<=90:
    print("You are going to get married - Hurray!")
    
