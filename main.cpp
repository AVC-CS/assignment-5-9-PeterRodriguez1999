
#include <iostream>
using namespace std;

int main()
{
	int prev, current;

	cin >> prev;
	while (true){
		cin >> current;
		if (current > prev){
		cout << current;
			prev =current;
		}
		else {
		cout << endl;
		break;
		}

	}
	return 0;
}
