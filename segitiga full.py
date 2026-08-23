rows = 5
for i in range(1, rows + 1):
    for j in range(1, rows - i + 1):
        print(" ", end="")
    for k in range(1, 2 * i):
        print("*", end="")
    print()  
print()  

rows2 = 5
while rows2 >= 1:
    print("*" * rows2)
    rows2 -= 1
print() 

rows3 = 5
i = 1
while True:
    print(" " * (rows3 - i) + "*" * i)
    i += 1
    if i > rows3:
        break
