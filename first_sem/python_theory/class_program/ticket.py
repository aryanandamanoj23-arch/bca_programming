age=int(input("Enter your age:"))
day=input("Enter the week day:")
time=input("enter the time[morning/afternoon/evening]:")
base_ticket_price=250
if day=="saturday"or day=="sunday":
  ticket_price=base_ticket_price+(base_ticket_price*25/100)
if time=="morning":
    ticket_price=ticket_price
elif time=="afternoon":
    ticket_price==ticket_price+(ticket_price*10/100)
else: 
     ticket_price=ticket_price+(ticket_price*30/100)
if age<=5:
            print("child 50%_discount")
            ticket_price=ticket_price-(ticket_price*50/100)
elif age<60:
           print("adult no discount")    
else:
           print("senior citizen 10%_discount")
           ticket_price=ticket_price-(ticket_price*10/100)
print("ticket price:",ticket_price)
