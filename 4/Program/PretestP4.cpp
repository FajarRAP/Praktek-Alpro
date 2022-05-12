#include<iostream>
using namespace std;

int rekursi(int awal, int akhir){
    if(akhir<=awal){
        return akhir;
    }else{
        if(akhir%5==0 && akhir%7==0){
            cout<<akhir<<endl;
        }
        return rekursi(awal, akhir-1);
    }
}

int iterasi(int awal, int akhir){
	int a=0;
	for(a=awal; a<=akhir; a++){
		if(a%5==0 && a%7==0){
	    	cout<<a<<endl;
		}
	}
	return a;
}

int main(){
    system("cls");
    int awal, akhir;
	cout<<"Masukkan awal  : ";
	cin>>awal;
	cout<<"Masukkan akhir : ";
	cin>>akhir;
	cout<<"Iterasi : "<<endl;
	iterasi(awal, akhir);
	cout<<"Rekursi : "<<endl;
    rekursi(awal, akhir);
    return 0;
}
