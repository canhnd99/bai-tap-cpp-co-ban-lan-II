
/*
    Bài tập 11: Tìm giá trị lớn nhất và nhỏ nhất trong mảng.
*/

#include <iostream>
using namespace std;

void initValues(int A[], int len){
    for(int i = 0; i < len; i++){
        cout << "Enter A[" << i << "]= ";
        cin >> A[i];
    }
}

int findMaxValue(int A[], int len){
    int Max = A[0];
    for(int i = 0; i < len; i++){
        if(Max < A[i]){
            Max = A[i];
        }
    }
    return Max;
}

int findMinValue(int A[], int len){
    int Min = A[0];
    for(int i = 0; i < len; i++){
        if(Min > A[i]){
            Min = A[i];
        }
    }
    return Min;
}

int main()
{
    int Array[10];
    int length = sizeof(Array) / sizeof(int);
    initValues(Array, length);
    cout << "Max value is: " << findMaxValue(Array, length) << endl;
    cout << "Min value is: " << findMinValue(Array, length) << endl;
    return 0;
}
