order = [
    {
        "name": "Ahlgrens bilar",
        "price": 17.5,
        "quantity": 2,
    },
    {
        "name": "Gott och blandat",
        "price": 18.5,
        "quantity": 3,
    },
    {
        "name": "Pringles Sourcream and Onion",
        "price": 35.95,
        "quantity": 2,
    },
    {
        "name": "Turkisk Peppar",
        "price": 24.99,
        "quantity": 1,
    },
]

i = 0
total = 0
for j in order:
    print(f"{order[i]['name']}")
    print(f"Price: {order[i]['price']:.2f}")
    print(f"Order quantity: {order[i]['quantity']}\n")
    total += order[i]['price']
    i += 1
print(f"Total: {total:.2f}")