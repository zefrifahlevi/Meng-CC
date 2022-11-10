#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
// Zefri Fahlevi Irdiansyah
// 2206***
// IF-B 22

int main() {
	cout<<"Praktikum C++ \n";
	cout<<"Zefri Fahlevi Irdiansyah \n";
	
	char nama[40];
	char nim[20];
	char jurusan[20];
	char kelas[20];
	
	printf("Nama: ");
	scanf("%s", &nama);
	
	printf("NIM: ");
	scanf("%s", &nim);
	
	printf("Kelas: ");
	scanf("%s", &kelas);

	printf("Jurusan: ");
	scanf("%s", &jurusan);
	
	printf("Nama Anda: %s \n", nama);
	printf("Nim Anda: %s \n", nim);
	printf("Kelas Anda: %s \n", kelas);
	printf("Jurusan Anda: %s \n", jurusan);
}