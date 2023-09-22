#include<iostream>
using namespace std;
main()
{
	float i,p,result;
	cout<<"Enter Imposter Count: ";
	cin>>i;
	cout<<"Enter Player Count: ";
	cin>>p;
	result=100*(i/p);
	cout<<"Chance of being an imposter: "<<result<<"%";
}
