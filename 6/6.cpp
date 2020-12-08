// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>
#include <fstream>
#include <iostream>

using namespace std;


int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	ofstream out2("s.txt");


	int n;
	while (in.peek() != EOF)
	{
		in >> n;
		if (n % 2 == 0)
		{
			out << n << " ";
		}
		else if (n % 2 != 0)
		{
			out2 << n << " ";
		}

	}
	in.close();
	out.close();
	out2.close();
	return 0;
}


