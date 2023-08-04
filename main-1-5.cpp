#include <cstdlib>
#include <iostream>
using namespace std;
void print_summed(int array1[3][3],int array2[3][3]);
int main() {
  srand((unsigned)time(NULL));
  int matrix1[3][3];
  int matrix2[3][3];
  int scale = rand() % 10;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        matrix1 [i][j] = rand () % 10;
        matrix2 [i][j] = rand () % 10;
    }
  }
  print_summed(matrix1, matrix2);
  return 0;
}