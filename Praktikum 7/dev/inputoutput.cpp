#include "../base.h"

void Sorting::input(){
  cout << "Masukkan jumlah mahasiswa : ";
  cin >> jmlh;
  n = jmlh;

  for(int q=0; q<n q++){
    cout<<"masukan Nama :";
    cin>>nama[q];
    cout<<"masukan NIM  :";
    cin>>nim[q];
    cout<<"masukan no_telpon :";
    cin>>notlp[q];
    cout<<"masukan prodi :";
    cin>>prodi[q];
  }
}

int main(){
  Sorting a;
  a.input;

  return 0;
}

