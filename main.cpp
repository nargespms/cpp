
#include <iostream>

using namespace std;


int getMinimum (int a , int b , int c) {
    if(a==b & b==c) {
    cout << "all the same!";
    return 0;
    } else if(a<=b & a<=c) {
    return a ;   
    }else if (b<=a & b<=c) {
        return b;
    }else if (c<= a & c<=b) {
        return c;
    }
}

int main() {
  int a,b,c;
  cout << "enter first number: ";
  cin >> a;
  cout << "enter second number: ";
  cin >> b;
  cout << "enter third number: ";
  cin >> c;
  cout << getMinimum(a,b,c) << endl;
  
  
} 