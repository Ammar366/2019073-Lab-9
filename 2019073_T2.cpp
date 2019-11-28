
#include <iostream>
#include <fstream>
using namespace std;
int main()

{
	ofstream fout;
	fout.open("sample.txt", ios::out);
	if (fout)
	{
		cout << "File successfully created";
	}
	else cout << "Error";
}
