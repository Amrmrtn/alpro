#include <iostream>

using namespace std;

int pangkat (int a,int b){
    if (b==0)
        return 1;
    else
        return a*(pangkat(a,(b-1)));
}

int main()
{
    cout << pangkat(4,7)<<endl;
    return 0;
}
