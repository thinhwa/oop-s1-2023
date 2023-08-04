#include <cstdlib>
#include <iostream>
using namespace std;
void print_scaled(int array[3][3], int scale);
int main() {
  srand((unsigned)time(NULL));
  int matrix[3][3];
  int scale = rand() % 10;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        matrix [i][j] = rand () % 10;
    }
  }
  print_scaled(matrix, scale);
  return 0;
}