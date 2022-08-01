#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class cc{
    public:
        void login();
        void proses();

    friend istream& operator>>(istream& input, cc& masuk){
      cout<<"------------------------------\n";
      cout<<"-   MASUKAN JADWAL KULIAH    -\n";
      cout<<"------------------------------\n";
      cout<<" Masukkan Jumlah Fakultas : "; 
      input>>masuk.jumlah;
      for(int i=0; i<masuk.jumlah; i++){
        cout<<" Masukkan Prodi : "; 
        input>>masuk.jenis[i];
        cout<<" Masukkan Jumlah matkul     : "; 
        input>>masuk.buku;
      for(int j=0; j<masuk.buku; j++){
        cout<<" Kode matkul    : "; 
        input>>masuk.kode[i][j];
        cout<<" Nama matkul   : "; 
        input>>masuk.judul[i][j];
        cout<<" Nama Dosen : "; 
        input>>masuk.penulis[i][j];
        }
        cout<<endl;
      }
      cout<<endl;
      return input;
    }
    friend ostream& operator<<(ostream& output, cc& keluar){
      output<<"========================================================================"<<endl;
      output<<"|   PRODI   |      KODE MATKUL      |      NAMA MATKUL     |    DOSEN   |"<<endl;
      output<<"========================================================================"<<endl;
      for(int i=0; i<keluar.jumlah; i++){
        output<<keluar.jenis[i];
        for(int j=0; j<keluar.buku; j++){
          output<<right<<setw(20) <<keluar.kode[i][j];
          output<<right<<setw(21) <<keluar.judul[i][j];
          output<<right<<setw(23) <<keluar.penulis[i][j];
          //output<<right<<setw(50);
          output<<setw(25);
          output<<endl;
        }
        output<<endl;
      }
      return output;
    }
  private:
    string nama,pass;
    int i, j, a, jumlah, buku, temp1, kode[100][100];
    string judul[100][100], penulis[100][100];
    string jenis[100], temp2, temp3;
};


void cc::login(){
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






    

int main(){
    system("clear");
    return 0;
}