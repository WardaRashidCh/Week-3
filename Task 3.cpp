#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double item1 =12.95;
	double item2 =24.95;
	double item3 =6.95;
	double item4 =14.95;
	double item5 =3.95;
	cout<<"price of item1: $" <<item1 <<endl;
	cout<<"price of item2: $" <<item2 <<endl;
	cout<<"price of item3: $" <<item3 <<endl;
	cout<<"price of item4: $" <<item4 <<endl;
	cout<<"price of item5: $" <<item5 <<endl;
	double subtotal = item1 + item2 + item3 + item4 + item5;
	double tax = subtotal * 0.06;
	double total = subtotal + tax;
	cout<< fixed << setprecision(2);
	cout<<"\nSubtotal: $"<< subtotal <<endl;
	cout<<"Sales Tax (6%): $"<< tax <<endl;
	cout<<"Total: $"<< total <<endl;
}