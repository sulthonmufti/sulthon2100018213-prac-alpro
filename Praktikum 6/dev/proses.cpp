#include "../base.h"

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