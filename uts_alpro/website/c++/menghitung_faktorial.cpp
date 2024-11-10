#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;
    
    cout << "Masukkan bilangan: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Faktorial tidak bisa dihitung untuk bilangan negatif";
        return 1;
    }
    
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    cout << "Faktorial dari " << n << " adalah: " << factorial;
    return 0;
}