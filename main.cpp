#include <iostream>
#include <string>

using namespace std;

void my_function(char *str, int index) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = index; i < length; i++) {
        str[i] = str[i + 1];
    }
}


int main() {
    int enter_what_index_delete;

	char str[] = "Hello World!";
	cout << "Enter the index of the character to delete: ";
	cin >> enter_what_index_delete;
    cout << "Original string: " << str << endl;
    my_function(str, enter_what_index_delete);
    cout << "String after deletion: " << str << endl;
	system("pause");
	return 0;
}