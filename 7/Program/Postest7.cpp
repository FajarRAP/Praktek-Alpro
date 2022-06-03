#include<iostream>
using namespace std;

void sorting(int n, int temp, int angka[]){
    for(int a=0; a<n; a++){
        cout<<"Masukkan angka : ";
        cin>>angka[a];
    }

    cout<<"Unsorted"<<endl;
    for(int a=0; a<n; a++){
        cout<<angka[a]<<" ";
    }

    for(int a=0; a<n; a++){
        for(int b=a+1; b<n; b++){
            if(angka[a]>angka[b]){
                temp=angka[a];
                angka[a]=angka[b];
                angka[b]=temp;
            }
        }
    }

    cout<<endl;
    cout<<"Sorted"<<endl;
    for(int a=0; a<n; a++){
        cout<<angka[a]<<" ";
    }
}

int main(){
    int n=8;
    int angka[n];
    sorting(n, 0, angka);
    return 0;
}