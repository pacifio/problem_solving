#include<iostream>
using namespace std;

int main() {
	string command;cin >> command;
	string result;
	for (int i = 1; i <= command.size(); ++i) {
		char prev = command[i-1];char current = command[i];
		if (prev == 'G') {
			result.push_back('G');
		}else if (prev == '(' && current == ')') {
			result.push_back('o');
			++i;
		}else if (prev == '(' && current != ')') {
			string x;
			for (int j = i; j < command.size(); ++j) {
				x += command[j];
				if (command[j+1] == ')') {
					break;
				}
			}
			result += x;
		}
	}

	cout << result << endl;

	return 0;
}