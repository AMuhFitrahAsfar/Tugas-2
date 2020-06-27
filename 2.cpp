#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main() {
	char balik[50];
	
	cout<<"Masukkan Kalimat/kata : ";
	gets(balik);
	strrev(balik);
	cout<<"Ketika Dibalik : "<<balik;
	
}
