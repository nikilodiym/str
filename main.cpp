#include <iostream>
#include <string>

using namespace std;

//!!�� ����� �������� � ��������ί ������!! �� � ������� ���˲ ������ �� ���ֲ ��� ���� ����� ��Ҳ� ���������

int main() {
	char str[] = "The quick brown fox jumps over the lazy dog.";

	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] == ' ') {
			str[i] = '\n';
			cout << endl;
		}
		else {
			cout << str[i];
		}
	}


	system("pause");
	return 0;
}