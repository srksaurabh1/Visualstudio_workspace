# 🚨 Don't change the code below 👇
student_heights = input("Input a list of student heights ").split()
for n in range(0, len(student_heights)):
  student_heights[n] = int(student_heights[n])
# 🚨 Don't change the code above 👆


#Write your code below this row 👇
sum = 0
count = 0
for i in range(n):
  sum = student_heights [i] + sum
  count += i
avg = sum/count
avg_round = round(avg)
print(avg_round)



