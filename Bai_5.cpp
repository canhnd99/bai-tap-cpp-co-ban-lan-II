
/*
    Bài 5: Viết chương trình đếm số lượng các giá trị lặp lại trong mảng

           VD: Array[10] = {1,4,5,2,1,4,7,6,4,9}
           ---> output: 2
            (các phần tử được lặp lại là 1 và 4)
*/

#include <iostream>
using namespace std;

void initValuesForArray(int arr_1[], int arr_2[], int length){
    for(int i = 0; i < length; i++){
        cout << "arr_1[" << i << "]= ";
        cin >> arr_1[i];
        arr_2[i] = 0;
    }
}

void checkDuplicateValues(int arr_1[], int arr_2[], int length){
    int flag = 1;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            if(arr_1[i] == arr_1[j]){
                arr_2[j] = flag;
                flag ++;
            }
        }
        flag = 1;
    }
}

int countDuplicateValues(int arr_2[], int length){
    int counter = 0;
    for(int i = 0; i < length; i++){
        if(arr_2[i] == 2){
            counter ++;
        }
    }
    return counter;
}

int main()
{
    int Array_1[10];
    int Array_2[10];

    int length = sizeof(Array_1) / sizeof(int);
    initValuesForArray(Array_1, Array_2, length);
    checkDuplicateValues(Array_1, Array_2, length);
    cout << "Number of duplicate values are: " << countDuplicateValues(Array_2, length);
    return 0;
}
