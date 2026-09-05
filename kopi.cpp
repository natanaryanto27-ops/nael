#include <iostream>

int hitungKopi(int jumlahGelas) {
    int total = jumlahGelas * 5000;
    if (jumlahGelas > 3) {
        total -= 2000;
    }
    return total;
}
int main() {
    int gelas;
    
    std::cout << "=== PROGRAM HITUNG KOPI ===" << std::endl;
    std::cout << "Masukkan jumlah gelas kopi yang dibeli: ";
    std::cin >> gelas;
    
    int totalBayar = hitungKopi(gelas);
    std::cout << "Total harga yang harus dibayar       : Rp " << totalBayar << std::endl;
    
    return 0;
}
