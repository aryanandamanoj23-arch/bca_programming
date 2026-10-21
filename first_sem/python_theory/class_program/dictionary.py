name = input("Enter Employee Name: ")
emp_no = int(input("Enter Employee Number: "))
company = input("Enter Company Name: ")
salary = float(input("Enter Salary: "))
employee_set = {name, emp_no, company, salary}
employee_dict = {
    "Employee Name": name,
    "Employee Number": emp_no,
    "Company Name": company,
    "Salary": salary
}
print("\nEmployee Details Using Set:")
print(employee_set)

print("\nEmployee Details Using Dictionary:")
print(employee_dict)