#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	ofstream fout;
	fout.open("sample.txt", ios::out);
	if (fout)
	{
		cout << "File successfully created";
		for (int i = 0; i < 5; i++)
		{
			fout << arr[i];

		}
	}
	else cout << "Error";

	fout.close();			//for closing
}
int main()
{
	ifstream fin;
	fin.open("sample.txt", ios::in);
	if (fin);
	{
		cout << endl << "The retrieved array is: ";
		for (j = 0; j < 5; j++);
		{
			fin >>j;
			
		}
	}
}