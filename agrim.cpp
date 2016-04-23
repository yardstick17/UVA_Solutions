#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
	int t, n , d, w, flag = 0, sum = 0;
	cin >> t;
	vector <int> a;

	for (int i = 0; i < t; i ++) {
		cin >> n;
		sum = 0;
		a.clear ();

		for (int j = 0; j < n; j ++) {
			cin >> w;
			if (w >= 2) {
				a.push_back(w); 
				//a[j] = w;
				//sum = sum + w;
			} else {
				//a.push_back(w);
				flag  = 1;
			}
		} // cout << endl <<sum << endl;
		sort (a.begin(), a.end(),greater<int>());
	    //reverse (a.begin(), a.end());
		for (int j = 0; j < a.size() - 1; j ++) {
			sum = sum + a[j];
			//cout << a[j] << "  ";
		}
		sum = sum + 2;
		//cout << sum << endl;
		
		if (flag == 1) {
			cout << -1 << endl;
		} else if (n == 1) {
			cout << 2 << endl;
		} else {
			cout << sum << endl;
		}
	}
	return 0;
}

/* best case hai ki tuje 2n items uthane hai aur tune pehli 2n times mein utha liye.... ab worst case is ki tuje 
ya toh yeh soch sakte hai ki last ke bas

*/
