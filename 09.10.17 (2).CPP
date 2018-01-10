#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int absen,tgs,uts,uas,hasil,jml,nabsen,ntgs,nuts,nuas,tl,l;
cout <<" Hitung Nilai\n";
cout <<"\n Absen :";cin>>absen;
cout <<" Tugas :";cin>>tgs;
cout <<" UTS   :";cin>>uts;
cout <<" UAS   :";cin>>uas;
nabsen=absen*20/100;
ntgs=tgs*25/100;
nuts=uts*25/100;
nuas=uas*30/100;
jml=nabsen+ntgs+nuts+nuas;

clrscr();
cout <<"===========================\n";
cout <<"       Tadaaaa     \n";
cout <<"===========================\n";
cout <<"\n Hasil Nilai Absen    :"<<nabsen;
cout <<"\n Hasil Nilai Tugas    :"<<ntgs;
cout <<"\n Hasil Nilai UTS      :"<<nuts;
cout <<"\n Hasil Nilai UAS      :"<<nuas;
cout <<"\n Dan Jumlahnya        :"<<jml;
if (jml>75) {
cout<<"\n Lulus";
}
else {
cout<<"\n Tidak Lulus";
}

getch ();
}