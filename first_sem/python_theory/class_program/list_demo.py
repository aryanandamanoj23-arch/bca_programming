marks=['sachin',77,78,65,89,90] #declares an list 'marks' to store marks of 'sachin'
print(marks)
my_mark=[]
sum=0
for number in range(5):
    newmark=int(input("enter the marks:"))
    my_mark.append(newmark)
print("list elements are:")
for i in range(len(my_mark)):
    print("my marks are:",my_mark[i])
    
print("marks are:",my_mark)
for i in range(len(my_mark)):
    sum+=my_mark[i]   
print("SUM:",sum)    