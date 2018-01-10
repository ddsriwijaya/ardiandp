#include<conio.h>
#include<stdio.h>
#include<iostream.h>
main( )
{
struct data
{
char nim[10],nama[15];
int nilai;
}data;
clrscr( );
cout<<"masukan NIM : ";cin>>data.nim;
cout<<"masukan NAMA : ";cin>>data.nama;
cout<<"masukan NILAI AKHIR : ";cin>>data.nilai;
cout<<"\n\n Data yang Anda Inputkan Adalah : "<<endl<<endl;
cout<<"NIM : "<<data.nim<<endl;
cout<<"NAMA: "<<data.nama<<endl;
cout<<"NILAI AKHIR: "<<data.nilai<<endl;
getch( );
}