#include <iostream>
#include <string>

using namespace std;

void inserting_a_letter_by_index(char* str, char ctrlV, int position) {
    int len = strlen(str);

    for (int i = len; i >= position; i--) {
        str[i + 1] = str[i];
    }

    str[position] = ctrlV;
}

int main() {
    char str[] = "Hello, World!";
    char ctrlV;
	cout << "Enter the character to insert: ";
	cin >> ctrlV;
    int position;
	cout << "Enter the position to insert the character: ";
	cin >> position;
	cout << endl;

    cout << "Original string: " << str << endl;
    inserting_a_letter_by_index(str, ctrlV, position);
    cout << "String after insertion: " << str << endl;
    cout << endl;

	system("pause");
    return 0;
}
