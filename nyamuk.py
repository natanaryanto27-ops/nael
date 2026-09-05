def tepokNyamuk(jumlah):
    for i in range(1, jumlah + 1):
        if i % 3 == 0:
            print("TEPOK")
        else:
            print(i)


if __name__ == "__main__":
    print("=== PROGRAM TEPOK NYAMUK ===")
    jumlah = int(input("Masukkan jumlah perulangan: "))
    
    print("\n--- Output ---")
    tepokNyamuk(jumlah)
