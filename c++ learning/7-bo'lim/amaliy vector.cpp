#include <vector>
#include <iostream>
using namespace std;

int countGroups(const vector<int>& vec) {
	if(vec.empty()) return 0;
	
	int groupCount = 0;
	for(int i = 0; i < vec.size() - 1; i++) {
		if(vec[i] == vec[i + 1]) {
			if(i == 0 || vec[i] != vec[i - 1]) {
				groupCount++;  // Count the start of a new group
			}
		}
	}
	return groupCount;
}

int main() {
	vector<int> vec = {1, 2, 2, 2, 2, 3, 4, 4, 4, 5,5,5,5,6,6,6,};
	cout << "Number of groups: " << countGroups(vec) << endl;
	return 0;
}

