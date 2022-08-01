#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

 
int main()

{
double kecepatan, jarak, sudut;// kecepatan, jarak, dan sudut memiliki tipe data double
cout<<" -------------------------------------------------------------------------------------------------------\n";
cout<<"|                  PROGRAM PENGGUNAAN HEADER MATH.H DENGAN FUNCTION cos() dan sin()                     |"<<endl; 
cout<<"|                            UNTUK MENGHITUNG JARAK DI PERBUKITAN                                       |\n";
cout<<" -------------------------------------------------------------------------------------------------------\n";
cout<<"Masukkan Kecepatan (km/jam)\t: ";cin>>kecepatan;//menginput kecepatan
cout<<"Masukkan Sudut\t\t\t: ";cin>>sudut; //menginput sudut
cout<<endl; //fungsi untuk membuat baris baru
jarak=kecepatan*kecepatan*sin(sudut*3.14/180)*cos(sudut*3.14/180)/9.8; //proses atau rumus menghitung jarak
cout<<"jarak = kecepatan x kecepatan x sin(sudut x 3.14/180) x cos(sudut x 3.14/180)/g"<<endl;
cout<<"jarak = "<<kecepatan<<" x "<<kecepatan<<" x sin("<<sudut<<" x 3.14/180) x cos("<<sudut<<" x 3.14/180)/9.8"<<endl;//menampilkan angka yang diinput serta beberapa yang sudah di proses sebelumnya
cout<<"jarak = "<<jarak<<" Meter";//menampilkan hasil jarak dari proses yang sudah dibuat
cout<<"\n";
getch();
}
