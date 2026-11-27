menu = "Pizza, Burger, Pasta, Salad, Sandwich, Tacos, Sushi, Steak, Chicken, Rice Bowl"
menuList = menu.split(", ")

print("Welcome to Food Place! \nPlease choose from the following menu by wrighting it: ")
for food in menuList:
    print(food)
while True:
    choise = input("Input: ")
    # ensure correct capitalisation
    capital = (choise [0:1])
    capital = capital.upper()
    low = (choise [1:])
    low = low.lower()
    output = f"{capital}{low}"
    
    if output in menu:
        print(f"Enjoy your {output}")
        break
    else:
        print(f"{output} is not on the menu.")