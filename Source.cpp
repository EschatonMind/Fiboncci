#include <iostream>
using namespace std;

int Fibonacci(int n) {
	// base case
	if (n == 0) { return 0; }
	if (n == 1) { return 1; }
	// Recursive case
	int firstpart = Fibonacci(n - 1);
	int secondpart = Fibonacci(n - 2);
	// calculation
	int answer = firstpart + secondpart;
	return answer;
}
int main() {

	int n;
	cin >> n;
	cout << " the " << n << "th number is:  " << Fibonacci(n) << endl;

	for (int i = 0; i <= n; i++) {
		cout << " | " << Fibonacci(i) << " | ";
	}

	return 0;
}