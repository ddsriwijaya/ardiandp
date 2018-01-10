#include<conio.h>
#include<iostream.h>
#include<iomanip.h>

main() {

int i,h;
int Matriks1[2][2];
int Matriks2[2][2];
int Matriks3[2][2];
clrscr();
cout<<"\t**Pengurangan Dua Buah Matriks**\n\n";

for(i=0;i<=1;i++) {
 for(h=0;h<=1;h++) {
  cout<<"Masukan Nilai Ke - "<<i<<" "<<h<<" ";
  cin>>Matriks1[i][h]; } }

cout<<"\nMatriks 1\n";
 for(i=0;i<=1;i++) {
  for(h=0;h<=1;h++) {
   cout<<setiosflags(ios::left)<<setw(3)<<Matriks1[i][h]; }

cout<<"\n"; }
 cout<<"\n";

for(i=0;i<=1;i++) {
 for(h=0;h<=1;h++) {
  cout<<"Masukan Nilai Ke - "<<i<<" "<<h<<" ";
  cin>>Matriks2[i][h]; } }

cout<<"\nMatriks 2 (Pengurangan)\n";
 for(i=0;i<=1;i++) {
  for(h=0;h<=1;h++) {
   cout<<setiosflags(ios::left)<<setw(3)<<Matriks2[i][h]; }

cout<<"\n"; }

for(i=0;i<=1;i++) {
 for(h=0;h<=1;h++) {
  Matriks3[i][h]=Matriks1[i][h]-Matriks2[i][h]; } }

cout<<"\nMatriks 3 (Pengurangan)\n";
 for(i=0;i<=1;i++) {
  for(h=0;h<=1;h++) {
   cout<<setiosflags(ios::left)<<setw(3)<<Matriks3[i][h]; }

cout<<"\n"; }

getch(); }
