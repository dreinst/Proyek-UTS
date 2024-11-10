#include <iostream>
using namespace std;

int main() {
    int n;
    double number, sum = 0, average;
    
    // Akan memunculkan berapa bilangan yang ingin dihitung rata ratanya
    cout << "Masukkan jumlah bilangan: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> number;
        sum += number;
    }
    
    average = sum / n;
    cout << "Rata-rata dari " << n << " bilangan adalah: " << average;
    
    return 0;
}