#include <iostream>
#include <string>

using namespace std;

void to_lower(char& c) {
	if (c >= 'A' && c <= 'Z') {
		c += 32;
	}
}

void to_upper(char& c) {
	if (c >= 'a' && c <= 'z') {
		c -= 32;
	}

}

char* my_strock(char* str, char* delim, int& word_count) {
	for (size_t i = 0; i < my_strlen(str); i++)
	{
		for (size_t j = 0; j < my_strlen(delim); j++)
		{
			if (str[i] == delim[j])
			{
				str[i] = '\0';
				str[i] = ' ';
				break;
			}
		}
	}int counter = 0;
	for (size_t i = 0; i < my_strlen(str); i++)
	{
		if (str[i] != ' ' && str[i + 1] != ' ')
		{
			size_t j = 0;
			for (size_t j = i; j < my_strlen(str); j++)
			{
			}
			i = j;
			counter++;
		}
	}
	//char** words = new char* [my_strlen(str)];//
	char** words = new char* [counter];
	int word_index = 0;
	for (size_t i = 0; i < my_strlen(str); i++)
	{
		if (str[i] != ' ' && str[i + 1] != ' ')
		{
			size_t j = i, k = 0;
			char* temp_str = new char[50];
			for (; size_t j = i; j < my_strlen(str), j++, k++)
			{

			}
			i = j;
			temp_str[k] = '\0';
			words[word_index] = temp_str;
			word_index++;
		}
	}
}

size_t my_strlen(const char* str) {
	size_t len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}

int main() {
	char str1[] = "hello World!";
	char str2[] = "Hello World!";

	char delim[] = ".!?";
	int word_count = 0;
	char* word = my_strock(str1, delim);
	for (size_t i = 0; i < word_count; i++)
	{
		cout << word[i] << endl;
	}

	/*to_upper(str1[0]);
	to_lower(str2[0]);

	cout << str1 << endl;
	cout << str2 << endl;*/

	system("pause");
	return 0;
}