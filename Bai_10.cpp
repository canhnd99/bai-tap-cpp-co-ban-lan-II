
/*
    Bài 10: Viết chương trình đếm số lần xuất hiện của các giá trị trong mảng

           VD: Array[10] = {1,4,5,2,1,4,7,4}
           ---> output: 1 : 2
                        4 : 3
                        5 : 1
                        2 : 1
                        7 : 1
*/

#include <iostream>
using namespace std;

void initValuesForArray(int A_1[], int A_2[], int len) {
    for(int i = 0; i < len; i++){
        cout << "A[" << i << "]= ";
        cin >> A_1[i];
        A_2[i] = -1;
    }
}

void countFrequencyOfValues(int A_1[], int A_2[], int len) {
    for(int i = 0; i < len; i++){
        int counter = 1;
        for(int j = i + 1; j < len; j++){
            if(A_1[i] == A_1[j]){
                counter ++;
                A_2[j] = 0;
            }
        }
        if(A_2[i] != 0){
            A_2[i] = counter;
        }
    }

    cout << "\nFrequency of Values:\n";

    for(int i = 0; i < len; i++){
        if(A_2[i] != 0){
            cout << A_1[i] << " appear " << A_2[i] << " times " << endl;
        }
    }
}

int main() {
    int Array_1[10];
    int Array_2[10];
    int length = sizeof(Array_1) / sizeof(int);
    initValuesForArray(Array_1, Array_2, length);
    countFrequencyOfValues(Array_1, Array_2, length);
    return 0;
}
