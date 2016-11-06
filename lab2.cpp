#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>

using namespace std;

int rnd(double value){
	return round(floor(value));
}

void p1(){
	double value;
	char answer;
		cout<<"Enter a number to be round of: ";
		cin>> value;
		cout<<"Round off value: "<<round(value)<<endl;
		cin>>answer;
		
}
