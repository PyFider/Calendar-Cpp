# include <iostream>
# include <Windows.h>
#include <cstdlib>

using namespace std;

int main() {
	while (true) {
		SYSTEMTIME time;
		GetLocalTime(&time);
		cout << "Today| " << time.wDay << "." << time.wMonth << "." << time.wYear;
		cout << endl << "      " << time.wHour << ":" << time.wMinute << ":" << time.wSecond << endl << endl;
		Sleep(1000); // wait 1 second		
		system("cls"); // clear console
	}
}