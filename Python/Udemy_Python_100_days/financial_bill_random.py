import random
# Split string method
names_string = input("Give me everybody's names, separated by a comma. ")
names = names_string.split(", ") # .split is very useful to make CSV files
# 🚨 Don't change the code above 👆

#Write your code below this line 👇
x = len(names)
rand = random.randint(0,x-1)
print(names)
print(f"{names[rand]} is going to buy the meal today")