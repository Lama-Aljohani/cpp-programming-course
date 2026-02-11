#include <iostream>
using namespace std;

void ReadNumber(int& N) {
	cout << "Please enter the Number " << endl;
	cin >> N;
	cout << "*************************" << endl;

}

void CheckNumber(int N) {
	
	for (int C = N; C >= 1; C--)
		cout << C << endl;
}
int main()

{
	int N;
	ReadNumber(N);
	CheckNumber(N);

	return 0;

}