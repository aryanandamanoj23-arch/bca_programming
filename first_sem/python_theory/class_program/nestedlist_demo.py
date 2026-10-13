#a single student data
# his name,roll no,mob no,email,5 sub mark,get sub total
#implemented using nestedlist
for student in range(3):
    rollno=int(input("enter the roll no:"))
    name=input("Enter the name of student name:")
    email=input("Enter the email:")
    phone=int(input("enter phone number:"))
    my_mark=[]
    total=0
    for i in range(6):
        mark=int(input("ENTER the mark:"))
        my_mark.append(mark)
        total+=my_mark[i]
    print("TOTAL MARK IS",total)
    data=[rollno,name,email,my_mark,total]
    print("student_data=",data)
student_list=[[data[i]]]
print("student_lists=",student_list)    
