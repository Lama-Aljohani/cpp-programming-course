#include <iostream>
#include <string>
using namespace std;


int main()
{
	int Age;
	bool HasDriverLicense;

	cout << " Please Enter your Age " << endl;
	cin >> Age;

	cout << " Do you have Driver License ? " << endl;
	cin >> HasDriverLicense;


	if (Age > 21 && HasDriverLicense ==1 )
	{

		cout << " Hired " << endl;

	}
	else
	{
		cout << " Rejected " << endl;

	}

	return 0;

}