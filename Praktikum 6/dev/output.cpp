#include "../base.h"

void Base::output(){
  cout<<"Nama"<<nama<<endl;
  cout<<"mata kuliah:"<<nama_matkul<<endl;
  cout<<"tugas      : "<<tugas<<endl;
  cout<<"UTS: "<<uts;
  cout<<"UAS      : "<<uas<<endl;
  cout<<"Nilai Akhir     : "<<nilai<<endl;
  cout<<"nilai rata-rata  : "<<rata_rata;
  keluar(jumlah);
  
  
}
void Base::keluar(int n){
   if(n != 0){
   cout<<"||"<<nama[n]<<"||"<<endl;
   cout<<"||"<<nama_matkul[n]<<"||";
   cout<<"||"<<tugas[n]<<"||";
   cout <<"||"<<uas[n]<<"||";
   cout<<"||"<<uts[n]<<"||";
   cout<<"\n||"<<rata_rata[n]<<endl;
    keluar(n - 1);
  }
}
int main(){
  Base base;
  base.output();
  return 0;
}