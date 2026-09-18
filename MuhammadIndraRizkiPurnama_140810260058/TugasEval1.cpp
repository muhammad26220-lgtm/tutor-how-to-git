#include <iostream>
#include <cmath>
using namespace std;
int main(){
long total,diskon,totalbayar;
cout<<"=== Kalkulator Kasir Toko Buku ==="<<endl;
cout<<"Total Belanja (Rp): ";
cin>>total;
cout<<"--- Ringkasan Pembayaran ---"<<endl;
if(total<100000){
    diskon=total*0/100;
    totalbayar=total-diskon;
cout<<"Diskon (0%): "<<diskon<<endl;
cout<<"Total Bayar: "<<totalbayar<<endl;
}
else if(total >= 100000 && total<=299999){
    diskon=total*10/100;
    totalbayar=total-diskon;
cout<<"Diskon (10%): "<<diskon<<endl;
cout<<"Total Bayar: "<<totalbayar<<endl;
}
else {
    diskon=total*20/100;
    totalbayar=total-diskon;
cout<<"Diskon (20%): "<<diskon<<endl;
cout<<"Total Bayar: "<<totalbayar<<endl;
}











return 0;
}
