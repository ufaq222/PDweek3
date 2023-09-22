#include<iostream>
using namespace std;
main()
{
	string name;
	int adultticket,childticket,adultticketsold,childticketsold,percentage,totalamount,donation,remainingamount;
	cout<<"Enter the movie name: ";
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	cin>>adultticket;
	cout<<"Enter the child ticket price: $";
	cin>>childticket;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adultticketsold;
	cout<<"Enter the number of child tickets sold: ";
	cin>>childticketsold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>percentage;
	totalamount=(adultticket*adultticketsold)+(childticket*childticketsold);
	donation=totalamount/10;
	remainingamount=totalamount-donation;
	cout<<endl<<"Movie: "<<name<<endl;
	cout<<"Total amount generated from ticket sales: $"<<totalamount <<endl;
	cout<<"Donation to charity (10%): $"<<donation<<endl;
	cout<<"Remaining amount after donation: $"<<remainingamount;

}
	
	
	
	

	
	
