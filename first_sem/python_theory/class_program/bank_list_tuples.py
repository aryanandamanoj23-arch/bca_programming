#list inside the tuple
#in tuple  : name,pan no,acc no=1000,DOB
#in list   :  email,contact no,address,current balance

name=input("Enter the name:")
phone=int(input("Enter the phone number:"))
email=input("Enter your email:")
address=input("Enter the address:")
pan_no=int(input("Enter the pan no:"))
DOB=input("Enter your DOB:")
acc_no=int(input("Enter the account number:"))
current_balance=int(input("Enter the current balance:"))
new_balance=int(input("Enter new balance:"))
current_balance=current_balance+new_balance
lists=[email,phone,address,current_balance]
tuples=(name,pan_no,acc_no,DOB,lists)   #list inside the tuple
print(tuples)
