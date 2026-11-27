import random

def passwd ():
    letters = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
    special = ["!", "#", "$", "%", "&", "/", "=", "?", "£", "$", "€", "¥", "±", "<", ">", "|", "^", "*", "~", "ω", "σ", "€", "®", "þ", "œ", "π", "ß", "ð", "đ", "ŋ", "ħ", "ł", "ø", "æ", "«", "»", "©", "„", "µ", "⨪","-", "_", ".", ",", ":"]
    print("Do you want special characters? [y/N]")
    spec = input()

    characters = []
    for i in range(8):
        characters.append(letters[random.randrange(0,52)])
    if spec == "y" or spec == "Y":
        for i in range(4):
            characters.append(special[random.randrange(0,46)])
    for i in range(2):
        characters.append(str(random.randrange(0,10)))

    random.shuffle(characters)
    password = "".join(characters)
    return(password)

def usr ():
    firstName = input("Enter your first name:")
    lastName = input("Entre your last name:")

    capital = firstName[0:1].upper()
    low1 = firstName[1:].lower()
    output1 = f"{capital}{low1}"
    output2 = lastName.lower()
    user = (output1[0:3] + output2[0:3])
    return(user)

print("username:")
user = usr()
print("password:")
password = passwd()
print("username = " + user + "\npassword = " + password)