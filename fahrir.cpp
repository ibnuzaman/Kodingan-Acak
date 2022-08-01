#include<iostream>
#include<iomanip>
using namespace std;

struct Data{
    int  nis;
    char kelas;
    string nama, bayar,prodi;
};

class Responsi{
    private:
        Data Mahasiswa[100];
        int jmlData, cari;
        string nama,pass;
    public:
        void sorting(){
            for(int a=0; a<jmlData; a++){
                for(int b=a+1; b<jmlData; b++){
                    if(Mahasiswa[a].prodi>Mahasiswa[b].prodi){                        
                        swap(Mahasiswa[a].nis, Mahasiswa[b].nis);
                        swap(Mahasiswa[a].prodi, Mahasiswa[b].prodi);
                        swap(Mahasiswa[a].nama, Mahasiswa[b].nama);
                        swap(Mahasiswa[a].kelas, Mahasiswa[b].kelas);
                        swap(Mahasiswa[a].bayar, Mahasiswa[b].bayar);
                    }
                }
            }
        }

        void cariData(){
            bool ketemu=false;
            cout<<"Cari (KODE)\t: ";
            cin>>cari;
            for(int a=0; a<jmlData; a++){
                if(cari==Mahasiswa[a].nis){
                    cout<<"Ditemukan\t: "<<endl;
                    cout<<"Prodi\t\t\t: "<<Mahasiswa[a].prodi<<endl;
                    cout<<"KODE\t\t\t: "<<Mahasiswa[a].nis<<endl;
                    cout<<"Dosen\t\t\t: "<<Mahasiswa[a].nama<<endl;
                    cout<<"Mata Kuliah\t\t: "<<Mahasiswa[a].bayar<<endl;
                    ketemu=true;
                }
            }
            
            if(!ketemu){
                cout<<"Data tidak ditemukan"<<endl;
            }
        }
        void login(){
            ulang:
                    cout <<" +---------------------------------------+ "<< endl;
                    cout <<" |        SISTEM INFORMASI MANAJEMEN     | "<< endl;
                    cout <<" +---------------------------------------+ "<< endl;
                    cout <<"  Username       : "; getline(cin,nama);
                    cout <<"  Password       : "; cin>>pass;
                    cin.ignore();
                    cout <<" +---------------------------------------+ "<< endl;
                    if (nama == "mhs" && pass == "mhs"){
                        cout << "\n  SELAMAT ANDA TELAH LOGIN!\n\n";
                    } else{
                        cout << "  LOGIN GAGAL\n\n"; 
                        goto ulang;
                        }

                    } 
        
        friend istream& operator>>(istream& masuk, Responsi& kelas){
            cout<<"Jumlah Fakultas : ";
            masuk>>kelas.jmlData;
            for(int a=0; a<kelas.jmlData; a++){
                cout<<"Prodi\t\t: ";
                masuk>>kelas.Mahasiswa[a].prodi;
                cout<<"Mata Kuliah\t: ";
                masuk>>kelas.Mahasiswa[a].bayar;
                cout<<"Kode\t\t: ";
                masuk>>kelas.Mahasiswa[a].nis;
                cout<<"Dosen\t\t: ";
                masuk>>kelas.Mahasiswa[a].nama;
                cout<<"Kelas\t\t: ";
                masuk>>kelas.Mahasiswa[a].kelas;
            }
            return masuk;
        }
        friend ostream& operator<<(ostream& keluar, Responsi& kelas){
            cout<<"+";
            kelas.garis(61);
            cout<<"+"<<endl;
            keluar<<left<<setw(4)<<"|"<<left<<setw(10)<<"Prodi"<<left<<setw(10)<<"Kode"<<left<<setw(10)<<"Dosen"<<left<<setw(10)<<"Kelas"<<left<<setw(18)<<"Mata Kuliah"<<left<<setw(18)<<"|"<<endl;
            cout<<"+";
            kelas.garis(61);
            cout<<"+"<<endl;
            for(int a=0; a<kelas.jmlData; a++){
                keluar<<left<<setw(4)<<"|"<<left<<setw(10)<<kelas.Mahasiswa[a].prodi<<left<<setw(10)<<kelas.Mahasiswa[a].nis<<left<<setw(10)<<kelas.Mahasiswa[a].nama<<left<<setw(10)<<kelas.Mahasiswa[a].kelas<<left<<setw(18)<<kelas.Mahasiswa[a].bayar<<left<<setw(18)<<"|"<<endl;
            }
            cout<<"+";
            kelas.garis(61);
            cout<<"+"<<endl;
            return keluar;
        }

        void garis(int x){
            for(int a=0; a<x; a++){
                cout<<"=";
            }
        }
};

int main(){
    system("cls");
    Responsi gas;
    gas.login();
    cin>>gas;
    gas.sorting();
    cout<<endl<<gas;
    gas.cariData();
    return 0;
}