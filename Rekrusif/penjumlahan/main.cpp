#include <iostream>

using namespace std;


int penjumlahan (int a,int b){
    if (b==0){
        return a+b;
    }
    else{
        return a+(penjumlahan(1,(b-1)));
    }
}

int main() {

    cout << penjumlahan(5,5)<<endl;
    return 0;
}
