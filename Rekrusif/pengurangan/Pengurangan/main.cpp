#include <iostream>

using namespace std;

int pengurangan (int a,int b){
    if (b==0){
        return a-b;
    }
    else{
        return a-(pengurangan(1,(b-1)));
    }
}

int main()
{
    cout << pengurangan (20,11) << endl;
    return 0;
}
