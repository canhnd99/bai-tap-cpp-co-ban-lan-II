
/*
    Bài tập 18: Tìm ma trận chuyển vị.
*/

#include <iostream>
using namespace std;
#define MAX 50

void init(int A[][MAX], int &row, int &col) {
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of column: ";
    cin >> col;
    int i, j;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            cout << "A[" << i << "][" << j << "]= ";
            cin >> A[i][j];
        }
        cout << endl;
    }
}

void findTransposeOfMatrix(int A[][MAX], int B[][MAX], int row, int col) {
    int i, j;
    cout << "input matrix:\n";
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            B[j][i] = A[j][i];
        }
    }
    cout << "transpose of input matrix:\n";
    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            cout << B[j][i] << " ";
        }
        cout << "\n";
    }

}

int main() {
    int A[MAX][MAX];
    int B[MAX][MAX];
    int row, col;
    init(A, row, col);
    findTransposeOfMatrix(A, B, row, col);
    return 0;
}
