
#include <iostream>
using namespace std;
void count_digits(int array[4][4]) {
  int countZero = 0;
  int countOne = 0;
  int countTwo = 0;
  int countThree = 0;
  int countFour = 0;
  int countFive = 0;
  int countSix = 0;
  int countSeven = 0;
  int countEight = 0;
  int countNine = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      switch (array[i][j]) {
        case 0:
          countZero++;
          break;
        case 1:
          countOne++;
          break;
        case 2:
          countTwo++;
          break;
        case 3:
          countThree++;
          break;
        case 4:
          countFour++;
          break;
        case 5:
          countFive++;
          break;
        case 6:
          countSix++;
          break;
        case 7:
          countSeven++;
          break;
        case 8:
          countEight++;
          break;
        case 9:
          countNine++;
          break;
      }
    }
  }
          cout << "Count of 0: " << countZero << endl;
          cout << "Count of 1: " << countOne << endl;
          cout << "Count of 2: " << countTwo << endl;
          cout << "Count of 3: " << countThree << endl;
          cout << "Count of 4: " << countFour << endl;
          cout << "Count of 5: " << countFive << endl;
          cout << "Count of 6: " << countSix << endl;
          cout << "Count of 7: " << countSeven << endl;
          cout << "Count of 8: " << countEight << endl;
          cout << "Count of 9: " << countNine << endl;
}