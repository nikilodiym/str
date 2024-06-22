#include <iostream>
#include <string>

using namespace std;

void del_op(char* str, char rem) {
    char* read = str;
    char* replacement = str;

    while (*read) {
        if (*read != rem) {
            *replacement = *read;
            replacement++;
        }
        read++;
    }
}

int main() {
    char str[] = "Hello World!";

    char del_characted;
	cout << "Enter the character you want to remove: ";
	cin >> del_characted;
    cout << "Original string: " << str << endl;
    del_op(str, del_characted);
    cout << "String after removing: " << str << endl;
	system("pause");
	return 0;
}