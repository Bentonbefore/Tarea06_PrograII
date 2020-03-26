#include<iostream>
#include<string>

using namespace std;

int main() {


	cout << "Enter a number" << "\n" << endl;
	int number;
	cin >> number;

	
	string s = to_string(number);

	int sum = 0;

	for (int i = 0; i < s.length(); i++) {
		
		char a = s[i];
		
		int num = a - '0';
		
		sum += num;

	}
	
	cout << "Your number has" << "\n" << s.length() << " "  << "digits" << endl;
	cout << "The sum of the digits is" << "\n" << " " << sum << endl;
}