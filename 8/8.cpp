// 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("f.txt"); 
    ofstream out("g.txt"); 
    string s; 
    while (in.peek() != EOF) 
    {
        getline(in, s); 
        out << endl << s << endl << "Количество символов в строке = " << s.size() << endl; 
    }
    in.close();
    out.close();
    return 0;
}