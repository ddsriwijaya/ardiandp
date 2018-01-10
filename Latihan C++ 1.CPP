#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
int total(int x, int y)
{
return((x*0.4)+(y*0.6));
}

char ket(int n)
{
if(n >= 80)
return 'A';
else if(n >= 70)
return 'B';
else if(n >= 56)
return 'C';
else if(n >= 47)
return 'D';
else if(n < 47)
return 'E';
}

main()
{
int i;
int data;

struct
{
int uts;
int uas;
int niruf;
char nama[20];
}mhs[5];
cout<<"Banyak Data : ";cin>>data;

for(i=1;i<=data;i++)
{
cout<<"Nomor : "<<i<<endl;
cout<<"Nama Mahasiswa : ";gets(mhs[i].nama);
cout<<"Nilai UTS : ";cin>>mhs[i].uts;
cout<<"Nilai UAS : ";cin>>mhs[i].uas;
mhs[i].niruf=total(mhs[i].uts,mhs[i].uas);
cout<<"Nilai Akhir : "<<mhs[i].niruf<<endl;
cout<<"Nilai Huruf : "<<ket(mhs[i].niruf)<<endl;
}
cout<<" \n\n\n PROGRAM HITUNG NILAI MAHASISWA";
cout<<"========================================"<<endl;
cout<<"No.| Nama | nilai | nilai | nilai | "<<endl;
cout<<" |mahasiswa | uts | uas | akhir | Huruf | "<<endl;
cout<<"========================================"<<endl;

for(i=1;i<=data;i++)
{
cout<<setiosflags(ios::left)<<setw(4)<<i;
cout<<setiosflags(ios::left)<<setw(20)<<mhs[i].nama;
cout<<setprecision(2)<<setw(13)<<mhs[i].uts;
cout<<setprecision(2)<<setw(13)<<mhs[i].uas;
cout<<setprecision(2)<<setw(13)<<total(mhs[i].uts,mhs[i].uas);
cout<<setprecision(2)<<setw(13)<<ket(mhs[i].niruf)<<endl;
}

getch();
}
