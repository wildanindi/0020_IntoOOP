#include <iostream>
using namespace std;

class Mahasiswa{
    public: // akses modifier
        string nama;
        int umur;
        string jurusan;

        void output(){
            cout << "Nama : " << nama << endl;
            cout << "Umur : " << umur << endl;
            cout << "Jurusan : " << jurusan << endl;
        }

};


class Matakuliah{
    private:
        string kodeMk;
        string namaMk;
        int sks;
    public :
        void input(){
            cout << "Kode MK: ";
            cin >> kodeMk;
            cout << "Nama MK: ";
            cin >> namaMk;
            cout << "SKS: ";
            cin >> sks;
        }    

        void output(){
            cout << "Kode MK: " << kodeMk << endl;
            cout << "Nama MK: " << namaMk << endl;
            cout << "SKS: " << sks << endl;
        }
};

int main () {
    Mahasiswa mhs;
    Matakuliah mk;

    mhs.nama = "Budi";
    mhs.umur = 20;
    mhs.jurusan = "Teknik Informatika";
    mhs.output();

}