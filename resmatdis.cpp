#include <iostream>
#include <conio.h>

using namespace std;

class res{
    public:
        void input();
        void output();
    private:
        int x, y;
        double z;
};

void res::input(){
        cout <<"+------------------------------+\n";
        cout <<"|    PROGRAM MENGHITUNG LUAS   |\n";
        cout <<"|      LAPANGAN SEPAK BOLA     |\n";
        cout <<"+------------------------------+\n";
        cout << endl;
        cout << "Masukkan Panjang Lapangan (m) : ";
        cin >> x;
        cout << "Masukkan Lebar Lapangan (m)   : ";
        cin >> y;

}

void res::output(){
        z = x*y;
        cout << endl;
        cout << "Luas Lapangan Sepak Bola  : "<<z<<" m2";
        //return output;
}

int main(){
    system("cls");
    res obj;
    obj.input();
    obj.output();
}