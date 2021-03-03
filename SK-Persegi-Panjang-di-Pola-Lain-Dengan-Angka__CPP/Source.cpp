#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[]) {
	int count = 0;
	int i, j;
	int rows = 25;
	count = rows / 2 + 1;

	for (i = 0; i < rows; i++)
	{
		for (j = 1; j <= count; j++) {
			cout << j;
		}
			
		cout << "\n";

		if (i + 1 <= count) {
			count--;
		} else {
			count++;
		}
			
	}

	_getch();
	return 0;
}