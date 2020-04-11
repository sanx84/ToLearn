#include <iostream>

using namespace std;

class DemoClass
{
public:
void print();
};

void DemoClass::print()
{
for(int i=0; i<10; ++i)
{
	std::cout << "Welcome to GIT..." << std::endl;
}
}

int main()
{
	DemoClass obj;
	obj.print();

	return 0;
}
