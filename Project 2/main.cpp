#include <iostream>

using namespace std;

// fungsi boolisEven
bool isEven(int b){
    if(b % 2 == 0){
        return true;
    }else{
        return false;
    }
}

// fungsi boolisOdd
bool isOdd(int o){
    return(o % 2 == 1);
}

// fungsi boolisFactor
bool isFactor(int num, int factor){
    if(num % factor == 0){
        return true;
    }else{
        return false;
    }
}

//fungsi intsumEven
int sumEven (int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    return sum;
}

// fungsi int sumOdd
int sumOdd(int start, int end){
    int sum = 0;
    for (int i = start; i <= end; i++){
        if(i % 2 != 0){ //i adallah bilangan ganjil
            sum += i; // tambhkan i ke dalam jumlah
        }
    }
    return sum;
}

// fungsi int maxN
int maxN(int a, int b);

// fungsi int minN
int minN(int a, int b);

// fungsi maxArray
int maxArray(int x[], int y);

// fungsi minArray
int minArray(int x[], int y);

// fungsi bool isFound
bool isFound(int a, int x[], int y);

// fungsi swapN
void swapN(int &x, int &z);

int main()
{
    // boolisEven
    cout << "Fungsi boolisEven : " << endl;
    int num = 0;
    cin >> num;

    if(isEven(num)){
        cout << num << " adalah bilangan genap" << endl;
    }else{
        cout << num << " adalah bilangan ganjil \n" << endl;
    }


    // boolisOdd
    cout << "Fungsi boolisOdd : " << endl;
    int o = 0;
    cin >> o;

    if (isOdd(o)){
        cout << o << " adalah bilangan ganjil" << endl;
    }else{
        cout << o << " adalah bilangan genap\n" << endl;
    }

    // boolisFactor
    cout << "Fungsi boolisFactor : " << endl;
    int nam = 0;
    cin >> nam;
    int factor = 0;
    cin >> factor;

    if(isFactor(num, factor)){
        cout << factor << " adalah faktor" << nam << endl;
    }else{
        cout << factor << " adalah bukan factor " << nam << "\n" << endl;
    }

    // int sumEven
    cout << "Fungsi intsumEven: " << endl;
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result =sumEven(arr, size);
    cout << "Jumlah bilangan genap dalam array adalah: " << result << "\n" <<endl;

    // int sumOdd
    cout << "Fungsi intsumOdd: " << endl;
    int start, end;
    cout << "Masukan rentang bilangan: ";
    cin >> start >> end;

    int sum = sumOdd(start, end);
    cout << "Jumlah bilangan ganjil dalam  rentang " << start << " hingga " << end << " adalah " << sum << "\n" <<endl;

    return 0;
}

    // int maxN
    int maxN(int a, int b){
        int result;
            if(a > b){
                int result =a;
            }else{
                int result=b;
        }

    }

    //int minN
    int minN(int a, int b){
        int result;
            if(a < b){
                int result=a;
            }else{
                int result=b;
            }
    }

    //int maxArray
    int maxArray(int x[], int y){
        int max_val = x[0];
        for (int i = 1; i < y; i++){
            max_val = maxN(max_val, x[i]);
        }
        return max_val;
    }

    //int minArray
    int minArray(int x[], int y){
        int min_val = x[0];
        for (int i = 1; i < y; i++ ){
            min_val = minN(min_val, x[i]);
        }
        return min_val;
    }


    //bool isFound
    bool isFound(int a, int x[], int y){
        for (int i=0; i<y; i++){
            if(x[i] == a){
                return true;
            }
        }
        return false;
    }

    //void swapN
    void swapN(int &x, int &z){
        int temp = x;
            x = z;
            z = temp;
}


