
/*
    Bài tập 17.2: tính tích của hai ma trận.

                VD: A(m*n), B(n*p)

                    |1 2 2|         |0 1 9 8 5|
                A = |0 3 4|     B = |5 6 7 2 1|
                    |4 6 1|         |7 8 3 5 6|
                    |1 5 0|
*/

#include <iostream>
using namespace std;
#define MAX 50

int row_1, col_1, row_2, col_2;

bool check(){
    cout << "Enter row_1: ";
    cin >> row_1;
    cout << "Enter col_1: ";
    cin >> col_1;
    cout << "Enter row_2: ";
    cin >> row_2;
    cout << "Enter col_2: ";
    cin >> col_2;
    if(col_1 != row_2){
        return false;
    }else{
        return true;
    }
}

void initValuesForMatrix(int A[][MAX], int B[][MAX]){
    int i, j;
    // khoi tao gia tri cho ma tran thu nhat.
    for(i = 0; i < row_1; i++){
        for(j = 0; j < col_1; j++){
            cout << "A[" << i << "][" << j << "]= ";
            cin >> A[i][j];
        }
    }
    cout << endl;
    // khoi tao gia tri cho ma tran thu hai.
     for(i = 0; i < row_2; i++){
        for(j = 0; j < col_2; j++){
            cout << "B[" << i << "][" << j << "]= ";
            cin >> B[i][j];
        }
    }
}

void multiplyTwoMatrix(int A[][MAX], int B[][MAX]){
/*                     |1 2 2|         |0 1 9 8 5|
 *                 A = |0 3 4|     B = |5 6 7 2 1|
 *                     |4 6 1|         |7 8 3 5 6|
 *                     |1 5 0|
 */
    cout << "Result:\n";
    int i, j, k;
    for(i = 0; i < row_1; i++){
        for(j = 0; j < col_2; j++){
            int S = 0;
            for(k = 0; k < row_2; k++){
                S = S + A[i][k]*B[k][j];
            }
            cout << S << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX];
    bool state;
    do{
        state = check();
        if(state == true){
            initValuesForMatrix(A, B);
        }else{
            cout << "Col_1 must equal to Row_2!\n";
        }
    }while(state == false);
    multiplyTwoMatrix(A, B);
    return 0;
}




