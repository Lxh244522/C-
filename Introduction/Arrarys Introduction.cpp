#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int number[n];
    for (int i=0; i<n; i++) {
        cin >> number[i];
    }
    cout << n << endl;
    // cout << number[n-1];
    for (int i=0; i<n; i++) {
        cout << number[i] << " ";
    }
    cout << endl;
    return 0;
}