#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	
	string s("file1.txt");
	fstream in(s);
	string str;
	//in.open("file1.txt", ios::in | ios::out);
		while (in >> str)cout << str;
	system("pause");
	return 0;
}