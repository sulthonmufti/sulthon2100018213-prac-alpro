#include <iostream>
using namespace std;

class Panggil{
  public:
    void cetak();
    void hitung();
  private : 
  string nm,pd,matkul;
  long int nim;
  int a,mk,sks;
  int total, ts=0, tarif = 150000;
};
void Panggil::cetak(){
    cout<<"Nama      :";cin>>nm;
    cout<<"Nim       :";cin>>nim;
    cout<<"Prodi     :";cin>>pd;
    cout<<"--------------------------------------"<<endl;
    cout<<"Input Jumlah Matkul :";cin>>mk;
  cout<<"----------------------------------------"<<endl;
      }
void panggil::hitung(){
    for(a=0; a<mk; a++){
    cout<<"Matkul    :";cin>>matkul;
    cout<<"sks       :";cin>>sks;
  }
  total=tarif*ts;
  cout<<"--------------------------------------"<<endl;
  cout<<"Total SKS      :";cout<<ts<<endl;
  cout<<"Total tarif SKS :";cout<<total<<endl;

  cout<<"---------------------------------------"<<endl;
}