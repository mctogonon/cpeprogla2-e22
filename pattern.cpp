#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	int num[]={1, 2, 4, 3};
	int n1;
	int n2;
	int c=0;
	
	ifstream f("input.txt");
	
	f>>n1>>n2;
	cout << n1 << " ";
	n1+=num[(c%4)];
	
	for(n1; n1<=n2; n1+=num[(c%4)]){
			cout << n1 << " ";
			c++;
		}
	
	

	system ("pause > 0");
}
