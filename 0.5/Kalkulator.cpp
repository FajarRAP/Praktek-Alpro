#include <iostream>
using namespace std;

int main(){
	float angka, hasil=0;
	char pilih;

	operasi:
	system("cls");
	cout<<"Masukkan angka : ";
	cin>>angka;
	cout<<"Pilih operasi  : "<<endl;
	cout<<"\t1. +\t2. -\t3. x\t4. : \t5. ="<<endl;
	cin>>pilih;

	if(pilih=='1'||pilih=='+'){
		hasil+=angka;
		goto operasi;
	}else if(pilih=='2'||pilih=='-'){
		hasil-=angka;
		goto operasi;
	}else if(pilih=='3'||pilih=='x'){
		hasil*=angka;
		goto operasi;
	}else if(pilih=='4'||pilih==':'){
		hasil/=angka;
		goto operasi;
	}else if(pilih=='5'||pilih=='='){
		system("cls");
		cout<<"Hasilnya : "<<hasil<<endl;
	}
	else{
		cout<<"Pilihan tidak tersedia"<<endl;
	}

	return 0;
}
