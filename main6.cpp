#include <iostream>
using namespace std;
int main() {
    int n ;
    cin>> n;
    int i =1;
    
    while (i <= n)
    {
        int j = 1;
        // int value = i;
        while (j <= i)
        {
            cout << (i + j-1) << " ";  // this is the second logic to print this.

            // cout<< value << " ";  // this the first logic to print this
            // value += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    
}