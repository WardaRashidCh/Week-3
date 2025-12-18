#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double score1 = 85.5;
	double score2 = 90.75;
	double score3 = 88.25;
	double average = (score1 + score2 + score3)/3;
	cout<< fixed << setprecision(2);
	cout<<"the average of " << score1 <<" , "<< score2 <<" and "<< score3;
	cout<<" = "<< average <<endl;
	return 0;	
}