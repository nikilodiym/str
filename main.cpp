#include <iostream>
#include <string>

using namespace std;

void my_func(const char* str, int& number_of_letters, int& the_number_of_digits, int& other) {
    number_of_letters = 0;
    the_number_of_digits = 0;
    other = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            number_of_letters++;
        }
        else if (isdigit(str[i])) {
            the_number_of_digits++;
        }
        else {
            other++;
        }
    }
}

int main() {
    const int MAX_LENGTH = 100; 
    char str[MAX_LENGTH];
    cout << "Enter a string: ";
	cin.getline(str, MAX_LENGTH);

    int number_of_letters, the_number_of_digits, other;
    my_func(str, number_of_letters, the_number_of_digits, other);

    cout << "The number of letters in the string is: " << number_of_letters << endl;
    cout << "The number of digits in the string is: " << the_number_of_digits << endl;
    cout << "The number of spaces in the string is: " << other << endl;

	system("pause");
	return 0;
}