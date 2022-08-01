#include<iostream>
using namespace std;

class Ibnu{
    private:
        string nama;
    public:
    friend istream& operator>>(istream& masuk, Ibnu& kelas){
        cout<<"Masukkan nama : ";
        masuk>>kelas.nama;
        return masuk;
    }
    friend ostream& operator<<(ostream& y, Ibnu& x){
        y<<x.nama<<endl;
        return y;
    }

};

int main(){
    Ibnu objek;
    cin>>objek;
    cout<<objek;
    return 0;
}