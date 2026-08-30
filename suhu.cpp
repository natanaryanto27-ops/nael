#include <iostream>
using namespace std;

double konversiSuhu(double celcius) {
    return celcius * 1.8 + 32;
}

int main() {
    cout << konversiSuhu(30);
    return 0;
}