def hitungTabungan(hari):
    total = 0
    for i in range(1, hari + 1):
        if i % 2 != 0:
            total += 2000
        else:
            total += 5000
    return total

print(hitungTabungan(3)) 
