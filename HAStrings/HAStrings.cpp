#include <iostream>
#include <string>

bool check_polindrom(std::string word){
	int len = word.length();
	//for (int i = 0; i < len; i++)
		//word = std::tolower(word[i]); <- куда вставить, чтобы не выдавала ошибку? НУЖНА ПОМОЩЬ!!!
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
	
	//Задание 1
	std::cout << "Задание 1\n";
	std::string str1 = "Hello world!";
	char sym = 'o';
	std::string res;
	for (int i = 0; i < str1.length(); i++)
		if (str1[i] == sym)
			res += sym;
	std::cout << res << std::endl;

	//Задание 2
	std::cout << "\n\nЗадание 2\n";
	std::string str2;
	std::cout << "Введите слово: ";
	std::cin >> str2;
	if (check_polindrom(str2))
		std::cout << "Слово - палиндром.\n\n";
	else
		std::cout << "Слово не палиндром.\n\n";

	//Задание 3
	std::cout << "Задание 3\nВведите строку -> ";
	std::string line;
	std::cin >> line;
	std::getline(std::cin, line);
	std::cout << count_sym(line);

	//Задание 4
	std::cout << "\n\nЗадание 4\n";
	std::string str4 = "Hello world!";
	char sym4 = 'o';
	func(str4, sym4);



	return 0;
}