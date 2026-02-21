#include <iostream>
using namespace std;


void PrintCapitalletters() {
	int C = 65;
	while(C<=90){
		cout << char(C) << " ";
		C++;
	}

}

void PrintSmallletters() {
	cout << endl;
	int C = 97;
	while(C<=122){
		cout << char(C) << " ";
		C++;
	}
}
int main()

{
	PrintCapitalletters( );
	PrintSmallletters();
	return 0;

}