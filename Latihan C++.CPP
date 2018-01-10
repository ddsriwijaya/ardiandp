#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>

char ket(float n);
main()
{
int i;
struct
{
char nim[15];
char nama[15];
float nilai1,nilai2,hasil;
} mhs[10];

clrscr( );
for(i=1;i<=2;i++)
{
cout<<"Data Ke - "<<i<<endl;
cout<<"masukan NIM = "; cin>>mhs[i].nim;
cout<<"masukan Nama = "; gets(mhs[i].nama);
cout<<"masukan Nilai UTS = "; cin>>mhs[i].nilai1;
cout<<"masukan Nilai UAS = "; cin>>mhs[i].nilai2;
cout<<endl;
}
clrscr( );
for(i=1;i<=2;i++)
{
cout<<"Data Ke - "<<i++<<endl;
cout<<"NIM = "<<mhs[i].nim<<endl;
cout<<"Nama = "<<mhs[i].nama<<endl;
cout<<"Nilai Akhir = "<<mhs[i].hasil<<endl;
cout<<"Ket = ";
cout<<ket(mhs[i].hasil)<<endl;
cout<<endl;
}

for(i=1;i<=2;i++) {
cout<<setiosflags(ios::left)<<setw(5)<<i;
cout<<setiosflags(ios::left)<<setw(10)<<mhs[i].nama;
cout<<setiosflags(ios::right)<<setw(9)<<mhs[i].nilai1;
cout<<setiosflags(ios::right)<<setw(20)<<mhs[i].nilai2;
cout<<setiosflags(ios::right)<<setw(20)<<mhs[i].hasil<<endl;
}

getch(); }

char ket(float n)
{
if(n>65)
  return 'L';
else
  return 'G';
}
