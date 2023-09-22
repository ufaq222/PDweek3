#include<iostream>
using namespace std;
main()
{ 
	int size,cost,area,costperpound,costpersquarefoot;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>>size;
	cout<<"Enter the cost of the bag: $";
	cin>>cost;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area;
	costperpound=cost/size;
	cout<<"Cost of fertilizer per pound: $"<<costperpound<<endl;
	costpersquarefoot=cost/area;
	cout<<"Cost of fertilizing per square foot: $"<<costpersquarefoot;

}
	
	