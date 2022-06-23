#include<iostream>
using namespace std;

int main(){
    int baris, kolom;
    bool cek=true;
    cout<<"Baris : ";
    cin>>baris;
    cout<<"Kolom : ";
    cin>>kolom;
    if(baris!=kolom){
        cout<<"Bukan matriks bujur sangkar";
    }else{
        int matriks[baris][kolom];
        for(int a=0; a<baris; a++){
            for(int b=0; b<kolom; b++){
                // matriks[a][b]=rand()%100+1;
                cout<<"Baris "<<a+1<<" Kolom "<<b+1<<" : ";
                cin>>matriks[a][b];
            }
        }
        
        cout<<endl<<"Matriksnya"<<endl;
        for(int a=0; a<baris; a++){
            for(int b=0; b<kolom; b++){
                cout<<matriks[a][b]<<" ";
            }
            cout<<endl;
        }
        
        for(int a=0; a<baris; a++){
            for(int b=0; b<kolom; b++){
                
                if(a==b && matriks[a][b]!=1){
                    cek=false;
                }else if(a!=b && matriks[a][b]!=0){
                    cek=false;
                }
            }
        }
        cout<<endl;
        if(cek){
            cout<<"Matriks Identitas"<<endl;
        }else{
            cout<<"Bukan Matriks Identitas"<<endl;
        }
    }
    return 0;
}