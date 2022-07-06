def formate_name():
    f_name = input("Enter your 1st name: ").capitalize()
    l_name = input("Enter your last name: ").capitalize()
    concatinate = f_name + ' ' + l_name
    return concatinate

op = formate_name()
print(f"Your name is {op}")