#include <iostream>
using namespace std;

int main()
{
    bool result1 = (12 >= 12) , result2= !(12 >= 12) , result3 = (1 && 1) , result4 = (7 == 7) && (7 > 5);
    bool result5 = (12 > 7), result6 = !(12 < 7), result7 = (1 && 0), result8 = (7 == 7) && (7 < 5);
    bool result9 = (8 < 6), result10 = !(8 < 6), result11 = (0 || 1), result12 = (7 == 7) || (7 < 5);
    bool result13 = (8 == 8), result14 = !(8 == 8), result15 = (0 || 0), result16 = (7 < 7) || (7 > 5);
    bool result17 = (12 <= 12), result18 = !(12 <= 12), result19 = !(0), result20 = !(7 == 7) && (7 > 5);
    bool result21 = (7 == 5), result22 = !(7 == 5), result23 = !(1 || 0), result24 = (7 == 7) && !(7 < 5);

  
    cout << result1 <<" | " << result2 << " | " << result3 << " | " << result4 << endl;
    cout << result5 << " | " << result6 << " | " << result7 << " | " << result8 <<  endl;
    cout << result9 << " | " << result10 << " | " << result11 << " | " << result12 << endl;
    cout << result13 << " | " << result14 << " | " << result15 << " | " << result16 << endl;
    cout << result17 << " | " << result18 << " | " << result19 << " | " << result20 << endl;
    cout << result21 << " | " << result22 << " | " << result23 << " | " << result24 << endl;

    return 0;
}