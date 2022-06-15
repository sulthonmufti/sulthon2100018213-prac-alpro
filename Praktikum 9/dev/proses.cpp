#include <iostream>
using namespace std;

class kelompok5{
	public:
	void konversiarray();
	private :
	  int n, brs = 2, klm=2,tmp;
	  int kelas[3];
	  int nama[5][5];
	  int d = 0;
	  string arrayA[10] = {"1900018018", "Andhika Pangestu","1900018029","Sadajiwa Kuncoro","1900018011", "sasa nur safitri", "1900018023", "Karina ayu", "1900018030", "Dika Saputra"};
	  string arrayB[10] = {"1900018001","sandika aji", "2000018045","putri larasati","2000018046","najib nur kosila","2000018048", "ayu dewi kencana","2000018050","kirana sekar"};
	  string arrayC[10] = {"1900018033","Sadiwa jadmiko","1900018001", "Cipta Dewandaru","1900018050", "Endra Iswaman", "1900018056", "Laksana Lingga","1900018060", "Mada Nismara"};
	  
	};
	void kelompok5::konversiarray(){
		{
	  cout<<"Data kelas A = "; 
	  cin>>n;
	  for(int i=0; i<n; i++){
	    cout<<arrayA[i]<<" | ";
	    }
        cout<<endl;
	  cout<<"Data kelas B = ";
	  cin>>n;
	  for(int j=0; j<n; j++){
	    cout<<arrayB[j]<<" | ";
	  }
      cout<<endl;
	  cout<<"Data kelas C = ";
	  cin>>n;
	  for(int k=0; k<n; k++){
	    cout<<arrayC[k]<<" | ";
	  }
	  cout<<endl;
	
	 //konversi
	  for(int i=0; i<n-1; i++){
	    for(int j=0; j<n+1; j++){
	      arrayA[n]=arrayA[i][j];
	    }
	  }
	  for(int i=0; i<n-1; i++){
	    for(int j=0; j<n+1; j++){
	      arrayB[n]=arrayB[i][j] ;
	    }
	  }
	  for(int i=0; i<n-1; i++){
	    for(int j=0; j<n+1; j++){
	       arrayC[n]=arrayC[i][j];
	    }
	  }
	}
    }
  int main(){
  kelompok5 a;
  a.konversiarray();
  return 0;
}