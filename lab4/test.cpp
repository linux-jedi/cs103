#include <iostream>

#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	for(int i = 0; i < 10; i++)
	{
		cout << (rand() % 6) + 1 << " ";
	}
	cout << endl;
}
