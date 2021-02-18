#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
  while (tt--) {
  	int n;
  	cin >> n;
  	vector<int> a(n);
  	for (int i = 0; i < n; i++) {
  		cin >> a[i];
    }
    // create a counter variable
  	int cnt = 0;
  	for (int i = 0; i < n - 1; i++) {
  		// store the minimum element in 'x'
  		int x = min(a[i], a[i + 1]);
  		// store the maximum element in 'y'
  		int y = max(a[i], a[i + 1]);
  		// keep multiplying 2 to 'x' until twice the value of 'x' is greater than 'y'
  		// so that their quotient will be <= 2
  		while (x * 2 < y) {
  		 	x *= 2;	
  			cnt++;
      }
  	}
  	cout << cnt << '\n';
  }
  return 0;
}
