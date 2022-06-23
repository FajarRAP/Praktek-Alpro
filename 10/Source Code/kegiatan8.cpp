#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *berikut;
};


int main(){
    //langkah pertama
    Node *baru;
    baru=new Node;
    baru->data=5;
    baru->berikut=NULL;
    cout<<"Isi data node baru adalah : "<<baru->data<<endl;

    //langkah kedua
    Node *lain;
    lain=new Node;
    lain->data=6;
    lain->berikut=NULL;
    cout<<"Isi data node lain adalah : "<<lain->data<<endl;

    //langkah ketiga : sambung rantai
    baru->berikut=lain;
    cout<<"Isi dari node lain dicetak dari node baru adalah : "<<baru->berikut->data<<endl;

    //langkah keempat
    Node *kepala=baru;
    cout<<"Mencetak node pertama dari pointer kepala : ";
    cout<<kepala->data<<endl;
    cout<<"Mencetak node kedua dari pointer kepala : ";
    cout<<kepala->berikut->data<<endl;

    //langkah kelima : pinter jalan jalan
    cout<<"Menggunakan perulangan untuk mencetak setiap data pada rantai"<<endl;
    Node *jalan=kepala;
    for(int a=0; jalan!=NULL; a++){
        cout<<"Data ke-"<<a<<" > "<<jalan->data<<endl;
        jalan=jalan->berikut;
    }

    //langkah keenam : pembuktian pointer tidak kehilangan data
    cout<<"Mencetak node pertama dari pointer kepala : "<<kepala->data<<endl;
    cout<<"Mencetak node kedua dari pointer kepala : "<<kepala->berikut->data<<endl;
    return 0;
}