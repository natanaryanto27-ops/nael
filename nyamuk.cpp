#include <iostream>

void tepokNyamuk(int jumlah) {
    for (int i = 1; i <= jumlah; i++) {
        if (i % 3 == 0) {
            std::cout << "TEPOK" << std::endl;
        } else {
            std::cout << i << std::endl;
        }
    }
}

int main() {
    int jumlah;
    
    std::cout << "=== PROGRAM TEPOK NYAMUK ===" << std::endl;
    std::cout << "Masukkan jumlah perulangan: ";
    std::cin >> jumlah;
    
    std::cout << "\n--- Output ---" << std::endl;
    tepokNyamuk(jumlah);
    
    return 0;
}
