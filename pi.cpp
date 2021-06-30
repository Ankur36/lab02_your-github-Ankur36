#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double leibnizCalculate(int n) {
  int terms = 1;
  double pivalue = 0;

  for (double i = 1; i <= (n * 2); i += 2) {
    pivalue = pivalue + terms * (4 / i);
    terms = -terms;
  }
  return pivalue;

}

int main() {
  int n;
  do {
    cout << "Enter the number of terms to approximate (or zero to quit):" << endl;
    cin >> n;
    if (n != 0) {
      double pivalue = leibnizCalculate(n + 1);
      cout << "The approximation for Leibniz's Formula is " << fixed << setprecision(5) << pivalue << " using " << n << " terms." << endl;
    }
  } while (n != 0);
  
  return 0;
}
