#include <iostream>
using namespace std;
int tambah(int angka1, int angka2){
	int total = angka1 + angka2;
	return total;
}
int kurang(int angka3, int angka4){
	int total2 = angka3 - angka4;
	return total2;
}
int kali(int angka5, int angka6){
	int total3 = angka5 * angka6;
	return total3;
}
int bagi(int angka7, int angka8){
	int total4 = angka7 / angka8;
	return total4;
}
int main(){
	int n, o, p;
	cout << "PROGRAM KALKULATOR" << endl;
	cout << "Menu Operasi" << endl;
	cout << "     1.Penambahan" << endl;
	cout << "     2.Pengurangan" << endl;
	cout << "     3.Perkalian" << endl;
	cout << "     4.Pembagian" << endl;
	cout << "Pilih Menu No : ";
	cin >> n;
	cout << "Bilangan pertama : ";
	cin >> o;
	cout << "Bilangan kedua : ";
	cin >> p;
	
	if(n == 1){
		int total = tambah(o, p);
		cout << "Hasil dari " << o << " + " << p << " = "<< total;
	}
	else if(n == 2){
		int total2 = kurang(o, p);
	    cout << "Hasil dari " << o << " - " << p << " = "<< total2;
	}
	else if(n == 3){
		int total3 = kali(o, p);
		cout << "Hasil dari " << o << " * " << p << " = "<< total3;
	}
	else{
		int total4 = bagi(o, p);
		cout << "Hasil dari " << o << " / " << p << " = "<< total4;
	}
	return 0;
}
