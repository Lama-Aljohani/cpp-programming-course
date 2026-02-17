#include <iostream>
using namespace std;

int ReadNumber(int& N) {
	cout << "Please enter the Number " << endl;
	cin >> N;
	cout << "*************************" << endl;

	int C = N;
	while(C>=1) {
	
		cout << C << endl;
		C--;
	}
	return N;
} 
int main()

{
	int N;
	ReadNumber(N);

	return 0;

}