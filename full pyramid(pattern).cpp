#include <iostream>

using namespace std;

int main() {
  for (int row = 0; row < 5; row++) {
    for (int space = 0; space < 5 - row; space++) {
      cout << " ";
    }
    for (int star = 0; star < row + 1; star++) {
      cout << "* ";
    }
    cout << endl;
  }
}
