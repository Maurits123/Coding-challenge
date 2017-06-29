#include <iostream> 
#include <string>
#include <time.h>
#include <ctime>
using namespace std;
int flag;
int i=1;
int a=1;
int sum=0;
int main () {
	
	while(1){
		i++;
	while(i>a){
	if(i%a==0){
	sum=sum+a;
	
}
a++;
}

if(sum==i) {
	cout << i << "Is a Perfect Number"<< endl;
}

a=1;
sum=0;
}
}
