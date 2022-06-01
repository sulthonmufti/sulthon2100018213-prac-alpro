#include "../base.h"

void Sorting::tukar(int a, int b){
  int temp = a;
  a = b;
  b = temp;
}

void Sorting::bubblesort(){
  for(int q=0; q<n-1; q++){
    for(int w=0; w<n-q-1; w++){
      if(nim[w]>nim[w+1]){
        tukar(&nim[w],&nim[w+1]);
      } 
    }
  }
}

void Sorting::cariData(){
  cout << "Masukkan NIM yang anda cari : ";
  cin >> cari;
  for(int i=0; i<n; i++){
    if(cari == nim[i]){
      cout << nim[i];
      cout << nama[i];
      cout << prodi[i];
      cout << notlp[i];
    }
    else{
      cout << "NIM tidak ditemukan."
    }
  }
}

int main(){
  Sorting a;
  a.tukar;
  a.bubblesort();
  a.cariData();
  return 0;
}
