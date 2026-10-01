n=int(input("enter value for n:"))
sum=0
count=0
largest=0
root=0
for letter in range(2,n,2):
   if letter %2==0:
      sum=sum+letter
print("sum of all even numbers:",sum)
for letter2 in range(1,n):
   if letter2 %3==0 and letter2 %5==0:
      count=count+1
print("the count of numbers divisible by both 3 and 5:",count)      



