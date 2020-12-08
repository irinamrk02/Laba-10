// 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

//Пытался делать с fstream, когда файл может быть входным и выходным потоком, но с ним никак не получалось, а таким способом заработало
int main()
{
	ifstream in("f.txt"); 
	ofstream out("s.txt"); 
	string n; 
	while (in.peek() != EOF) 
	{
		getline(in, n); 
		out << n << endl; 
	}
	in.close();
	out.close();
	ifstream in1("g.txt");
	ofstream out1("f.txt"); 
	while (in1.peek() != EOF) 
	{
		getline(in1, n); 
		out1 << n << endl; 
	}
	in1.close();
	out1.close();
	ifstream in2("s.txt"); 
	ofstream out2("g.txt"); 
	while (in2.peek() != EOF) 
	{
		getline(in2, n); 
		out2 << n << endl; 
	}
	out2.close(); 
	in2.close();
	return 0;
}