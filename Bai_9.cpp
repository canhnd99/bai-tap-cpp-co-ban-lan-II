
/*
    Bài tập 9: Viết một chương trình trộn (ghép) hai mảng và sắp xếp các phần tử
               theo thứ tự giảm dần(tăng dần).
*/

#include <iostream>
#define MAX 100
using namespace std;

void initValuesForArrays(int Arr_1[], int Arr_2[], int len_1, int len_2) {
    for(int i = 0; i < len_1; i++){
        cout << "Arr[" << i << "]= ";
        cin >> Arr_1[i];
    }
    cout << endl;
    for(int j = 0; j < len_2; j++){
        cout << "Arr[" << j << "]= ";
        cin >> Arr_2[j];
    }
}

void mergeTwoArrays(int Arr_1[], int Arr_2[], int Arr_3[], int len_1, int len_2) {
    int len_3 = len_1 + len_2;

    for(int i = 0; i < len_3; i++){
        if(i < len_1){
            Arr_3[i] = Arr_1[i];
        }else if(i >= len_1){
            Arr_3[i] = Arr_2[i - len_1];
        }
    }

}

void displayValues(int Arr_3[], int len_1, int len_2){
    int len_3 = len_1 + len_2;
    cout << "Values in array_3: ";
    for(int i = 0; i < len_3; i++){
        cout << Arr_3[i] << " ";
    }
}

int main() {
    int Array_1[MAX];
    int Array_2[MAX];
    int Array_3[MAX];
    int length_1, length_2;

    cout << "Size of first Array:";
    cin >> length_1;
    cout << "Size of second Array:";
    cin >> length_2;

    initValuesForArrays(Array_1, Array_2, length_1, length_2);
    mergeTwoArrays(Array_1, Array_2, Array_3, length_1, length_2);
    displayValues(Array_3, length_1, length_2);
    return 0;
}
