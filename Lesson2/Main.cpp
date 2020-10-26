#include <iostream>
#include <string>



const int TOTAL = 10; 

int main()
{
	using namespace std;

	int numbers[TOTAL] = { 78, 42, 7, 8, 15, 2, 83, 64, 23, 13 };

	for (int i : numbers) {

		if (i % 2 == 0) cout << i << " is even" << endl;
		else cout << i << " is odd" << endl;

	}









	system("PAUSE");
	return 0;
}