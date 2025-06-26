#include <iostream>
#include <string>
using namespace std;


int main() {
    string vertices[4] = {"isd", "lhr", "rwd", "mbd"};
    int Matrix[4][4] = {
        {0, 4, 8, 0},
        {0, 0, 13, 3},
        {0, 0, 0, 7},
        {11, 4, 0, 0}
    };

    int shortDis = 9999999;
    int bigDis = 0;

    string shortEdge = "";
    string bigEdge = "";
    
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            if (Matrix[row][col]) {
                if (shortDis > Matrix[row][col] || shortDis == 0) {
                    shortDis = Matrix[row][col];
                    shortEdge = vertices[row] + ", " + vertices[col];
                }
                if (bigDis < Matrix[row][col]) {
                    bigDis = Matrix[row][col];
                    bigEdge = vertices[row] + ", " + vertices[col]; 
                }
                cout << vertices[row] << " -> " << vertices[col] << " = " << Matrix[row][col] << endl;
            }
        }
    }
    cout << "Shortest Edge: " <<  shortDis << " (" << shortEdge << ")" << endl;
    cout << "Biggest Edge: " << bigDis << " (" << bigEdge << ")" << endl;


    return 0;
}

/*
    01
    11
    21
    31
    41

    isd -> lhr
    lhr -> rwd
    rwd- > mbd
    mbd -> isd
    isd -> rwd
    mbd -> lhr
*/