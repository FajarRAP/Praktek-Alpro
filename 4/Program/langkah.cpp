#include<iostream>
using namespace std;

class Operator{
    public:
        long faktorial();
        long faktorial(int n);
    private:
        int n;
};

long Operator::faktorial(){
    int n=6;
    long fak=1;
    for(int a=1; a<=n; a++){
        fak*=a;
    }
    return fak;
}

long Operator::faktorial(int n){
    if(n==0||n==1){
        return n;
    }else{
        return n*faktorial(n-1);
    }
}

int main(){
    system("cls");
    Operator run;
    cout<<run.faktorial()<<endl;
    cout<<run.faktorial(7)<<endl;
    return 0;
}