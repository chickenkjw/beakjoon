#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	// map은 key->번호 찾기 위함
	map<string, int> pokemon;
	// vector은 이름을 순서대로 저장해서 숫자->key를 찾기 위함
	vector<string> pokemon_names;
	string temp;

	cin >> n >> m;

	//포켓몬 이름과 번호를 입력받고 저장
	for (int i = 0; i < n; i++) {
		cin >> temp;

		pokemon.insert(make_pair(temp, i + 1));
		pokemon_names.push_back(temp);
	}

	for (int i = 0; i < m; i++) {
		cin >> temp;

		if (temp[0] >= 65 && temp[0] <= 90) {
			// 문제 입력받은 것의 첫번째가 문자라면 key값으로 놓고 번호 출력
			cout << pokemon[temp] << '\n';
		}
		else {
			// 입력받은 것이 숫자라면 숫자로 바꾸어 벡터의 번호에서 출력
			cout << pokemon_names[stoi(temp)-1] << '\n';
		}
	}

	return 0;
}