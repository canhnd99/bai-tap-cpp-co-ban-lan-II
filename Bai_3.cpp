
/*
    Bài 3: Viết chương trình tính tổng các phần tử của mảng.

    Mở rộng: Tính tổng các số nguyên tố có trong mảng.
*/

#include <iostream>
#include <math.h>
using namespace std;

void initValuesForArray(int A[], int length){
    for(int i = 0; i < length; i++){
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }
}

bool isPrime(int number){
    if(number < 2){
        return false;
    }

    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int sumOfValuesInArray(int A[], int length){
    int Sum = 0;
    for(int i = 0; i < length; i++){
        if(isPrime(A[i]) == true)
        Sum = Sum + A[i];
    }
    return Sum;
}

int main()
{
    int Array[10];
    int length = sizeof(Array) / sizeof(int);
    initValuesForArray(Array, length);
    cout << "Sum of prime numbers in Array: " << sumOfValuesInArray(Array, length);
    return 0;
}
