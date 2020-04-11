#include <iostream>
#include <conio.h>

using namespace std;

class DemoClass
{
public:
void print();
}

void DemoClass::print()
{
for(int i=0; i<10; ++i)
{
	cout << "Welcome to GIT..." << endl;
}
}

int main()
{
	DemoClass obj;
	obj.print();

	return 0;
}
