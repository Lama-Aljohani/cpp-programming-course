#include <iostream>
#include <string>
using namespace std;

void ReadInfo (int &Age,bool &HasDriverLicense)
{

	cout << "Please Enter your Age " << endl;
	cin >> Age;

	cout << "Do you have Driver License ? " << endl;
	cin >> HasDriverLicense;


}

bool ChrckHiring(int Age, bool HasDriverLicense) {

	return (Age > 21 && HasDriverLicense == 1);

}
void PrintResult(bool result) {

	if (result)
	{

		cout << " Hired " << endl;

	}
	else
	{
		cout << " Rejected " << endl;

	}
}

int main()
{
	int Age;
	bool HasDriverLicense;

	ReadInfo( Age,  HasDriverLicense);
	bool result = ChrckHiring( Age,HasDriverLicense);
	PrintResult(result);

	return 0;

}