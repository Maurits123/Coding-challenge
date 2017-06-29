#include <iostream> 
#include <string>
#include <time.h>
#include <ctime>
using namespace std;
int sum;
int i;
int n;

int Factorial (int a) {
	if (a > 1) 
    {
        return a*Factorial(a-1);
    }
    else 
    {
        return 1;
    }
}
int main () {
    cout << "Input factorial:";
    cin >> i;
	sum=Factorial (i);
cout  << "The Factorial is:" << sum << endl;
}
