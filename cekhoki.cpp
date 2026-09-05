#include <iostream>

void cekHoki(int n) {
    if (n % 2 == 0 && n % 7 == 0) {
        std::cout << "HOKI" << std::endl;
    } else {
        std::cout << "BIASA" << std::endl;
    }
}

int main() {
    cekHoki(14); 
    cekHoki(10); 
    return 0;
}
