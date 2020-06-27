#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char nama[50];
	
	cout<<"Masukkan Nama Anda : ";
	gets(nama);
	cout<<"Panjang Nama Anda : "<<strlen(nama);
}
