#include<iostream>
using namespace std;
main()
{ 
	float initialv,acceleration,time,finalv;
	cout<<"Enter Initial Velocity (m/s): ";
	cin >> initialv;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>> acceleration;
	cout<<"Enter Time (s): ";
	cin>> time;
	finalv=(acceleration*time)+initialv;
	cout<<"Final Velocity (m/s): "<< finalv;
}
