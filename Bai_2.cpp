
/*
    Bài 2: Viết chương trình thực hiện đọc các giá trị trong mảng
           và "in ra" các giá trị đó theo thứ tự ngược lại.

    Mở rộng: thực hiện đảo ngược vị trí các phần tử trong mảng sau đó mới in mảng ra.
*/

#include <iostream>
using namespace std;

void initValuesForArray(int A[], int length){
    for(int i = 0; i < length; i++){
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }
}

void displayValueInArray(int A[], int length){
    for(int i = 0; i < length; i++){
        cout << A[i] << " ";
    }
}

void reverseValuesInArray(int A[], int length){
    int mid = length / 2;
    for(int i = 0; i < mid; i++){
        int temp;
        temp = A[i];
        A[i] = A[length-1-i];
        A[length-1-i] = temp;
    }
}

int main()
{
    int Array[10];
    int length = sizeof(Array) / sizeof(int);
    initValuesForArray(Array, length);
    cout << "Before Reverse:";
    displayValueInArray(Array, length);
    cout << endl;
    reverseValuesInArray(Array, length);
    cout << "After Reverse:";
    displayValueInArray(Array, length);
    return 0;
}
