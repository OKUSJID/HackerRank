#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	int result = 1;
	
	for(int i=1;i<=num;i++)
	{
		result *= i;
	}

	//1,2,6,24,
	cout<<result<<endl;
}