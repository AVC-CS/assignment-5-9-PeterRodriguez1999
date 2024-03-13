
#include <iostream>
using namespace std;

int main()
{
	int prev, current;

	cin >> prev;
	while (true){
		cin >> current;
		if (current > prev){
			cout << endl;
			break;
		}
		else {
		 cout << current;
		}
		prev = current;
	}
}
