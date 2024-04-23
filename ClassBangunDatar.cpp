#include <iostream>
using namespace std;

class bangunDatar{
    
    private:
        float panjang, Lebar;
    public:
        float Luas;

        void input() {

            cout << "Masukkan Panjangnya = ";
            cin >> panjang; 
            cout << "Masukkan Lebarnya = ";
            cin >> Lebar;
        }
};