power_unit=int(input("enter power unit:"))
status=input("enter commercial or not:")
penalty=100
total=0

if status=="commercial":
    reminder=power_unit%100
    if power_unit<=100:
        total=power_unit*10   
    elif power_unit<=300:
        total=power_unit*12
    else:
        total=power_unit*15

elif status=="non-commercial":
    if power_unit<=100:
        total=power_unit*5
    elif power_unit<=300:
        total=power_unit*6
    else:
        total=power_unit*8   

if total>=900:
     print("threshold is found")
     total=total+penalty
print("total amount:",total)
  