firstName = input("Enter your first name:")
lastName = input("Entre your last name:")

capital = (firstName [0:1])
capital = capital.upper()
low1 = (firstName [1:])
low1 = low1.lower()
output1 = f"{capital}{low1}"
low2 = (lastName [0:])
low2 = low2.lower()
output2 = f"{low2}"

print("Your username is: " + output1[0:3] + output2[0:3])