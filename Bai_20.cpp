
/*
    Bài tập 20: Viết chương trình in ra ma trận tam giác trên và ma trận tam giác dưới.
*/

#include <iostream>
using namespace std;
#define MAX 20

void init(int matrix[][MAX], int &n) {
    cout << "Enter size of matrix:";
    cin >> n;
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << "matrix[" << i << "][" << j << "]= ";
            cin >> matrix[i][j];
        }
    }
}

void upperZerosTriangle(int matrix[][MAX], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i < j)
                matrix[i][j] = 0; // gán phần tử bên trên đường chéo chính = 0
        }
    }
    cout << "upper zeros triangle:\n";
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void lowerZerosTriangle(int matrix[][MAX], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i > j)
                matrix[i][j] = 0; // gán phần tử bên dưới đường chéo chính = 0
        }
    }
    cout << "lower zeros triangle:\n";
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[MAX][MAX];
    int len = sizeof(matrix) / sizeof(int);
    init(matrix, len);
    //upperZerosTriangle(matrix, len);
    lowerZerosTriangle(matrix, len);
    return 0;
}
