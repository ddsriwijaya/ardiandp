#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int n1,n2,n3,n4,n5,n6;
cout <<" Input Nilai 1 :";cin>>n1;
cout <<" Input Nilai 2 :";cin>>n2;
cout <<" Input Nilai 3 :";cin>>n3;
n4=n1+n2*n3;
n5=n1+(n2*n3);
n6=(n1+n2)*n3;

clrscr();
cout <<"=======================\n";
cout <<"      Tadaaaa     \n";
cout <<"=======================\n";
cout <<"\n Hasil Nilai 1      :"<<n4;
cout <<"\n Hasil Nilai 2      :"<<n5;
cout <<"\n Hasil Nilai 3      :"<<n6;

getch();
}
