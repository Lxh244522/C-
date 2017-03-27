#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    std::vector<std::vector<int>> out;
    cin >> n >> q;
    for (int i=0; i<n; i++) {
    	int cnt;
    	cin >> cnt;
    	for (int j=0; j<cnt; j++) {
    		int num;
    		cin >> num
    		out[i].pushback(num);
    	}
    }
    for (int j=0; j<q; j++) {
    	int x, y;
    	cin >> x >> y;
    	cout << out[x][y] << endl;
    }
    return 0;
}
