#include<iostream>
using namespace std;
main()
{
	int minutes,fps,result;
	cout<<"Number of Minutes: ";
	cin >> minutes;
	cout<<"Frames per Second: ";
	cin >> fps;
	result= minutes*fps*60;
	cout<< "Total Number of Frames: "<<result;

}
