
#include "include/utils.h"
#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cout << "enter first number: ";
  cin >> a;
  cout << "enter second number: ";
  cin >> b;
  cout << "enter third number: ";
  cin >> c;
  cout << getMinimum(a, b, c) << endl;
}