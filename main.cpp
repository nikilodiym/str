#include <iostream>
#include <string>

using namespace std;

int in_the_line(char* str, char target) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == target) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[] = "Hello World!";
    char target;
    cout << "Enter the character you are looking for: ";
    cin >> target;

    int occurrences = in_the_line(str, target);

    cout << "The number of occurrences of the character '" << target << "' in the string: " << occurrences << endl;

    system("pause");
    return 0;
}
