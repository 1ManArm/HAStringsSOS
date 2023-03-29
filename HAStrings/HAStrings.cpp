#include <iostream>
#include <string>

bool check_polindrom(std::string word){
	int len = word.length();
	//for (int i = 0; i < len; i++)
		//word = std::tolower(word[i]); <- ���� ��������, ����� �� �������� ������? ����� ������!!!
	for (int i = 0; i < len / 2; i++)
		if (word[i] != word[len - i - 1])
			return false;
	return true;
}

int count_sym(std::string line) {
	int counter = 0;
	int length = line.length();
	char syms[]{ ' ', ',', '.', '?', '!' };
	for (int i = 0; i < length; i++)
		for (int k = 0; k < sizeof(syms); k++)
			if (line[i] == syms[k])
				counter++;
	return counter;
	std::cout << counter;
}

void func(std::string line, char sym) {
	std::cout << line.substr(line.rfind(sym)) << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	//������� 1
	std::cout << "������� 1\n";
	std::string str1 = "Hello world!";
	char sym = 'o';
	std::string res;
	for (int i = 0; i < str1.length(); i++)
		if (str1[i] == sym)
			res += sym;
	std::cout << res << std::endl;

	//������� 2
	std::cout << "\n\n������� 2\n";
	std::string str2;
	std::cout << "������� �����: ";
	std::cin >> str2;
	if (check_polindrom(str2))
		std::cout << "����� - ���������.\n\n";
	else
		std::cout << "����� �� ���������.\n\n";

	//������� 3
	std::cout << "������� 3\n������� ������ -> ";
	std::string line;
	std::cin >> line;
	std::getline(std::cin, line);
	std::cout << count_sym(line);

	//������� 4
	std::cout << "\n\n������� 4\n";
	std::string str4 = "Hello world!";
	char sym4 = 'o';
	func(str4, sym4);



	return 0;
}