def cekTilang(plat, tanggal):
    if (plat % 2 == 0 and tanggal % 2 == 0) or (plat % 2 != 0 and tanggal % 2 != 0):
        return "AMAN"
    else:
        return "TILANG"

if __name__ == "__main__":
    print("=== PROGRAM CEK TILANG ===")
    plat = int(input("Masukkan nomor plat   : "))
    tanggal = int(input("Masukkan tanggal hari ini: "))
    
    hasil = cekTilang(plat, tanggal)
    print(f"Hasil pemeriksaan       : {hasil}")
