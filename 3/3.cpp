// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>
#include <fstream>
#include <iostream>

using namespace std;


int main()
{
	setlocale(0, "");

	ifstream in("f.txt");
	ofstream out("s.txt");
	int a = 0;
	string s;

	while (in.peek() != EOF)
	{
		getline(in, s);
		for (unsigned int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'P')
			{
				a++;
			}
		}
		out << a << endl;
	}
	in.close();
	out.close();
	return 0;
}

