#include <iostream>
using namespace std;

int main() {
    int a, b, c, max;
    
    cout << "Masukkan tiga bilangan:\n";
    cout << "Bilangan pertama: ";
    cin >> a;
    cout << "Bilangan kedua: ";
    cin >> b;
    cout << "Bilangan ketiga: ";
    cin >> c;
    
    if(a > b) {
        if(a > c) {
            max = a;
        } else {
            max = c;
        }
    } else {
        if(b > c) {
            max = b;
        } else {
            max = c;
        }
    }
    
    cout << "Bilangan terbesar adalah: " << max;
    return 0;
}