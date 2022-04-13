using namespace std;

class Input{
  public :
    void cetak(){
      cout << "Masukkan uang saku (1 bulan) :";
      cin >> uangsaku;
      cout << "Masukkan kebutuhan kuliah (1 bulan) :";
      cin >> kebutuhan;
      cout << "Masukkan kebutuhan jajan (1 bulan) :";
      cin >> jajan;
    }
    void toFile(){
      tulis_data.open("api_data.txt");
      tulis_data << uangsaku << endl;
      tulis_data << kebutuhan << endl;
      tulis_data << jajan;
      tulis_data.close();
    }
  private:
    ofstream tulis_data;
    int uangsaku, kebutuhan, jajan;
};