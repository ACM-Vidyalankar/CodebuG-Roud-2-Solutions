#include <bits/stdc++.h>
using namespace std;
 
void printPattern(int r) {
 
  float dist;
  for (int i = 0; i <= 2 * r; i++) {
    // changed 'r' to '2 * r'
    for (int j = 0; j <= 2 * r; j++) {
      // changed '(j + r) * (j + r)' to '(j - r) * (j - r)'
      dist = sqrt((i - r) * (i - r) + (j - r) * (j - r));
      if (dist > r - 0.5 && dist < r + 0.5)
        cout << "*";
      else
        cout << " ";     
    }
    cout << "\n";
  }
}
 
int main() {
  int r;
  cin >> r;
  // changed 'printPattern()' to 'printPattern(r)'
  printPattern(r);
  return 0;
}