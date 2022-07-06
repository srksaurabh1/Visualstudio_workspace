total_sum = 0
for i in range(1,101): #101 not included
    
    if i % 2 == 0:
        total_sum += i
print(f"Total sum of even no. between 1 - 100 including 1 & 100 is {total_sum}")

# Or using step size in range fn
# for i in range(2, 101, 2):
#     total_sum += i
# print(f"Total sum of even no. between 1 - 100 including 1 & 100 is {total_sum}")