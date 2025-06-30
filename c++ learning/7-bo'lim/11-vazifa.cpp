#include <iostream>
#include <vector>

using namespace std;


vector<int> squareUp(int n) {
	vector<int> result(n * n); 
	for (int i = 1; i <= n; ++i) { 
		for (int j = 0; j < i; ++j) { 
		result[n * (i - 1) + (n - j - 1)] = j + 1;
		}
		
	}
	
	return result;
}

int main() {
	int n;
	cout << " n: ";
	cin >> n;
	
	vector<int> result = squareUp(n);
	
	// Natijani chiqaramiz
	for (int num : result) {
		cout << num << " ";
	}
	cout << endl;
	
	return 0;
}

