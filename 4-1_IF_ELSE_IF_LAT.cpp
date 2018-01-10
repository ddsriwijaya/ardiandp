#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char kd,nama[10];
long uang=0,hrg=0,kmbl=0;

cout<<endl<<" Harga Barang"<<endl<<"============"<<endl;
cout<<"Masukkan Kode [1/2/3]: ";
cin>>kd;
if(kd == '1')
{
	strcpy(nama,"Buku");
   hrg=1000;
}
else if(kd == '2')
{
	strcpy(nama,"Pensil");
   hrg=2000;
}
else if(kd == '3')
{
	strcpy(nama,"Tipe X");
   hrg=3000;
}
else
{
	cout<<"Salah memasukkan kode barang"<<endl;
   strcpy(nama,"Error");
   hrg=0;
}

cout<<"Kode Barang = "<<kd<<endl;
cout<<"Nama Barang = "<<nama<<endl;
cout<<"Harga Barang = "<<hrg<<endl;

cout<<"Masukkan uang Bayar = "; cin>>uang;

if(uang < hrg){
cout<<"Uang bayar kurang"<<endl;
}
else
{
kmbl = uang - hrg;
cout<<"Uang Kembali = "<<kmbl;
}
getch();
}
