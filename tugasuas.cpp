#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
#include <string.h>
#include <stdlib.h>


class Order{
	private:
   char nama[20], kode[5],inputs[20];
   long total,bayar,kembali;
   int ordernum,idxKode, cache,qty;
   struct {
   char code[5];
   char menu[20];
   long harga,subtotal;
   int qty;
   }order[5];

   public:
   int idx, seq, no,status;
   long nominal;
   
   void line(void);
   void header(void);

   int inputAngka(char question[100]);
   long inputNominal(char question[100]);
   
   int inputNama(char custname[20]);
   int inputOrderQty(int jml);
   int inputItem(int idx, char kd[5], char mn[20], long hrg);
   int inputQty(int idx, int jml);

   int cekNama(char custname[20]);
   int cekKode(char menu[5],char lkd[9][5]);
   
   int menu(char lkd[9][5],char lmenu[9][20],long lhrg[9]);
   int calculate(int idx);
   
   void cetaklist(char lkd[9][5],char lmenu[9][20],long lhrg[9]);
      
   void cetakNama(void);
   void cetakOrderQty(void);
   
   void cetakHeader(void);
   int cetakOrders(int jml);
   
   int ulang(void);
   
   void clear(void);
};



main(){
   int jmlOrder,status;
   char nama[20], ulang[5];
   char listkd[9][5] = {"A1","A2","A3","B1","B2","B3","C1","C2","C3"};
   char listmenu[9][20] ={"Beef Burger[S]","Beef Burger[M]","Beef Burger[L]","Fries[S]","Fries[M]","Fries[L]","Coke[S]","Coke[M]","Coke[L]"};
   long listhrg[9] ={25000,27500,30000,5000,7500,10000,4000,6000,8000};

   awal:
   {
   Order pesan;

   clrscr();
   pesan.header();


   cstname:
   clrscr();
   pesan.header();
   cout<<"Masukkan nama customer: ";gets(nama);
   if(pesan.cekNama(nama) == 1) {
   	pesan.inputNama(nama);
   }else {
   	goto cstname;
   }

   orderQty:
   clrscr();
   pesan.header();
   pesan.cetakNama();
   status = pesan.inputAngka("Masukkan jumlah pesanan yang ingin dibeli: ");
   if(status > 0 && status <= 5){
   	jmlOrder = status;
   } else {
     	goto orderQty;
   }

   status = pesan.inputOrderQty(jmlOrder);

   if(status == -1){
     	goto orderQty;
   }

   orderMenu:
	pesan.menu(listkd,listmenu,listhrg);

   cetak:
   clrscr();
	pesan.header();
   cout<<"List ordered menu Resto \"MAKUDONARUDO\":"<<endl;
   pesan.cetakHeader();
   pesan.line();
   status = pesan.cetakOrders(jmlOrder);
	if(!(status == 1)){
    	goto cetak;
   }
   akhir:
   status = pesan.ulang();
   }
   if(status == 1){
    	goto awal;
   }
}

void Order::line(void){
	cout<<"=================================================================="<<endl;
};

void Order::header(void){
   line();
	cout<<"===========      PROGRAM POS RESTO \"MAKUDONARUDO\"      ==========="<<endl;
   line();
	cout<<endl;
};

int Order::inputAngka(char question[100]){

   cout<<question;cin>>inputs;
   if(atoi(inputs) > 0){
   	return atoi(inputs);
   } else {
     	return -1;
   }

}

long Order::inputNominal(char question[100]){

   cout<<question;cin>>inputs;
   if(atol(inputs) > 0){
   	return atol(inputs);
   } else {
     	return -1;
   }

}


int Order::inputNama(char custname[20]){

   strcpy(nama,custname);

}

int Order::inputOrderQty(int jml){

   if(jml>5 || jml<1){
		return -1;
   }
   else {
   	ordernum = jml;
      return 1;
   }

}

int Order::inputItem(int idx, char kd[5], char mn[20], long hrg){
	strcpy(order[idx].code,kd);
   strcpy(order[idx].menu,mn);
   order[idx].harga = hrg;

}

int Order::inputQty(int idx, int jml){

	order[idx].qty = jml;

}


int Order::cekNama(char custname[20]){

	if(strlen(custname) == 0)
   return -1;
	else
   return 1;

}

int Order::cekKode(char menu[5],char lkd[9][5]){

   for(seq=0;seq<9;seq++){
   	if(strcmp(strupr(menu),lkd[seq]) == 0){
         return seq;
      }
   }
   return -1;
}


int Order::menu(char lkd[9][5],char lmenu[9][20],long lhrg[9]){

   for(idx=0;idx<ordernum;idx++){
      tryagain:
   	clrscr();
   	header();
   	cetaklist(lkd,lmenu,lhrg);
      line();
   	cetakNama();
   	cetakOrderQty();
      if(idx > 0){
   		for(seq=0;seq<idx;seq++){
      		no = seq + 1;
      		cout<<no<<". "<<setw(20)<<order[seq].menu<<": "<<order[seq].qty<<endl;
      	}
      }

      if(!(cekKode(order[idx].code,lkd) == -1) && cache == 1){

          cout<<"Kode item yang ingin dibeli: "<<order[idx].code<<endl;

      } else {

         cout<<"Masukkan kode item yang ingin dibeli: ";cin>>kode;

      	idxKode = cekKode(kode,lkd);
      	if(idxKode == -1){
      		goto tryagain;
      	}
      	inputItem(idx,lkd[idxKode],lmenu[idxKode],lhrg[idxKode]);
         cache = 1;
      }

      status = inputAngka("Masukkan jumlah item yang ingin dibeli : ");
      if(status > 0){
      	inputQty(idx,status);
      } else {
     		goto tryagain;
      }

      calculate(idx);

      cache = 0;

   }

   return 1;

}

int Order::calculate(int idx){
	order[idx].subtotal = order[idx].qty  * order[idx].harga;
}




void Order::cetaklist(char lkd[9][5],char lmenu[9][20],long lhrg[9]){

	cout<<"List Menu Resto \"MAKUDONARUDO\":"<<endl;
   for(seq=0;seq<9;seq++){
   	no = seq + 1;
   	cout<<setiosflags(ios::left)<<setw(4)<<no<<". "<<setiosflags(ios::right)<<setw(5)<<lkd[seq]<<setw(20)<<lmenu[seq]<<setw(10)<<lhrg[seq]<<endl;
   }
}

void Order::cetakHeader(void){

   cetakNama();
   cetakOrderQty();
   cout<<setw(6)<<"No. "<<setiosflags(ios::left)<<setw(5)<<"CODE"<<setw(20)<<"MENU"<<setiosflags(ios::right)<<setw(10)<<"HARGA"<<setw(10)<<"QTY"<<setw(10)<<"SUBTOTAL"<<endl;
}

void Order::cetakNama(void){

   cout<<"Nama Pelanggan : "<<nama<<endl;

}

void Order::cetakOrderQty(void){

   cout<<"Jumlah menu yang dipilih : "<<ordernum<<endl;

}

int Order::cetakOrders(int jml){
   if(!(cache == 1)){
	total = 0;
   qty = 0;
   }
	for(idx=0;idx<jml;idx++){
   	no = idx + 1;
   	cout<<setw(4)<<no<<". "<<setiosflags(ios::left)<<setw(5)<<order[idx].code<<setw(20)<<order[idx].menu<<setiosflags(ios::right)<<setw(10)<<order[idx].harga<<setw(10)<<order[idx].qty<<setw(10)<<order[idx].subtotal<<endl;
      if(!(cache == 1)){
      total = total + order[idx].subtotal;
      qty = qty + order[idx].qty;
      }
   }
   line();
   cout<<setw(6)<<""<<setiosflags(ios::left)<<setw(5)<<""<<setw(20)<<""<<setiosflags(ios::right)<<setw(10)<<"TOTAL"<<setw(10)<<qty<<setw(10)<<total<<endl;
   if(bayar > 0){
   	cout<<setw(6)<<""<<setiosflags(ios::left)<<setw(5)<<""<<setw(20)<<""<<setiosflags(ios::right)<<setw(10)<<"BAYAR"<<setw(10)<<""<<setw(10)<<bayar<<endl;
   	cout<<setw(6)<<""<<setiosflags(ios::left)<<setw(5)<<""<<setw(20)<<""<<setiosflags(ios::right)<<setw(10)<<"KEMBALI"<<setw(10)<<""<<setw(10)<<kembali<<endl;
      cache = 0;
   	return 1;

   } else {
   	nominal = inputNominal("Masukkan nominal uang yang dibayarkan :");
   	if(nominal >= total){
   		bayar = nominal;
      	kembali = bayar - total;
      } else {
      	bayar = 0;
      }

   }
   cache = 1;
   return 0;



}


int Order::ulang(void){
   ask:
	cout<<"Apakah anda ingin memesan lagi? [Y/N]: ";cin>>inputs;
   if(strcmp(strupr(inputs),"Y") == 0){
      clear();
      return 1;
   } else if(strcmp(strupr(inputs),"N") == 0){
   	return -1;
   } else {
   	goto ask;
   }
}


void Order::clear(){
   cache = 0;
   bayar = 0;
};
