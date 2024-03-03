#include <iostream>

using namespace std;

class DemoClass
{
public:
void print();
void Ticket2();
void ticket1();
};

void DemoClass::print()
{
for(int i=0; i<10; ++i)
{
	std::cout << "Welcome to learn GIT and Jenkins..." << std::endl;
}
}

void DemoClass::Ticket2(){
	std::cout << "Ticket 2 changes" << std::endl;
}

void DemoClass::ticket1(){
	std::cout << "Ticket 1" << std::endl;
}

int main()
{
	DemoClass obj;
	obj.print();

	return 0;
}
