def cekHoki(n):
    if n % 2 == 0 and n % 7 == 0:
        print("HOKI")
    else:
        print("BIASA")

cekHoki(14)  # Output: HOKI
cekHoki(10)  # Output: BIASA
