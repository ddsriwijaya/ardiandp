#include<stdio.h>
#include<conio.h>
#include<iostream.h>

main() {

struct {
	char nim[5];
   char nama[5];
   int nilai; }
   mahasiswa;

clrscr();
cout<<"masukan Nama = ";
cin>>mahasiswa.nama;
cout<<"masukan NIM = ";
cin>>mahasiswa.nim;
cout<<"masukan Nilai Akhir = ";
cin>>mahasiswa.nilai;
cout<<"\n\nData Yang di Inputkan adalah : \n\n";
cout<<"NIM = "<<mahasiswa.nim<<endl;
cout<<"Nama = "<<mahasiswa.nama<<endl;
cout<<"Nilai Akhir = "<<mahasiswa.nilai<<endl;
getch(); }



