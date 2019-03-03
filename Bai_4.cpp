
/*
    Bài 4: Viết chương trình để sao chép các phần tử của mảng này vào một mảng khác.
*/

#include <iostream>
using namespace std;

void initValuesForArray(int arr_1[], int length){
    for(int i = 0; i < length; i++){
        cout << "A[" << i << "]= ";
        cin >> arr_1[i];
    }
}

void copyValuesToSecondArray(int arr_1[], int arr_2[], int length){
    for(int i = 0; i < length; i++){
        arr_2[i] = arr_1[i];
    }
}

void displayValuesInSecondArray(int arr_2[], int length){
    for(int i = 0; i < length; i++){
        cout << arr_2[i] << " ";
    }
}

int main()
{
    int first_array[10];
    int second_array[10];
    int length = sizeof(first_array) / sizeof(int);
    initValuesForArray(first_array, length);
    copyValuesToSecondArray(first_array, second_array, length);
    cout << "Values in second array are:";
    displayValuesInSecondArray(second_array, length);
    return 0;
}
