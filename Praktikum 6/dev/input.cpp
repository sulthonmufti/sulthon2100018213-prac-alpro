#include "../base.h"

void Base::input(){
  cout << "masukkan jumlah mata kuliah: ";
  cin << jumlah;
  masuk(jumlah);
}
void Base::masuk(int n){
  if(n != 0){
    cout << "nama mahasiswa : ";
    cin >> nama[n];
    cout << "Masukkan nama mata kuliah : ";
    cin >> nama_matkul[n];
    cout >> "Masukkan nilai tugas : ";
    cin >> tugas[n];
    cout >> "Masukkan nilai uts : ";
    cin >> uts[n];
    cout >> "Masukkan nilai uas : ";
    cin >> uas[n];
    masuk(n-1);
  }
}

int main(){
  Base base;
  base.input();
  return 0;
}