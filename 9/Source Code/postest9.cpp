#include<iostream>
#include<iomanip>
using namespace std;

const int kolom=3;

void isiNilai(int array[][kolom], int n);
void konversi(int array[][kolom], int angkaBaru[], int n);
void sorting(int angkaBaru[], int n);
void balikin(int array[][kolom], int angkaBaru[], int n);
void cetak(int array[][kolom], int n);

int main(){
    system("cls");
    srand(time(NULL));
    int angka[3][3], angkaBaru[9];
    isiNilai(angka, 3);
    konversi(angka, angkaBaru, 3);
    sorting(angkaBaru, 3);
    balikin(angka, angkaBaru, 3);
    cetak(angka, 3);
    return 0;
}

void isiNilai(int array[][3], int n){
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            // cout<<"Angka : ";
            // cin>>array[a][b];
            array[a][b]=rand() % 100+1;
        }
    }
    cout<<"Nilai Awal"<<endl;
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            cout<<setw(4)<<array[a][b];
        }
        cout<<endl;
    }
}

void konversi(int array[][kolom], int angkaBaru[], int n){
    int indeks=0;
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            angkaBaru[indeks]=array[a][b];
            indeks++;
        }
    }
    cout<<endl<<endl<<"Array 1D"<<endl;
    for(int a=0; a<n*n; a++){
        cout<<angkaBaru[a]<<" ";
    }
}

void sorting(int angkaBaru[], int n){
    int temp=0;
    for(int a=0; a<n*n; a++){
        for(int b=a+1; b<n*n; b++){
            if(angkaBaru[a]>angkaBaru[b]){
                temp=angkaBaru[a];
                angkaBaru[a]=angkaBaru[b];
                angkaBaru[b]=temp;
            }
        }
    }
    cout<<endl<<endl<<"Array 1D, Hasil Sorting"<<endl;
    for(int a=0; a<n*n; a++){
        cout<<angkaBaru[a]<<" ";
    }
}

void balikin(int array[][kolom], int angkaBaru[], int n){
    int indeks=0;
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            array[a][b]=angkaBaru[indeks];
            indeks++;
        }
    }
}

void cetak(int array[][kolom], int n){
    cout<<endl<<endl<<"Array 2D + Sorting"<<endl;
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            cout<<setw(4)<<array[a][b];
        }
        cout<<endl;
    }
}