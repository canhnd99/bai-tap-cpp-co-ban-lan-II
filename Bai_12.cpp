
/*
    Bài tập 12: Viết chương trình hiển thị số chẵn và số lẻ trong một mảng.
*/

#include <iostream>
using namespace std;

void initValues(int A[], int len){
    for(int i = 0; i < len; i++){
        cout << "Enter A[" << i << "]= ";
        cin >> A[i];
    }
}

void separateValues(int A[], int len){
    cout << "Odd Values in Array: ";
    for(int i = 0; i < len; i++){
        if(A[i] % 2 == 0){
            cout << A[i] << " ";
        }
    }

    cout << endl;

    cout << "Even Values in Array: ";
    for(int j = 0; j < len; j++){
        if(A[j] % 2 != 0){
            cout << A[j] << " ";
        }
    }
}

int main()
{
    int Array[10];
    int length = sizeof(Array) / sizeof(int);
    initValues(Array, length);
    separateValues(Array, length);
    return 0;
}
