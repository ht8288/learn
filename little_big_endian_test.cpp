#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	typedef unsigned char* ucp;
	int int_var = 9999;
	ucp p = (ucp)&int_var;
	for (int i = 0; i < sizeof(int); ++i)
	{
		printf("%.2x  ",p[i] );
	}
	cout << endl;
	return 0;
}