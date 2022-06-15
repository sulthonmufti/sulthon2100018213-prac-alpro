#include "../base.h"

void Array::input{
  string arrayA[10] = {"1900018018", "Andhika Pangestu","1900018029","Sadajiwa Kuncoro","1900018011", "sasa nur safitri", "1900018023", "Karina ayu", "1900018030", "Dika Saputra"};
  string arrayB[10] = {"1900018001","sandika aji", "2000018045","putri larasati","2000018046","najib nur kosila","2000018048", "ayu dewi kencana","2000018050","kirana sekar"};
  string arrayC[10] = {"1900018033","Sadiwa jadmiko","1900018001", "Cipta Dewandaru","1900018050", "Endra Iswaman", "1900018056", "Laksana Lingga","1900018060", "Mada Nismara"};

  for(i=0; i<10; i++){
    cout << arrayA[i] << " , ";
  }
  cout << endl;
  
  for(j=0; j<10;j++){
    cout<<<arrayB[j]<<<"   ";
  }
  cout<<endl;
  
  for<<(k=0; k<10; k++){
    cout << arrayC[i];
  }
  cout << endl;
}

void Array::output(){
  for(i=0; i<bar; i++){
    for(j=0; j<kol;j++){
      cout << arrayA[i][j];
      cout << arrayB[i][j];
      cout << arrayC[i][j]
    }
  }
}

int main(){
  Array.a;
  a.input();
  a.output();

  return 0;
}