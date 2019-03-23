
/*
    Bài tập 16: Viết chương trình nhập xuất ra mảng hai chiều kích thước m*n
*/

#include <iostream>
using namespace std;
#define MAX 50

void init(int A[][MAX], int &row, int &col){
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of column: ";
    cin >> col;
    int i, j;
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cout << "A[" << i << "][" << j << "]= ";
            cin >> A[i][j];
        }
        cout << endl;
    }
}

void display(int A[][MAX], int row, int col){
    cout << "Values in array:\n";
    int i, j;
    for(i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int Array[MAX][MAX];
    int row, col;
    init(Array, row, col);
    display(Array, row, col);
    return 0;
}
