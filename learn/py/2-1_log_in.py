print(7//2)
user = input("Enter your username: ")
password = input("Enter your password: ")

if user == "admin" and password == "admin":
    print("Welcome, admin!")
else:
    print("Access denied. Invalid username or password.")
