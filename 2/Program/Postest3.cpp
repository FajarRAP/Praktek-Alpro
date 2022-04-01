#include<iostream>
using namespace std;

void tentukan(int tahun){
    if(tahun%4==0){
        cout<<"Kabisat";
    }else{
        cout<<"Bukan kabisat";
    }
}

int main(){
    system("cls");
    int tahun;

    cout<<"Masukkan tahun : ";
    cin>>tahun;
    tentukan(tahun);

    return 0;
}