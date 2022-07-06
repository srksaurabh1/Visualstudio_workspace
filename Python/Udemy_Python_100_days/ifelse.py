# if - else - odd even no.
num = int(input("Input a no.: "))
if(num%2 == 0):
    print("No.is Even ")
else:
    print("No. is Odd ")

# nested - if else or elif
height = float(input("Input your height in m : "))
weight = float(input("Input your weight in kgs: "))
bmi = round(weight/(height**2)) #round to nearest whole no.

# & -  && - 
# f-string - syntax - f""
if bmi<18.5: print(f"bmi = {bmi} - Underweight. ")
elif bmi<25: print(f"bmi = {bmi} - normal weight. ")
elif bmi<30: print(f"bmi = {bmi} - Overweight ")
elif bmi<35: print(f"bmi = {bmi} - Obese. ")
else: print(f"bmi = {bmi} - Clinically obese ")