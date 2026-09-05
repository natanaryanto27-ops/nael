#include <iostream>

int hitungTabungan(int hari) {
    int total = 0;
    for (int i = 1; i <= hari; i++) {
        if (i % 2 != 0) {
            total += 2000; 
        } else {
            total += 5000; 
        }
    }
    return total;
}

int main() {
    std::cout << hitungTabungan(3) << std::endl; 
    return 0;
}
