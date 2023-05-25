#include <iostream>

using namespace std;

int pembagian (int a, int b){
    if (a < b){
        return 0;
    }
    return 1+ pembagian(a-b, b);
}

int main()
{
    cout << pembagian (10,10) << endl;
    return 0;
}
