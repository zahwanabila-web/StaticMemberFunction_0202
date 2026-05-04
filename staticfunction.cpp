#include <iostream>
using namespace std;

class Mahasiswa {
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printALL();

    static void setNim(int pnim) {
        nim = pnim;
    };

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    };
};

int Mahasiswa::nim = 0;

void Mahasiswa::setID() {
    id = ++nim;
}

void Mahasiswa::printALL() {
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main(){

    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jatmiko");

    Mahasiswa ::setNim(9);
    Mahasiswa mhs3("Andi Janu");
    Mahasiswa mhs4("Joko Wahono");

    mhs1.printALL();
    mhs2.printALL();
    mhs3.printALL();
    mhs4.printALL();



    

}