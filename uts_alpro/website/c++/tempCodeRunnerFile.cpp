#include <iostream>
using namespace std;

int main() {
    int jumlahBaris = 5;
    for(int baris = 1; baris <= jumlahBaris; baris++) {
        int bintangDiBaris = jumlahBaris - baris + 1;
        
        for(int bintang = 1; bintang <= bintangDiBaris; bintang++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}