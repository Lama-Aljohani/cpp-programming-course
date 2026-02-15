#include <iostream>
#include <string>
using namespace std;


int main()
{
	for (int i = 1; i <= 10; i++) {

		for (int j = i; j <= 11-1; j++) {

			cout << j;
		}
		cout << "\n";
	}

	return 0;

}