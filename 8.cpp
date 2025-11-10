#include <iostream>
using namespace std;

int sumDiagonal(int A[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += A[i][i];
    return sum;
}
