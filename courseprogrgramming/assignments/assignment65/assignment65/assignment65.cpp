#include <iostream>
using namespace std;


void PrintCapitalletters() {
	for (int C = 65; C <= 90; C++) {

		cout << char(C) << " ";
	}

}

void PrintSmallletters() {
	cout << endl;

	for (int C = 97; C <= 122; C++) {

		cout << char(C) << " ";
	}
}
int main()

{
	PrintCapitalletters( );
	PrintSmallletters();
	return 0;

}