#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	if (0 == n) {
		cout << "YONSEI";
	}
	else if (1 == n) {
		cout << "Leading the Way to the Future";
	}

	return 0;
}