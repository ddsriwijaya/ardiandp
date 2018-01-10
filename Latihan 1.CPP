#include <stdio.h>
#include <conio.h>

main() {


int nilai,tugas;
printf("Masukan Sebuah Nilai:"); scanf("%d",&nilai);
printf("Masukan Nilai Tugas:"); scanf("%d",&tugas);

if(nilai>80)
printf("Anak Baik \n");
else if(nilai>70)
printf("Bagus \n");
else if(nilai>60)
printf("Cemen \n");
else
printf("Dodol \n");

getch();

}

