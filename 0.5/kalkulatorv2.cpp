#include <iostream>
using namespace std;

int main(){
	int  pilih;
	float angka1, angka2, hasil;
	cout<<"Masukkan angka : ";
	cin>>angka1;
	cout<<"Operasi : "<<endl;
	cout<<"\t1. +\t2. -\t3. x\t4. :"<<endl;
	cin>>pilih;
	cout<<"Masukkan angka : ";
	cin>>angka2;
	switch(pilih){
		case 1:
			hasil=angka1+angka2;
			cout<<"Hasilnya = "<<hasil<<endl;
			break;
		case 2:
			hasil=angka1-angka2;
			cout<<"Hasilnya = "<<hasil<<endl;
			break;
		case 3:
			hasil=angka1*angka2;
			cout<<"Hasilnya = "<<hasil<<endl;
			break;
		case 4:
			hasil=angka1/angka2;
			cout<<"Hasilnya = "<<hasil<<endl;
			break;
		default:
			cout<<"Pilihan tidak tersedia"<<endl;
	}
	return 0;
}
