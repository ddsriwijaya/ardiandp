#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<string.h>

char ket(float n);

main()


{
int i;
int data;

struct
{
int huts;
int huas;
char nhruf;
int nim;
int jml;
char nama[20];
}mhs[5];
cout<<"Banyak Data : ";cin>>data;

for(i=1;i<=data;i++)
{
cout<<"Data Ke : "<<i<<endl;
cout<<"NIM     : ";cin>>mhs[i].nim;
cout<<"Nama    : ";gets(mhs[i].nama);
cout<<"UTS     : ";cin>>mhs[i].huts;
cout<<"UAS     : ";cin>>mhs[i].huas;
mhs[i].jml=((mhs[i].huts+mhs[i].huas)/2);
}

clrscr();
cout<<" \n\n\n Latihan C++"<<endl;
cout<<" \n\n Program Perhitungan Nilai Mahasiswa"<<endl;
cout<<"========================================"<<endl;
cout<<"No. | NIM | Nama | Nilai Akhir | Ket | "<<endl;
cout<<"========================================"<<endl;

for(i=1;i<=data;i++)
{
cout<<setiosflags(ios::left)<<setw(6)<<i;
cout<<setiosflags(ios::left)<<setw(6)<<mhs[i].nim;
cout<<setiosflags(ios::left)<<setw(11)<<mhs[i].nama;
cout<<setprecision(2)<<setw(11)<<mhs[i].jml;
cout<<setprecision(2)<<setw(10)<<ket(mhs[i].nhruf)<<endl;
}

getch();
}

char ket(float n)
{
if(n>=70)
 return 'L';
else
 return 'G';
}
