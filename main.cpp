#include <iostream>
#include <string>

using namespace std;

void replacing_dots_with_exclamation_marks(char* str) {
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
}

int main() {
    char str[] = "Hello. World.";
    cout << "Original string: " << str << endl;
    replacing_dots_with_exclamation_marks(str);
    cout << "String after removing: " << str << endl;

	system("pause");
	return 0;
}