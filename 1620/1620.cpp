#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	map<string, int> pokemon;
	vector<string> pokemon_names;
	string temp;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> temp;

		pokemon.insert(make_pair(temp, i + 1));
		pokemon_names.push_back(temp);
	}

	for (int i = 0; i < m; i++) {
		cin >> temp;

		if (temp[0] >= 65 && temp[0] <= 90) {
			cout << pokemon[temp] << '\n';
		}
		else {
			cout << pokemon_names[stoi(temp)-1] << '\n';
		}
	}

	return 0;
}