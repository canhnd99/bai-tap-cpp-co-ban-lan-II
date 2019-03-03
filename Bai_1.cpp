
/*
    Bài 1: Viết một chương trình để lưu các giá trị vào trong mảng
           và in các giá trị đó (đã lưu vào mảng) ra màn hình.

    Mở rộng: Nhập vào và in ra một mảng ký tự.
*/

#include <iostream>
using namespace std;

void initValuesForArray(int A[], int length){
    int value;
    for(int i = 0; i < length; i++){
        cout << "A[" << i << "]= ";
        cin >> value;
        A[i] = value;
    }
}

void displayValueInArray(int A[], int length){
    cout << "\nValues in Array:";
    for(int j = 0; j < length; j++){
        cout << A[j] << " ";
    }
    cout << endl;
}

int main()
{
//    int Array[10];
//    int length;
//    length = sizeof(Array) / sizeof(int);
//
//    initValuesForArray(Array, length);
//    displayValueInArray(Array, length);

    return 0;
}
