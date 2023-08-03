#include <cstdlib>
#include <iostream>

using namespace std;

void count_digits(int array[4][4]);

int main() {
  srand((unsigned)time(NULL));
  const int rows = 4;
  const int cols = 4;

  int matrix[rows][cols];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      matrix[i][j] = rand() % 10;
    }
  }
  count_digits(matrix);
  return 0;
}
