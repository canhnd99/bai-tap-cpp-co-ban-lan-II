
/*
    Bài tập 17.1: Viết chương trình tính tổng, hiệu của hai ma trận (cùng cỡ).

                VD:
                        |1 2 3|        |0 1 2|
                    A = |4 2 0|    B = |5 4 3|
                        |0 3 5|        |1 2 1|
*/

#include <iostream>
using namespace std;
#define MAX 50

void init(int A[][MAX], int B[][MAX], int &row, int &col){
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    // khoi tao gia tri cho mang A
    int i, j;
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cout << "A[" << i << "][" << j <<"]= ";
            cin >> A[i][j];
        }
    }
    cout << endl;
    // khoi tao gia tri cho mang B
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cout << "B[" << i << "][" << j <<"]= ";
            cin >> B[i][j];
        }
    }
}

void calculate(int A[][MAX], int B[][MAX], int row, int col){
    cout << "Sum:\n";
    int i, j;
    int x;
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            x = A[i][j] + B[i][j];
            cout << x << " ";
        }
        cout << endl;
    }
    cout << "\nSub:\n";
    int y;
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            y = A[i][j] - B[i][j];
            cout << y << " ";
        }
        cout << endl;
    }
}

int main()
{
    int A[MAX][MAX], B[MAX][MAX];
    int row, col;
    init(A, B, row, col);
    calculate(A, B, row, col);
    return 0;
}








