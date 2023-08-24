#include <iostream>
#include <iomanip>
#include <iostream>
using namespace std;

void print_summed(int array1[3][3],int array2[3][3]){
    int matrix3 [3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix3 [i][j] = array1 [i][j] + array2 [i][j];
        }
    }
    cout << "Summ of Matrix 1 and Matrix 2: "<< endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw (5)<< matrix3 [i][j] << " ";
        }
        cout << endl;
}
}



