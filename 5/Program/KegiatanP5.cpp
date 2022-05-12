#include<iostream>
using namespace std;

class perulangan{
    public:
        perulangan(){
            n=4;
        }
        void ulang_for(int);
        void ulang_rekursif(int);
    private:
        int n;
};

void perulangan::ulang_for(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
}

void perulangan::ulang_rekursif(int n){
    int i=1;
    if(i<=n){
        cout<<n<<" ";
        ulang_rekursif(n-1);
    }
}

int main(){
    perulangan x;
    x.ulang_for(5);
    cout<<endl;
    x.ulang_rekursif(5);
    return 0;
}