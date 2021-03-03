#include <iostream>

using namespace std;

int main() {
    int mtrx[3][3];
    int d1, d2, v1, v2, v3, h1, h2, h3;

    //input of the first row
    cin >> mtrx[0][0];
    cin >> mtrx[0][1];
    cin >> mtrx[0][2];
    //input of the second row
    cin >> mtrx[1][0];
    cin >> mtrx[1][1];
    cin >> mtrx[1][2];
    //input of the third row
    cin >> mtrx[2][0];
    cin >> mtrx[2][1];
    cin >> mtrx[2][2];

    //sum of the rows, columns and diagonals
    d1 = mtrx[0][0] + mtrx[1][1] + mtrx[2][2];
    d2 = mtrx[0][2] + mtrx[1][1] + mtrx[2][0];

    v1 = mtrx[0][0] + mtrx[0][1] + mtrx[0][2];
    v2 = mtrx[1][0] + mtrx[1][1] + mtrx[1][2];
    v3 = mtrx[2][0] + mtrx[2][1] + mtrx[2][2];

    h1 = mtrx[0][0] + mtrx[1][0] + mtrx[2][0];
    h2 = mtrx[0][1] + mtrx[1][1] + mtrx[2][1];
    h3 = mtrx[0][2] + mtrx[1][2] + mtrx[2][2];

    bool res = (d1 == d2 && d2 == v1 && v1 == v2 && v2 == v3 && v3 == h1 && h1 == h2 && h2 == h3);

    if(res == false){
        cout << "not ";
    }
    
    cout << "magic square";

    return 0;
}
