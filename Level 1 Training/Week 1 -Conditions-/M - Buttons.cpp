#include <iostream>

using namespace std;

/*
 * simple solutaion is to check
 *     if a == b than press a and b once
 *     else press max(a,b) twice
 *
 */

int main(){

    int a,b;
    cin>>a>>b;
    // simple trick make (a) always max
    if (b > a)
        swap(a,b);
    if (a == b)
        cout << 2 * a;
    else cout << a + (a-1);

}
