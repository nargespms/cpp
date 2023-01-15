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