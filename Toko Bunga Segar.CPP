#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char nama1[50], nama2[50], warna[10], nmbunga[10], jenis[5], paket,more;
float bns;
int jmlh, hrg, total1, total2;

atas:
clrscr();
cout<<"Toko Bunga Segar CITRA FLOWERS"<<endl<<endl;
cout<<"\n================================="<<endl<<endl;
cout<<"\nNama Kasir                   :";gets(nama1);
cout<<"\nNama Pembeli                 :";gets(nama2);
cout<<"\nPilih Jenis Bunga [LL/MW/MT] :";gets(jenis);
cout<<"\nPilih Paket Bunga [T/B]      :";cin>>paket;
if (strcmp(jenis,"LL")==0)
    {
   strcpy(nmbunga,"Lili");
   if (paket == 'T')
   { hrg = 40000;}
   else if (paket == 'B')
   { hrg = 150000;}
   else {hrg = 0;}
   }
        else if (strcmp(jenis,"MW")==0)
      {
      strcpy (nmbunga,"Mawar");
      if (paket == 'T')
      { hrg = 50000;}
      else if (paket == 'B')
      { hrg = 200000;}
      else { hrg = 0;}
      }
          else if (strcmp(jenis,"MT")==0)
         {
         strcpy (nmbunga,"Melati");
         if (paket == 'T')
         { hrg = 55000;}
         else if (paket == 'B')
         { hrg = 250000;}
         else {hrg = 0;}
}

cout<<"\nWarna Bunga                  :";gets(warna);
cout<<"\nJumlah Beli                  :";cin>>jmlh;


clrscr();
cout<<"Toko Bunga Segar CITRA FLOWERS"<<endl<<endl;
cout<<"\n================================="<<endl<<endl;
printf("\nNama Kasir               : %s",nama1);
printf("\nNama Pembeli             : %s",nama2);
cout<<"\n================================="<<endl<<endl;
printf("\nNama Bunga yang Dipilih  : %s",nmbunga);
printf("\nPaket Bunga yang Dipilih : %c",paket);
printf("\nWarna Bunga              : %s",warna);

total1= hrg * jmlh;
printf("\nTotal Pembelian          : %d", total1);
if (total1 >= 1000000)
{
 bns = 0.1 * hrg;
 }
 else
 {
 bns = 0;
 }
printf ("\nDiskon yang Didapat      : %f", bns);
total2 = total1 - bns;
printf("\nTotal yang harus Dibayar : %d", total2);
cout<<"\n=================================="<<endl<<endl;
cout<<"\t\t\t INGIN INPUT LAGI [Y/T] : "; cin>>more;
    if (more == 'y' || more =='Y')
     goto atas;
    getch();
    }
getch();
