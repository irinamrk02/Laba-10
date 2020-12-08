// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>
#include <fstream>
#include <iostream>

using namespace std;


int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	int n;
	while (in.peek() != EOF)
	{
		in>>n;
			if (n>0 && n%3 == 0)
			{
				out << n <<" ";
			}
			
	}
	in.close();
	out.close();
	return 0;
}