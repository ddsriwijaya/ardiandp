#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int anu,beo,cebong,dodol,enak,fak;
cout <<" Masukin Nilainya masbro :";cin>>anu;
cout <<"\n Masukin lagi masbro     :";cin>>beo;
cebong=anu*beo;
dodol=anu+beo;
enak=anu/beo;
fak=anu-beo;

clrscr();
cout <<"=======================\n";
cout <<"      Tadaaaa     \n";
cout <<"=======================\n";
cout <<"\n Hasil Perkalian       :"<<cebong;
cout <<"\n Hasil Penambahan      :"<<dodol;
cout <<"\n Hasil Pembagian       :"<<enak;
cout <<"\n Hasil Pengurangan     :"<<fak;
getch();
}
