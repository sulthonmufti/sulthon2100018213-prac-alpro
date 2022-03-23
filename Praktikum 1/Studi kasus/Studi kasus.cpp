#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int ag = 17000;
	int ab = 21000;
	int A, B, jumlah, bayar;
	cout << "1. Ayam Goreng Rp 17.000" << endl;
	cout << "2. Ayan Bakar Rp 21.000" << endl;
	
	cout << endl;
	
	cout << "Masukkan jumlah pembelian : " << endl;
	cout << "1. Jumlah ayam goreng yang akan dibeli : ";
	cin >> A;
	cout << "2. Jumlah ayam Bakar yang akan di beli : ";
	cin >> B;
	
	cout << endl;
	
	jumlah = (A * 17000) + (B * 21000);
	if(jumlah > 45000){
		bayar = jumlah - (jumlah * 10/100);
		int diskon;
		diskon = jumlah * 10/100;
		cout << "Tagihan pembayaran : " << endl;
		cout << "1. Jumlah Ayan goreng : " << A << " * Rp 17000" << endl;
		cout << "2. Jumlah Ayam Bakar  : " << B << " * Rp 21000" << endl;
		cout << "---------------------------------------------" << endl;
		cout << "Total harga           : Rp " << (A * 17000) + (B * 21000)<< endl;
		cout << "total diskon          : Rp " << diskon << endl;
		cout << "---------------------------------------------" << endl;
		cout << "Jumlah bayar          : Rp " << bayar;
	}
	else{
		bayar = jumlah;
		cout << "Tagihan pembayaran : " << endl;
		cout << "1. Jumlah Ayan goreng : " << A << endl;
		cout << "2. Jumlah Ayam Bakar  : " << B << endl;
		cout << "Total harga           : Rp " << (A * 17000) + (B * 21000)<< endl;
		cout << "total diskon          : Rp 0 " << endl;
		cout << "---------------------------------------------" << endl;
		cout << "Jumlah bayar          : Rp " << bayar;
	}
}
