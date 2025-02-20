#Q1
name_of_user = input("What is your name? " + "\n")
print("Hello " + name_of_user + ".")

student_ID = input("What is your Student ID?\n")
print("Your ID is " + student_ID + ".")

#Q2

var1= float(input("Give me the value 1: "))
var2= float(input("Give me the value 2: "))

sum = var1 + var2
diff = var1 - var2
prod = var1 * var2

print("Variables var1: ", var1 , " var2: " , var2 , "\n" , "Sum is " , sum , ", difference is " , diff , ", product is " , prod)

#Q3

name_of_student = input("what is your Name: ")
lab = float(input("Your Lab grade: "))
midterm = float(input("Your Midterm grade: "))
final = float(input("Your Final grade: "))

last_Score = (lab * 0.25) + (midterm * 0.35) + (final * 0.40)

print("Name: " , name_of_student , "\nLab: " ,  lab , "\nMidterm: " , midterm , "\nFinal: " , final , "\nLast Score: " , last_Score)

#Q4

print("*\n**\n***\n**\n*\n")
