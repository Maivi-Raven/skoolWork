import math

def area (r):
    area = (pow(r, 2) * math.pi)
    return(area)

print("Area calculator")
rad = float(input("Input the radius: "))
a = str(area(rad))
print("Area: " + a)