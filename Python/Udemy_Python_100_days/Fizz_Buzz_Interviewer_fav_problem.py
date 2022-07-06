# Allows interviewer to see how you use logic to solve a problem
# print - if divisible by 3 = fizz, by 5 = buzz,  by both = fuzzbizz



for i in range(1,101):
    if i % 3 == 0 and i % 5 == 0:
        print("FizzBuzz ")
    elif i % 3 == 0:
        print("Fizz ")
    elif i % 5 == 0:
        print("Buzz ")
    else:
        print(i)

