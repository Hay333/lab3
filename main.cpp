#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string soobshenie = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb http://security.debian.org/ stretch/updates main contrib non-free\ndeb-src http://security.debian.org/ stretch/updates main contrib non-free\ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
	int chisla,bukvi,drugoe;
	chisla=0;
	bukvi=0;
	drugoe=0;
	for (int i = 0; i < soobshenie.length(); i++) {
		if (soobshenie[i] == ' '|| soobshenie[i] == '\n')
			continue;
		else if (soobshenie[i] >= '0' && soobshenie[i] <= '9')
			chisla=++chisla;
		else if ((soobshenie[i] >= 'a' && soobshenie[i] <= 'z') || (soobshenie[i] >= 'A' && soobshenie[i] <= 'Z'))
			bukvi=++bukvi;
		else
			drugoe=++drugoe;
	}
	cout << "Чисел в тексте:" <<chisla<< endl;
	cout << "Букв в тексте:" <<bukvi<< endl;
	cout << "Другое:" <<drugoe<< endl;
	cout << "Общее колличество символов в тексте(кроме пробелов):" <<chisla+bukvi+drugoe<< endl;
	return 0;
}
