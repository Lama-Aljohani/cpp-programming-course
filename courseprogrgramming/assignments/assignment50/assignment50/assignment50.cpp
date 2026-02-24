#include <iostream>
#include <string>
using namespace std;

struct stInfo {

	int Age;
	bool  HasDriverLicense;
};

stInfo ReadInfo() {

	stInfo Info;


	cout << "Please Enter your Age " << endl;
	cin >> Info.Age;

	cout << "Do you have Driver License ? " << endl;
	cin >> Info.HasDriverLicense;

	return Info;
}

bool IsAccepted(stInfo Info) {

	return (Info.Age > 21 && Info.HasDriverLicense == 1);

};

void PrintResult(stInfo Info) {

	if (IsAccepted(Info))

		cout << " Hired " << endl;
	else
		cout << " Rejected " << endl;
}

int main()
{
	PrintResult(ReadInfo());

	return 0;

}