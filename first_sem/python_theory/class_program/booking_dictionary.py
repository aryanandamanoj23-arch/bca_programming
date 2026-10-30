# To collect individual room details
def total_gst(amount):
    gst = amount*18/100
    return gst
def get_room_details():
    bookings = {}
    for i in range(5):
        print("\nEnter details for booking", i + 1)
        room_no = int(input("Enter the room no: "))
        c_name = input("Enter customer name: ")
        contact = input("Enter the contact number of customer: ")
        amount = int(input("Enter the amount: "))
        date = input("Enter the date of booking: ")
        bookings[i]={
                "Room no": room_no,
                "Customer Name": c_name,
                "Contact Number": contact,
                "Booking Amount": amount,
                "Date of booking": date
            }
    return bookings
# To display booking details
def display_booking(bookings):
    print("\nBooking info:")
    for i in bookings:
        print(bookings[i])

# To get total room price
def get_total_room_price(bookings):
    total = 0
    for i in bookings:
        total = total + bookings[i]["Booking Amount"]
    gst = total_gst(total)
    total_price = total + gst
    print("\nTotal Room Price:", total)
    print("Total GST:", gst)
    print("Total Amount:", total_price)


bookings = get_room_details()
display_booking(bookings)
get_total_room_price(bookings)