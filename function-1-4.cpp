#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

void print_scaled(int array[3][3], int scale) {
  srand((unsigned)time(NULL));

  cout << "Scale: " << scale << endl;
  int scaled[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
    scaled[i][j] = scale * array[i][j];
        cout << setw(5) << scaled[i][j] << " ";
    
    }
    cout << endl;
  }
}


