
/*
    Bài tập 15: Tìm giá trị của phần tử lớn thứ 2 trong mảng

            --> Ý tưởng: +) Phần tử lớn thứ 2 là phần tử nhỏ hơn phần tử lớn nhất
                            VÀ lớn hơn các phần tử còn lại.
*/

#include <iostream>
using namespace std;
#define MAX_SIZE 50

void initValues(int A[], int &len) {
    cout << "Enter array's length:";
    cin >> len;
    for(int i = 0; i < len; i++){
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }
}

int findSecondLargest(int A[], int len){
    int i, j;
    // Tìm giá trị lớn nhất trong mảng
    int max_1 = A[0];
    for(i = 0; i < len; i++){
        if(A[i] > max_1){
            max_1 = A[i];
        }
    }

    // Tìm giá trị lớn thứ hai trong mảng
    int max_2 = A[0];
    for(j = 0; j < len; j++){
        if(A[j] > max_2 && A[j] < max_1){ // Nếu A[j] đồng thời nhỏ hơn max_1 và lớn hơn các gt còn lại
            max_2 = A[j];                 // ---> Nó là max_2
        }
    }

    return max_2;
}

int main()
{
    int Array[MAX_SIZE];
    int length;
    initValues(Array, length);
    cout << "Second largest value in Array is: " << findSecondLargest(Array, length);
    return 0;
}
