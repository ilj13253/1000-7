#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
int main() {
	int f=1000-7;
	while (f > -7)
	{
		cout << f << "-7" <<"="<<f<<endl;
		f -= 7;
		Sleep(1);
	}
	cout << "Я гуль:)" << endl;
}