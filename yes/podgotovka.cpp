#include <iostream>
using namespace std;

int main()
{
	unsigned long int a = 0xA5, b = 0xA5A3A5, c = 0xFF;
	int i = 0;
	for ( ; b; b >>= 8)
	{
		if ( (b&c) == a)
			i++;
	}
	cout << "number "<< i << endl;
	system("pause");
	return 0;
}

