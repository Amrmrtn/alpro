#include <iostream>

using namespace std;

int tambah (int x, int y){
int hasil;
hasil= x+y;
return hasil;
}

int kurang (int x, int y){
int hasil;
hasil= x-y;
return hasil;
}

int angkaBulat (int i[4]){
int hasil;
for (int p=0; p<4; p++){
    hasil+=i[p];
}
return hasil;
}

int angkaRata (int i[4]){
int hasil,rata;
for (int p=0; p<4; p++){
    hasil+=i[p];
    rata=hasil/4;
}
return rata;
}

int main()
{
    int i[4]={1,2,4,1};
    cout << tambah(6,4) << endl;
    cout << kurang (10,3) << endl;
    cout << angkaBulat (i) << endl;
    cout << angkaRata(i) << endl;
    return 0;
}
