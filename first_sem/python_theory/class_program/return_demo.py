total=0
avg=0
percentage=0
m1=0
m2=0
m3=0
rollno=0
def read_data():
   global rollno,m1,m2,m3
   rollno=int(input("ENTER THE ROLL NO:"))
   m1=int(input("ENTER THE MARK OF SUB1:"))
   m2=int(input("ENTER THE MARK OF SUB2:"))
   m3=int(input("ENTER THE MARK OF SUB3:"))
   return rollno,m1,m2,m3
def gettotal():
   global total
   total=m1+m2+m3
   print("TOTAL MARK:",total)
   return total
def getavg():
   global avg
   avg=total/3
   print("AVERAGE:",avg)
   return avg
def getpercentage():
   global percentage
   percentage=(total/300)*100
   print("PERCENTAGE:",percentage)
   return percentage
def findgrade():
   global percentage
   percentage=(total/300)*100
   if percentage>=80:
      print("GRADE:DISTINCTION")
   elif percentage>=60:
      print("GRADE:FIRST CLASS")
   elif percentage>=45:
      print("GRADE:SECOND CLASS")
   else:
      print("FAILED") 
      pass 
for i in range(1,4):
  a,b,c,d=read_data()
  sum=gettotal()
  average=getavg()
  per=getpercentage()
  findgrade()