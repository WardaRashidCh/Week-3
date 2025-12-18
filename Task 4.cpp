#include<iostream>
using namespace std;
int main(){
	double x1=3;
	double x2=6;
	double y1=4;
	double y2=8;
	int squared_distance;
	squared_distance =(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	cout<<"the squared_distance between the points is(3,4)and(6,8) is:"<< squared_distance <<endl;
	return 0;
}