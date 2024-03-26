#include <iostream>

using namespace std;

int main() {
  for (int row = 0; row < 5; row++) {
    if (row < 4) {
      for (int col = 0; col < row + 1; col++) {
        if (col == 0 || col == row) {
          cout << "* ";
        } else {
          cout << "  ";
        }
      }
      cout << endl; // Moved this line outside the inner loop
    } else {
      for (int col1 = 0; col1 < 5; col1++) {
        cout << "* ";
      }
      cout << endl;
    }
  }
  return 0;
}
