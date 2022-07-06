# 🚨 Don't change the code below 👇
student_scores = input("Input a list of student scores ").split()
for n in range(0, len(student_scores)):
  student_scores[n] = int(student_scores[n])
print(student_scores)
# 🚨 Don't change the code above 👆

#Write your code below this row 👇
score_max = 0

for i in student_scores:
    if i > score_max:
        score_max = i
print(f"The heightest scores is {score_max}")

# for i in range(1,10): - including 1 and excluding 10 [1,10) - range fn 
# for i in range(1,11, 2): - [1,10] step size = 2