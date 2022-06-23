#include <iostream>
using namespace std;

void isiArray(int angka[][3], int angka2[][3], int n){
	for(int a=0; a<n; a++){
		for(int b=0; b<n; b++){
			angka[a][b]=rand() % 100 + 1;
			angka2[a][b]=rand() % 100 + 1;
		}
	}
}

void cetak(int angka[][3], int n){
	for(int a=0; a<n; a++){
		for(int b=0; b<n; b++){
			cout<<angka[a][b]<<" ";
		}
		cout<<endl;
	}
}

void konversi(int angka[][3], int angka2[][3], int ganti[], int n){
	int indeks=0;
	for(int a=0; a<n; a++){
		for(int b=0; b<n; b++){
			ganti[indeks]=angka[a][b];
			indeks++;
		}
		for(int b=0; b<n; b++){
			ganti[indeks]=angka2[a][b];
			indeks++;
		}
	}
}

void sorting(int angka[], int n){
	int temp=0;
	for(int a=0; a<n; a++){
		for(int b=a+1; b<n; b++){
			if(angka[a]>angka[b]){
				temp=angka[a];
				angka[a]=angka[b];
				angka[b]=temp;
			}
		}
	}
};


int main() {
	int arrayMD[3][3], arrayMD2[3][3];
	int arrayBaru[18];

	isiArray(arrayMD, arrayMD2, 3);

	cout<<"arrayMD 1"<<endl;
	cetak(arrayMD, 3);
	cout<<endl;
	cout<<"arrayMD 2"<<endl;
	cetak(arrayMD2, 3);
	
	konversi(arrayMD, arrayMD2, arrayBaru, 3);
	cout<<endl;
	cout<<"Array 1 Dimensinya"<<endl;
	for(int a=0; a<18; a++){
		cout<<arrayBaru[a]<<" ";
	}
	sorting(arrayBaru, 18);
	cout<<endl;
	cout<<"Sorted"<<endl;
	for(int a=0; a<18; a++){
		cout<<arrayBaru[a]<<" ";
	}

    return 0;
}
