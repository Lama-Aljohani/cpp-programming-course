#include <iostream>
using namespace std;

int main()
{
    bool result1 = (5 > 6 && 7 == 7) || (1 || 0), result2 = !(5 > 6 && 7 == 7) || (1 || 0);
    bool result3 = !(5 > 6 && 7 == 7) || !(1 || 0), result4 = !(5 > 6 && 7 == 7) && !(1 || 0);
    bool result5 = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && (1), result6 = ((5 > 6 && !(7 <=8)) && (8 > 1 || 4 <= 3)) || (1);

    cout << result1 << " | " << result2 << " | " << result3 << " | " << result4 << endl;
    cout << result5 << " | " << result6  << endl;
    
    return 0;
}