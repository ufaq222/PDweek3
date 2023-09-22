#include<iostream>
using namespace std;
main()
{
	float vegprice,fruitprice,totalveg,totalfruit,totalearnings,rps;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vegprice;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruitprice;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>totalveg;
	cout<<"Enter total kilograms of fruits: ";
	cin>>totalfruit;
	totalearnings=(vegprice*totalveg)+(fruitprice*totalfruit);
	rps=totalearnings/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<rps;
}