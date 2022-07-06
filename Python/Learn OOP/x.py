class CS:
    def __init__(self, integer):
        self.integer = integer
    def __repr__(self):
        return f'The customize int: {self.integer}'

int1 = CS(4)
print(int1)