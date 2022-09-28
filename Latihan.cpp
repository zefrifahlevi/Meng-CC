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
	
	char nama[20];
	char nim[20];
	char jurusan[20];
	char kelas[20];
	
	cout<<"Nama: ";
	scanf("%s", &nama);
	
	cout<<"NIM: ";
	scanf("%s", &nim);
	
	cout<<"Kelas: ";
	scanf("%s", &kelas);
	
	printf("Nama Anda: %s \n", nama);
	printf("Nim Anda: %s \n", nim);
	printf("Kelas Anda: %s \n", kelas);
}