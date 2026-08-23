#include <iostream>
#include <string>
using namespace std;

int main() {
   
    int rows = 5;
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    
    cout << endl;

    
    int rows2 = 5;
    while (rows2 >= 1) {
        cout << string(rows2, '*') << endl;
        rows2--;
    }

    
    cout << endl;

    int rows3 = 5;
    int i = 1;
    do {
        cout << string(rows3 - i, ' ') << string(i, '*') << endl;
        i++;
    } while (i <= rows3);

    return 0;
}