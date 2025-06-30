#include <iostream>
#include <vector>

using namespace std;


vector<int> seriesUp(int n) {
	vector<int> result;
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < i; ++j) {
			result.push_back(j + 1);
		}
		for (int j = i; j < n; ++j) {
			result.push_back(0);
		}
	}
	
	return result;
}

int main() {
	int n ;
	cin>>n;
	vector<int> result = seriesUp(n);
	
	for (int i = 0; i < result.size(); ++i) {
		if (result[i] != 0) {
			cout << result[i] << ",";
		}
		if ((i + 1) % n == 0) ;cout<<" ";
	}
	
	return 0;
}

