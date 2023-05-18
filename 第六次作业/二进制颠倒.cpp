#include <string>
#include <iostream>
 #include <algorithm>
 
using namespace std;
int main()
{
	string binnum;
	cin >> binnum;
	reverse(binnum.begin(), binnum.end());
	cout << binnum;

    return 0;
}
