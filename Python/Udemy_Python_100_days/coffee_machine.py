import pandas as pd


data = {'Expreso': {'Water': 50,  'Coffee': 18, 'Milk' : 0}, 
        'Latte'  : {'Water': 200, 'Coffee': 24, 'Milk' : 150}, 
        'Cappuccino':{'Water': 250, 'Coffee': 24, 'Milk' : 100} }

report = {'Water': 300, 'Coffee': 100, 'Milk' : 200}

money = 0

def func_coffee(report): 
    user_input = input('What would you like? (espresso/latte/cappuccino)').lower()
    if user_input == 'report':
        for _ in report:
            print(_, ' : ', report[_])
        print('Money :', money)
    elif user_input == 'espresso':
        report = report - data['Expreso']
    elif user_input == 'latte':
        report = report - data['Latte']
    elif user_input == 'cappuccino':
        report = report - data['Cappuccino']
    
    print(report)

    print('Please insert coins.')

def total_bill():
    '''Enter quaters, dimes, nickles, pennies 
    It will calculate the total price in dollars 
    '''
    quaters = int(input('How many quaters?: '))
    dimes =   int(input('How many dimes?: '))
    nickles = int(input('How many nickles?: '))
    pennies = int(input('How many pennies?: '))
    total = 0.25*quaters + 0.10*dimes + 0.05*nickles + 0.01*pennies
        
    return f"Here is $ {total} in change."


func_coffee(report)
# total_bill()


print(f"Here is your ____ Enjoy!")

# TODO 1. howto use it

