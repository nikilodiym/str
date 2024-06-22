#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const char* str) {
    int len = strlen(str);
    int left = 0;
    int right = len - 1;

    while (left < right) {
        while (!isalnum(str[left]) && left < right) {
            left++;
        }
        while (!isalnum(str[right]) && left < right) {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
	char str[] = "allA";
    if (isPalindrome(str)) {
        cout << "This string is a palindrome" << endl;
    }
    else {
        cout << "This string is not a palindrome" << endl;
    }
	system("pause");
	return 0;
}