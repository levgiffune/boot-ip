#include <iostream>
#include <string>

using namespace std;

string ip;

string getip()
{
	ip = system("curl ipinfo.io/ip");
	return ip;
}

int main()
{
	cout  << ip;
	system("echo -n "+ip+" > /dev/ttyACM0");
}

