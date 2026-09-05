def hitungKopi(jumlahGelas):
    total = jumlahGelas * 5000
    if jumlahGelas > 3:
        total -= 2000
    return total

if __name__ == "__main__":
    print("=== PROGRAM HITUNG KOPI ===")
    gelas = int(input("Masukkan jumlah gelas kopi yang dibeli: "))
    
    total_bayar = hitungKopi(gelas)
    print(f"Total harga yang harus dibayar       : Rp {total_bayar}")
