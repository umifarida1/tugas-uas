#include <iostream>
#include <string>
using namespace std;

int main (){
    string produk[3][3] = {{"1", "Sabun", "2000"}, {"2", "Sampo", "15000"}, {"3", "Handuk", "65000"}};
    
    int id_produk;
    string nama_produk;
    int harga_produk;
    int jumlah_produk;
    int total;
    
    cout<<"Daftar Produk"<<endl;
    for (int i=0; i<sizeof(produk)/sizeof(produk[0]); i++){
        id_produk = stoi(produk[i][0]);
        nama_produk = produk[i][1];
        harga_produk = stoi(produk[i][2]);
        
        cout<<"ID "<<id_produk<<" : "<<nama_produk<<" ("<<harga_produk<<")"<<endl;
    }
    
    cout<<"Masukkan ID Produk :";
    cin >> id_produk;
    
    if (id_produk > 0 && id_produk < (sizeof(produk)/sizeof(produk[0]))+1){
        cout<<"Masukkan Jumlah Pembelian :";
        cin >> jumlah_produk;
        
        nama_produk = produk[id_produk-1][1];
        harga_produk = stoi(produk[id_produk-1][2]);
        total = jumlah_produk * harga_produk;
        
        cout<<"Total Belanja Anda Untuk "<<jumlah_produk<<" "<<nama_produk<<" : "<<total;
    }
    else{
        cout<<"ID Yang Anda Masukkan Salah"<<endl;
    }
}
