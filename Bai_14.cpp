
/*
    Bài 14: xóa một phần tử khỏi mảng ở vị trí cho trước.
    VD: Array[] = {0,1,4,5,3,6,7,10,43,23}
    ---> Sau khi xóa phần tử ở vị trí: i = 3 (xóa Array[3] = 5)
    ---> Mảng sau khi xóa: Array[] = {0,1,4,3,6,7,10,43,23}
*/

#include <iostream>
using namespace std;
#define MAX 50

void initValues(int A[], int &n, int &pos) {
    cout << "Enter number of values in array:";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }

    cout << "Enter the position to delete:";
    cin >> pos;
}

void deleteValue(int A[], int n, int pos){
    for(int i = 0; i < n; i++){
        if(i == pos){
            for(int j = i; j < n-1; j++){
                A[j] = A[j+1];
            }
        }
    }
    cout << "----->";
    for(int i = 0; i < n-1; i++){
        cout << A[i] << " ";
    }
}

int main()
{
    int Array[MAX];
    int n, position;
    initValues(Array, n, position);
    deleteValue(Array, n, position);
    return 0;
}
