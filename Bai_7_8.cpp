
/*
    Bài tập 7: Viết chương trình sắp xếp các phần tử của mảng theo thứ tự "tăng" dần.
    Bài tập 8: Viết chương trình sắp xếp các phần tử của mảng theo thứ tự "giảm" dần.

    VD: Array[10] = {3, 2, 5, 4, 1, 7, 9, 5, 6, 8}
    ---> Output_1: Array[10] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9}
    ---> Output_2: Array[10] = {9, 8, 7, 6, 5, 5, 4, 3, 2, 1}
*/

#include <iostream>
using namespace std;

void sortInAscendingOrder(int A[], int length) {
    int temp;
    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if(A[i] > A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

void sortInDecendingOrder(int A[], int length) {
    int temp;
    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if(A[i] < A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main() {
    int Array[10] = {3, 2, 5, 4, 1, 7, 9, 5, 6, 8};

    int length = sizeof(Array) / sizeof(int);

    cout << "Before Sort: ";
    for(int i = 0; i < length; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;

    cout << "Ascending Order:";
    sortInAscendingOrder(Array, length);
    for(int i = 0; i < length; i++) {
        cout << Array[i] << " ";
    }

    cout << endl;

    cout << "Decending Order:";
    sortInDecendingOrder(Array, length);
    for(int i = 0; i < length; i++) {
        cout << Array[i] << " ";
    }

    return 0;
}
