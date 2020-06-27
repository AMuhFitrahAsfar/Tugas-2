#include <iostream>
using namespace std;

void konversi (int des){
	int bin;
	if (des>1) {
		konversi(des/2);
	}

	bin=des % 2;
	cout<<bin;
}

int main () {
	int des, bin; 

	cout << "Masukkan bilangan desimal : ";
	cin >> des;
	cout<<"Hasil Konversi Ke Biner :";
	konversi(des);
	return 0;
}
