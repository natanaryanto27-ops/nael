def cekHoki(n):
    # Memeriksa apakah n genap (habis dibagi 2) DAN habis dibagi 7
    if n % 2 == 0 and n % 7 == 0:
        print("HOKI")
    else:
        print("BIASA")

# Contoh pengujian:
cekHoki(14)  # Output: HOKI
cekHoki(10)  # Output: BIASA
