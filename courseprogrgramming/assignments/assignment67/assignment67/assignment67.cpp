#include <iostream>
#include <string>
using namespace std;


int main()
{
	for (int i = 1; i <= 10; i++) {

		for (int j = 0; j <= 10-i; j++){

			cout << "*";
		}
		cout << "\n";
	}

	return 0;

}