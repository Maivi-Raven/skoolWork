import random

letters = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
special = ["!", "#", "$", "%", "&", "/", "=", "?", "£", "$", "€", "¥", "±", "<", ">", "|", "^", "*", "~", "ω", "σ", "€", "®", "þ", "œ", "π", "ß", "ð", "đ", "ŋ", "ħ", "ł", "ø", "æ", "«", "»", "©", "„", "µ", "⨪","-", "_", ".", ",", ":"]
print("Do you want special characters? [y/n]")
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
scrambled = "".join(characters)
print("Password: " + scrambled)