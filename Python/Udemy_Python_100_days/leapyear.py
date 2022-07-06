# leap year - 1. 366 days 2. every 4 years - year/4 == 0 3. year/100 == 0 - not a leap year 
# 4. every century/400 == 0

year = int(input("Input the which you want to know is a leap or not: "))

if year%400 == 0: print("Leap year.")
elif year%100 == 0: print("Not a Leap year and a century. ")
elif year%4 == 0: print("Leap year")
else: print("Not a leap year")
