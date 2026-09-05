#include <iostream>
#include <string>

std::string cekTilang(int plat, int tanggal) {
    if ((plat % 2 == 0 && tanggal % 2 == 0) || (plat % 2 != 0 && tanggal % 2 != 0)) {
        return "AMAN";
    } else {
        return "TILANG";
    }
}


int main() {
    int plat, tanggal;
    
    std::cout << "=== PROGRAM CEK TILANG ===" << std::endl;
    std::cout << "Masukkan nomor plat   : ";
    std::cin >> plat;
    std::cout << "Masukkan tanggal hari ini: ";
    std::cin >> tanggal;
    
    std::string hasil = cekTilang(plat, tanggal);
    std::cout << "Hasil pemeriksaan       : " << hasil << std::endl;
    
    return 0;
}
