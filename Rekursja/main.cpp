#include<iostream>
using namespace std;

int Factorial(int N)
{
	if (N == 0)
		return 0;
	if (N == 1)
		return 1;
	return N * Factorial(N - 1);
}

int main()
{
	int Num;
	cout << "Please input number: ";
	cin >> Num;
	cout << "!" << Num << " = ";
	cout << Factorial(Num) << endl;
	return 0;
}