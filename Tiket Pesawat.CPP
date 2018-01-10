#include <iostream.h>
#include <conio.h>
#include <windows.h>

main(){

int kelas,jumlah,total;
char kodepesawat[3],namapesawat[15],konfir;
long harga;

awal:
clrscr();

cout<<"PROGRAM TIKET PESAWAT"<<endl;
cout<<"JAKARTA - SINGAPORE"<<endl;
cout<<"====================="<<endl;

cout<<" MASUKAN KODE PESAWAT [MPT/GRD/BTV] = ";
cin>>kodepesawat;
cout<<" KELAS PESAWAT :"<<endl;
cout<<"  1. EXECUTIVE "<<endl;
cout<<"  2. BISNIS    "<<endl;
cout<<"  3. EKONOMI   "<<endl;
cout<<"--------------------------------------"<<endl;
cout<<endl;

cout<<" PILIH KELAS [1/2/3] : ";
cin>>kelas;
cout<<endl;

if((strcmp(kodepesawat,"mpt")==0)||(strcmp(kodepesawat,"MPT")==0)){
strcpy(namapesawat,"MERPATI");
if(kelas==1){
harga=1500000;
}
else if(kelas==2){
harga=900000;
}
else if(kelas==3){
harga=500000;
}
else{
cout<<"KODE YANG ANDA MASUKAN SALAH";
harga=0;
exit(0);
}
}

else if((strcmp(kodepesawat,"GRD")==0)||(strcmp(kodepesawat,"grd")==0)){
strcpy(namapesawat,"GARUDA");
if(kelas==1){
harga=1200000;
}
else if(kelas==2){
harga=800000;
}
else if(kelas==3){
harga=400000;
}
else{
cout<<"KODE YANG ANDA MASUKAN SALAH";
harga=0;
exit(0);
}
}

else if((strcmp(kodepesawat,"BTV")==0)||(strcmp(kodepesawat,"btv")==0)){
strcpy(namapesawat,"BATAVIA");
if(kelas==1){
harga=1000000;
}
else if(kelas==2){
harga=700000;
}
else if(kelas==3){
harga=300000;
}
else{
cout<<"KODE YANG ANDA MASUKAN SALAH";
harga=0;
exit(0);
}
}

else{
cout<<"KODE YANG ANDA MASUKAN SALAH";
harga=0;
exit(0);
}

cout<<" NAMA PESAWAT = "<<namapesawat<<endl;
cout<<" HARGA TIKET  = "<<harga<<endl;
cout<<" JUMLAH TIKET = ";
cin>>jumlah;

total=harga*jumlah;
cout<<" TOTAL BAYAR  = "<<total<<endl;
cout<<"--------------------------------------"<<endl;

cout<<endl;
cout<<"\t\tINGIN INPUT LAGI [Y/T] : ";
cin>>konfir;

if(konfir=='Y'||konfir=='y'){
goto awal;
}
else
{
exit(0);
}

getch();
}