#include <stdio.h>
#include <conio.h>
#include <iostream.h>


main()
{
	int trk,kls,jml,i,ke;
   long sub,byr,kmbl;
   char nama[4][20],pilih;
   char trayek[3][25] = {"Jakarta - Bandung","Jakarta - Yogyakarta","Jakarta - Surabaya"};
   char kelas[3][20] = {"Eksekutif","Bisnis","Ekonomi"};
   long list[3][3] = {{130000,105000,80000},{300000,240000,120000},{350000,270000,140000}};

   start:
	clrscr();
   cout<<"Program Tiket Kereta Api"<<endl;
   cout<<"-----------------------------------------"<<endl<<endl;
   cout<<"List Trayek Kereta Api PT. Asal Ngebul"<<endl;
   for(i=0;i<=2;i++){
   	ke = i + 1;
		cout<<ke<<". "<<trayek[i]<<"."<<endl;
	}
   cout<<"Masukkan kode trayek yang diinginkan [1/2/3]:";cin>>trk;
   trk = trk - 1;
   if(trk < 0 || trk > 2){
   cout<<"Anda salah memasukkan kode trayek!"<<endl;
   cout<<"Input kembali? [Y/N]:";cin>>pilih;
   if(pilih == 'Y' || pilih == 'y')
   	goto start;
   else
   	goto end;
   }



   cls:
   clrscr();
   cout<<"Program Tiket Kereta Api"<<endl;
   cout<<"-----------------------------------------"<<endl<<endl;
   cout<<"Nama Trayek : "<<trayek[trk]<<endl<<endl;
   cout<<"List Kelas"<<endl;
	for(i=0;i<=2;i++){
   	ke = i + 1;
		cout<<ke<<". "<<kelas[i]<<" - "<<list[trk][i]<<endl;
	}
   cout<<"Masukkan kode kelas yang diinginkan [1/2/3]:";cin>>kls;
   kls = kls - 1;
   if(kls < 0 || kls > 2){
   	cout<<"Anda salah memasukkan kode kelas!"<<endl;
   	cout<<"Input kembali? [Y/N]:";cin>>pilih;
   	if(pilih == 'Y' || pilih == 'y')
   		goto cls;
   	else
   		goto end;
   }

   jumlah:
   clrscr();
   cout<<"Program Tiket Kereta Api"<<endl;
   cout<<"-----------------------------------------"<<endl<<endl;

   cout<<"Nama Trayek : "<<trayek[trk]<<endl;
   cout<<"Nama Kelas : "<<kelas[kls]<<endl;
   cout<<"Harga Tiket : "<<list[trk][kls]<<endl<<endl;


   cout<<"Masukkan jumlah tiket yang ingin dibeli (Max. 4):";cin>>jml;

   if(jml < 1 || jml > 4){
   cout<<"Anda salah jumlah tiket!"<<endl;
   cout<<"Input kembali? [Y/N]:";cin>>pilih;
   if(pilih == 'Y' || pilih == 'y')
   	goto jumlah;
   else
   	goto end;
   }

   sub = jml * list[trk][kls];

   name:
   for(i=0;i<jml;i++)
   {
      ke = i + 1;
   	cout<<"Masukkan nama penumpang ke-"<<ke<<" (Max. 20 karakter) :";cin>>nama[i];
   }

   clrscr();
   cout<<"Program Tiket Kereta Api"<<endl;
   cout<<"-----------------------------------------"<<endl<<endl;
   for(i=0;i<jml;i++)
   {
      ke = i + 1;
   	cout<<"Nama penumpang ke-"<<ke<<" :"<<nama[i]<<endl;
   }

   cout<<"Nama penumpang sudah benar? [Y/N]:";cin>>pilih;
   if(pilih != 'Y' && pilih != 'y')
   	goto name;

   bayar:
   clrscr();
   cout<<"Program Tiket Kereta Api"<<endl;
   cout<<"-----------------------------------------"<<endl<<endl;
   cout<<"Nama Trayek : "<<trayek[trk]<<endl;
   cout<<"Nama Kelas : "<<kelas[kls]<<endl;
   cout<<"Harga Tiket : "<<list[trk][kls]<<endl<<endl;
   for(i=0;i<jml;i++)
   {
      ke = i + 1;
   	cout<<"Nama penumpang ke-"<<ke<<" :"<<nama[i]<<endl;
   }
   cout<<"Total Harga : "<<sub<<endl<<endl;
   cout<<"Uang Bayar : ";cin>>byr;
   if(byr < sub)
   	goto bayar;

   kmbl = byr - sub;
   cout<<"Uang Kembali : "<<kmbl<<endl;
   cout<<"Terima kasih sudah membeli tiket."<<endl<<endl;

   cout<<"Ingin membeli lagi? [Y/N] :";cin>>pilih;
   if(pilih == 'Y' || pilih == 'y')
   	goto start;
   end:
}
