
/*
    Bài tập 6: Viết chương trình in ra các giá trị chỉ xuất một lần trong mảng.

    VD: Array[10] = {1,2,3,1,2,5,3,4,6,4}
    ---> Output: 5,6
*/

#include <iostream>
using namespace std;

void initValues(int A[], int length){
    for(int i = 0; i < length; i++){
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }
}

void findUniqueValues(int A[], int length) {
    cout << "Unique Values: ";
    for(int i = 0; i < length; i++){
        int counter = 0;
        for(int j = 0; j < length; j++){
            if(A[i] == A[j]){
                counter ++;
            }
        }
        if(counter == 1){
            cout << A[i] << " ";
        }
    }
}

int main() {
    int Array[10];

    int length = sizeof(Array) / sizeof(int);

    initValues(Array, length);

    findUniqueValues(Array, length);

    return 0;
}
