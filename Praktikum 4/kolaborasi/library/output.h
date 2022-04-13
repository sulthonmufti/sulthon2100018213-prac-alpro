_using namespace std;

class Output{
  public:
    void cetak(){
    cout<<"anda sebagai output \n";
    cout<<"data yang ingin di masukan : \n";
    cout<<"uang tabungan "<< data_file[0]<<endl;
    cout<<"uang keperluan kuliah "<< data_file[1] << endl;
    cout<< "uang jajan "<<< data_file[2]<<endl;
   cout<<"uang tabungan"<< data_file[3] <<endl;   
    
    }
    void getData(){
      ambil.data.open("api_data.txt");
      string t;
      while(!ambil_data.eof ()){
        ambil_data >> data_file [index];
        index +1=;
      }
      ambil_data.close();
    }
  private:
    ifstream ambil_data;
    string data_file[30];
    int index= 0;
}