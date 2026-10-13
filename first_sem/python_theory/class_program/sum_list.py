size=int(input("ENTER THEM SIZE OF LIST:"))
sum=0
for i in range(size):
    list_element=int(input("ENTER list element:"))
    sum+=list_element
    print(list_element[i])   
print("THE SUM OF LIST ELEMENT IS:",sum)