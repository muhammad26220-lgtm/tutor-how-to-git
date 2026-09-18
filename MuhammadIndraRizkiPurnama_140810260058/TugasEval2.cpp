#include <iostream>
#include <cmath>
using namespace std;
int main(){
int uang, kembalian;
char no;
char ulang;
int lembar5, lembar1;
cout<<"=== Vending Machine Automat ==="<<endl;
cout<<"Pilihan :"<<endl;
cout<<"1. Air Mineral (Rp 4000)"<<endl;
cout<<"2. Teh Botol (Rp 6000)"<<endl;
cout<<"3. Kopi Susu (Rp 10000)"<<endl;
    do{
cout<<"Pilih Kode Minuman (1-3): ";
cin>>no;
switch (no){
case '1' :{
cout<<"Masukkan Uang Anda: ";
cin>>uang;
if (uang<4000){
cout<<"Transaksi anda gagal!, uang anda kurang "<<4000-uang<<endl;
}
    
else{
    kembalian=uang-4000;
    lembar5=kembalian/5000;
    lembar1=(kembalian-lembar5*5000)/1000;
cout<<"=== Detail Transaksi === "<<endl;
cout<<"Transaksi anda berhasil!, uang kembalian anda adalah "<<kembalian<<endl;
cout<<"Anda mendapat 5 ribu sebanyak "<<lembar5<<" lembar"<<endl;
cout<<"Anda mendapat 1 ribu sebanyak "<<lembar1<<" lembar"<<endl;
}
}
    break;
    
case '2' :{
    cout<<"Masukkan Uang Anda: ";
cin>>uang;
if (uang<6000){
cout<<"Transaksi anda gagal!, uang anda kurang "<<6000-uang<<endl;
}
    
else{
    kembalian=uang-6000;
    lembar5=kembalian/5000;
    lembar1=(kembalian-lembar5*5000)/1000;
cout<<"=== Detail Transaksi === "<<endl;
cout<<"Transaksi anda berhasil!, uang kembalian anda adalah "<<kembalian<<endl;
cout<<"Anda mendapat 5 ribu sebanyak "<<lembar5<<" lembar"<<endl;
cout<<"Anda mendapat 1 ribu sebanyak "<<lembar1<<" lembar"<<endl;;
}
}
    break;
    
case '3' :{
cout<<"Masukkan Uang Anda: ";
cin>>uang;
if (uang<10000){
cout<<"Transaksi anda gagal!, uang anda kurang "<<10000-uang<<endl;
}
    
else{
    kembalian=uang-10000;
    lembar5=kembalian/5000;
    lembar1=(kembalian-lembar5*5000)/1000;
cout<<"=== Detail Transaksi === "<<endl;
cout<<"Transaksi anda berhasil!, uang kembalian anda adalah "<<kembalian<<endl;
cout<<"Anda mendapat 5 ribu sebanyak "<<lembar5<<" lembar"<<endl;
cout<<"Anda mendapat 1 ribu sebanyak "<<lembar1<<" lembar"<<endl;
}
}
    break;
    
    default:
cout<<"Transaksi gagal, mohon pilih angka 1-3"<<endl; 
}   
cout<<"Lakukan transaksi lagi? (y/n): ";
cin>>ulang;
}
    
    while(ulang=='y');
    cout<<"Transaksi selesai";
    return 0;
}