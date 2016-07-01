#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,i;
	double soma=1;
	cin>> n;
	for(i=1;i<=n;i++){
		if(i%2==1)
			soma=soma*(pow(2*i-1,2*i-1))/pow(2*i,2*i);
		else
			soma=soma+(pow(2*i-1,2*i-1))/pow(2*i,2*i);
	}
	cout<<soma;
}
