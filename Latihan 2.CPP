#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main() {

char gol,jab[10];
 long gaplok=0;

  clrscr();
  cout<<endl<<"Data Grade"<<endl
  <<"=============="<<endl;
  cout<<"Masukan Golongan [1/2]:";
  cin>>gol;


  if(gol=='1')
  { strcpy(jab,"COS");
  		gaplok=50000000;
  }
  else if(gol=='2')
  {	strcpy(jab,"ACOS");
  		gaplok=40000000;
  	}
  else
  {cout<<"Ente Salah Masukin"<<endl;strcpy(jab,"");
  		gaplok=0;}

  	cout<<"Grade ="<<jab<<endl;
   cout<<"Gaji Pokok ="<<gaplok<<endl;
   getch();


}
