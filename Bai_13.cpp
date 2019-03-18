
/*
    Bài tập 13: chèn thêm một phần tử vào mảng đã sắp xếp

    VD: A[] = {1,3,2,4,5,3,5,6,5,8}
    --> Sau khi sắp xếp: [1,2,3,3,4,4,6,7,8,9]
    --> phần tử chèn thêm: 5
    --> Sau khi chèn: [1,2,3,3,4,4,5,6,7,8,9]
*/
#include <iostream>
#define SIZE 50
using namespace std;

void initValues(int A[], int &n, int &val) {
    cout << "Enter array's size:";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }

    cout << "Enter inserted value:";
    cin >> val;
}

void sortInAscendingOrder(int A[], int n) {
    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(A[i] > A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

void insertNewValue(int A[], int n, int val){
    for(int i = 0; i < n; i++){
        if(A[i] > val){
            for(int j = n; j > i; j--){
                A[j] = A[j-1];
            }
            A[i] = val;
            break;
        }else{
            A[n] = val;
        }
    }
    // in ra các giá trị trong mảng sau khi chèn.
    cout << "After inserted: ";
    for(int i = 0; i <= n; i++){
        cout << A[i] << " ";
    }
}

int main() {
    int Array[SIZE];
    int n, value;
    initValues(Array, n, value);
    sortInAscendingOrder(Array, n);
    insertNewValue(Array, n, value);
    return 0;
}
