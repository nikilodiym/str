#include <iostream>
#include <string>

using namespace std;

int main() {
	int letter_cout = 0, digit_count = 0, space_count = 0, length = 0;
	char str[] = "Hel1o world!";

	while (str[length] != '\0') {
		if (isalpha(str[length])) {
			letter_cout++;
		}
		else if (isdigit(str[length])) {
			digit_count++;
		}
		else if (isspace(str[length])) {
			space_count++;
		}
		length++;
	}

	cout << "The number of letters in the string is: " << letter_cout << endl;
	cout << "The number of digits in the string is: " << digit_count << endl;
	cout << "The number of spaces in the string is: " << space_count << endl;

	system("pause");
	return 0;
}