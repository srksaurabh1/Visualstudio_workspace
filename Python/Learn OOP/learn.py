import csv
import os

class Item:
    pay_rate = 0.8 # The pay rate after 20% discount
    all = []
    
    def __init__(self, name:str , price:float, quantity:int = 0): #constructor
        #run validations to recieved arguments
        assert price    >= 0 , f"Price {price} is not greater or equal to zero!"
        assert quantity >= 0  , f"Quantity {quantity} is not greater or equal to zero!"
        
        #assihn to self object
        self.name = name
        self.price = price
        self.quantity = quantity

        # Actions to execute
        Item.all.append(self) 


    def cal(self) :
        return self.price * self.quantity

    def apply_discount(self):
        self.price = self.price * self.pay_rate

    @classmethod # decorator
    def instantiate_from_csv(cls):
        my_dir = 'D:\Programs\Visualstudio workspace\Python\Learn OOP'
        my_file = 'item.csv'
        file_with_dir = os.path.join(my_dir,my_file)
        with open(file_with_dir , 'r') as f:
            reader = csv.DictReader(f)
            items = list(reader)

        for item in items:
            Item(
                name     = item.get('name'),
                price    = float(item.get('price')),   
                quantity = int(item.get('quantity'))
            )

    @staticmethod
    def is_integer(self):
        pass

 
    def __repr__(self): #repesenting object
        return f"Item('{self.name}', {self.price}, {self.quantity})"

Item.instantiate_from_csv()
print(Item.all)