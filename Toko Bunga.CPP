#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip.h>

main( )
{
int i ,j ,lagi;
char var[6] = {'D','d','P','p','S','s'} ,ket[6];
long harpot[6], jmlhar[6] = {0}, harsat[6] = {2500 ,2000 ,1500};
long jumbel[6]= {0}, ppn[6], ttl[6];

mulai:
clrscr();
cout<<"\t     TOKO BUNGA\n";
cout<<"---------------------------------\n";
cout<<"\tKode\tNama\t\tHarga\n";
cout<<"\tBG\tBougenvile\tRp. 500000\n";
cout<<"\tAG\tAnggrek\t\tRp. 300000\n\n";
cout<<"---------------------------------\n\n";
cout<<"Masukan Jumlah Data : ";cin>>i;
jumbel[i] = 0;
    if (i <= 0)
   {
   goto alert;
   alert:
clrscr();
cout << "\n\n\t\tMohon Maaf, Minimal Input Pemesanan Berjumlah 1Pcs" << endl;
   cout << "\n\n\t\tAnda Ingin Memesan Lagi? [Y/T] = ";lagi=getche();
   if (lagi == 'Y' || lagi == 'y')
       goto mulai;
    else
       cout<<"\n\n\t\tTerima Kasih, Selamat Datang Kembali";
   }
   else
   {
        for(j = 1 ; j <= i; j++)
       {
      cout<<"\tJenis Ke - "<<j;
        cout<<"\n\tJenis Potong [D/P/S] : ";cin>>var[j];
        cout<<"\tBanyak Potongan : ";cin>>harpot[j];
      cout<<"\t------------------------\n";
           if (var[j] == 'D' || var[j] == 'd')
             {
               ket[j] = "Dada ";
               harsat[j] = 2500;
            }
           else if (var[j] == 'P' || var[j] == 'p')
             {
            ket[j] = "Paha ";
               harsat[j] = 2000;
            }
           else if (var[j] == 'S' || var[j] == 's')
             {
            ket[j] = "Sayap";
               harsat[j] = 1500;
            }
           else
               {
              cout<<"\nMohon maaf kode yang anda masukan salah!";
              harsat[j] = 0;
              }
      jmlhar[j] = harsat[j] * harpot[j];
      jumbel [j] = jumbel[j] + harsat[j] * harpot[j];
          if (jumbel[i] == 0)
             {
             ppn[i] = 0;
            ttl[i] = 0;
            }
         else
             {
                ppn[i] = jumbel[i] * 0.1;
                ttl[i] = jumbel[i] + ppn[i];
            }
      }
   }
cout<<"\n\n\tGEROBAK FRIED CHICKEN\n";
cout<<"------------------------------------------------\n";
cout<<"No.| Jenis     | Harga     | Banyak | Jumlah\n";
cout<<"   | Potong    | Satuan    | Beli   | Harga\n";
cout<<"================================================\n";
    for (j = 1; j <= i; ++j)
   {
    cout<<" "<<j<<" | "<<ket[j]<<"     | "<<harsat[j];
   cout<<"      | "<<harpot[j]<<"      | Rp. "<<jmlhar[j]<<endl;
    }
cout<<"------------------------------------------------\n";
cout<<"\t\t\tJumlah Bayar  Rp. "<<jumbel[i]<<endl;
cout<<"\t\t\tPajak 10%     Rp. "<<ppn[i]<<endl;
cout<<"\t\t\tTotal Bayar   Rp. "<<ttl[i];
cout<<"\n\n\tAnda Ingin Memesan Lagi? [Y/T] = ";
lagi=getche();
    if (lagi == 'Y' || lagi == 'y')
       goto mulai;
   else{
       cout<<"\n\n\t\tTerima Kasih, Selamat Datang Kembali";}
getch();
}
