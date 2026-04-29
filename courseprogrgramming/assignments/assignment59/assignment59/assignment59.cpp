#include <iostream>
#include <string>
using namespace std;

enum enMonths{ January =1, February =2, March=3, April=4, May=5, June=6, July=7, August=8, September=9, October=10, November=11, December
=12};

int ReadNumberInRange(string Message, int From, int To) {

	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enMonths ReadMonthOfYear()
{
	return (enMonths)ReadNumberInRange("Please enter a month [1 to 12]: ", 1, 12);
}
string GetMonth(enMonths Month) {

	switch ( Month) {

	case 1:
		return "January" ;
	case 2:
		return "February" ;
	case 3:
		return "March";
	case 4:
		return "April" ;
	case 5:
		return "May";
	case 6:
		return "June" ;
	case 7:
		return "July" ;
	case 8:
		return "August" ;
	case 9:
		return "September";
	case 10:
		return "October";
	case 11:
		return "November";
	case 12:
		return "December";
	default:
		return "Not a Valid Month";
	}

}

int main()
{
	cout << GetMonth(ReadMonthOfYear()) << endl;
	return 0;

}