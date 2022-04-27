#include <iostream>
using namespace std;

class Base{
  public:
    void input;
    void masuk(int n);
    void proses();
    void hitung(int n);
    void output();
    void keluar(int n);
  private:
    string nama, nama_matkul, jumlah;
    int nilai, rata_rata, tugas, uts,uas, akhir;
};

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


void Base::proses(){

for(n=0; n<jumlah; n++){
  akhir[n] = (0.5* tugas[n]) + (0.32 * uts[n]) + (0.45 * 100);
}
void Base::hitung(int n){
  for(int n=0; n<jumlah; n++){
    cin  >> nilai[n];
    total += nilai[n];
  }
  rata_rata = total/jumlah
}
int main(){
  Base base;
  base.proses;
  return 0;
}
void Base::output(){
  cout<<"Nama "<<nama<<endl;
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

