#include <stdio.h>
#include <stdlib.h>

char simbol;
int num1, num2, result;
int pilihan;

int main(){
	
	beginning:
	
	printf("Pilih Operator Yang Ingin Digunakan!\n");
	printf("Penjumlahan(+)\n");
	printf("Pengurangan(-)\n");
	printf("Pembagian(/)\n");
	printf("Perkalian(*)\n");
	
	// Input operator/simbol aritmetika
	printf("Ketik Disini: \n");
	scanf("%C", &simbol);
	
	// Input angka
	printf("Masukkan angka pertama: \n", num1);
	scanf("%d", &num1); getchar();
	printf("Masukkan angka kedua: \n", num2);
	scanf("%d", &num2); getchar();
	
	// Pengkondisian
	switch(simbol){
		case '+':{
			result = num1 + num2;
			printf("Hasil dari %d + %d = %d\n", num1, num2, result);
			break;
		}
		
		case '-':{
			result = num1 - num2;
			printf("Hasil dari %d - %d = %d\n", num1, num2, result);
			break;
		}
		
		case '*':{
			result = num1 * num2;
			printf("Hasil dari %d x %d = %d\n", num1, num2, result);
			break;
		}
		
		case '/':{
			if(num2 != 0){
				result = num1 / num2;
				printf("Hasil dari %d / %d = %d\n", num1, num2, result);
			} else{
				printf("Tak terdefinisi\n");
			}
			break;
		}
	}
	
	printf("Menu\n");
	printf("1. Kembali menghitung\n");
	printf("2. Exit kalkulator\n");
	
	scanf("%d", &pilihan); getchar();
	
	switch(pilihan){
		case 1:{
			system("cls");
			goto beginning;
			break;
		}
		
		case 2:{
			printf("Kalkulator ditutup");
			break;
		}
	}
	
	
	return 0;
}
