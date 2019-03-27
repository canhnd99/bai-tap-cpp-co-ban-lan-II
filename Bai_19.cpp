
/*
    Bài tập 19: Viết chương trình tính tổng đường chéo chính (đường chéo phụ) trong ma trận
                             |0 1 9 8|
                 VD:     B = |5 6 7 2|
                             |7 8 3 5|
                             |3 4 2 6|
                ---> tổng đường chéo chính: 15
                ---> tổng đường chéo phụ: 26

*/

#include <iostream>
using namespace std;
#define MAX 20

void init(int matrix[][MAX], int &n){
    cout << "Enter size of matrix:";
    cin >> n;
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << "matrix[" << i << "][" << j << "]= ";
            cin >> matrix[i][j];
        }
    }
}

void sumByDiagonalsLine(int matrix[][MAX], int n){
    int S_1 = 0;
    int S_2 = 0;
    int i, j;
    cout << "--> Tong duong cheo chinh:";
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j)
                S_1 = S_1 + matrix[i][j];
        }
    }
    cout << S_1 << endl;
    cout << "--> Tong duong cheo phu:";
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i+j == n-1)
                S_2 = S_2 + matrix[i][j];
        }
    }
    cout << S_2 << endl;
}

int main(){
    int matrix[MAX][MAX];
    int len = sizeof(matrix) / sizeof(int);
    init(matrix, len);
    sumByDiagonalsLine(matrix, len);
    return 0;
}
