#include <iostream>

using namespace std;

int perkalian (int a, int b){
    if (b == 0){
        return a*b;
    }
    return a+(perkalian(a,(b-1)));
}

int main()
{
    cout << perkalian (4,17) << endl;
    return 0;
}
