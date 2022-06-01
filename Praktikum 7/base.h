#include <iostream>
using namespace std;

class Sorting(){
  public:
    void input();
    void tukar(int *a, int *b);
    void bubblesort()
    void cariData()

  private:
  int nim, notlp, jmlh, n[], cari;
  string nama, prodi;
};
void Sorting::input(){
  cout << "Masukkan jumlah mahasiswa : ";
  cin >> jmlh;
  n = jmlh;
  
  for(int q=0; q<n q++){
    cout<<"masukan NAma :";
    cin>>nama[q];
    cout<<"masukan NIM  :";
    cin>>nim[q];
    cout<<"masukan no_telpon :";
    cin>>notlp[q];
    cout<<"masukan prodi :";
    cin>>prodi[q];
  }
}

void Sorting::tukar(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void Sorting::bubbblesort(){
  for(int q=0; q<n-1; q++){
    for(int w=0; w<n-q-1; w++){
      if(nim[w]>nim[w+1]){
        tukar(&nim[w],&&nim[w+1]);
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