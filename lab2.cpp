#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
#define N 20
#define PI 3.14

using namespace std;

int rnd(double value){
	return round(floor(value));
}

void p1(){
	double value;
	char answer;

		cout<<endl<<endl<<"Enter a number to be round of: ";
		cin>> value;
		cout<<"Round off value: "<<round(value)<<endl;
		cin>>answer;
}

void p2(){

    int ran_num[N];   
     
    srand(time(0));  
      
    for (int i=0; i<20; i++){
        ran_num[i] = i;  
    }
     
     
        for (int i=0; i<(20-1); i++){
            int r = i + (rand() % (20-i)); 
            int temp = ran_num[i]; 
            ran_num[i] = ran_num[r]; 
            ran_num[r] = temp;
        }
         
        for (int c=0; c<10; c++){
             cout<< "  " << (" %d ", ran_num[c]);  
        }
         
        cout << "\n";
}

int square(int side,int answer){
	cout<<"Enter the side of the square: ";
	cin>>side;
	answer = side * side;
	cout<<endl<< "The area of the square is "<<answer<<" sq. units";
}

int rectangle(int length, int width, int answer){
	cout<<"Enter the length and width of the rectangle: ";
	cin>>length>>width;
	answer = length * width;
	cout<<endl<< "The area of the rectangle is "<<answer<<" sq. units";
}

int triangle(int base, int height, int answer){
	cout<<"Enter the base and height of the triangle: ";
	cin>>base>>height;
	answer = (base * height)/2;
	cout<<endl<< "The area of the triangle is "<<answer<<" sq. units";
}

int circle(int radius, int answer){
	cout<<"Enter the radius of the circle: ";
	cin>>radius;
	answer = PI * radius * radius;
	cout<<endl<< "The area of the circle is "<<answer<<" sq. units";
}

void p3(){
	int choice;
	int side, length, width, height, base, radius,answer;
	
	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	cout<<"             MENU             "<<endl;
	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	
	cout<<" [1] - Area of square \n [2] - Area of rectangle \n [3] - Area of triangle \n [4] - Area of circle \n [5] - exit"<<endl;
	
	cout<<"------------------------------"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	cout<<"------------------------------"<<endl;
	
	if(choice==1){
		cout<<"AREA OF SQUARE"<<endl;
		cout<<"------------------------------"<<endl;
		square(side,answer);
	}
	else if(choice==2){
		cout<<"AREA OF RECTANGLE"<<endl;
		cout<<"------------------------------"<<endl;
		rectangle(length,width,answer);
	}
	else if(choice==3){
		cout<<"AREA OF TRIANGLE"<<endl;
		cout<<"------------------------------"<<endl;
		triangle(base,height,answer);
	}
	else if(choice==4){
		cout<<"AREA OF CIRCLE"<<endl;
		cout<<"------------------------------"<<endl;
		circle(radius,answer);
	}
	else if(choice==5){
		cout<<"Thank You!"<<endl;
	}			  
}

void p4(){
int n; 
int factorial,i; 

cout << "Enter a number: ";
cin >> n;

	for (i = 0; i <= n; i++)
	
		if (i == 0)
		factorial = 1;
		else
		factorial = factorial * i;
	
	cout << "The factorial of " << n << " is " << factorial << endl;
}

int max(int num1, int num2){
	if(num1>num2)
		cout<<endl<<"The greatest number you have placed is "<<num1;
	else
		cout<<endl<<"The greatest number you have placed is "<<num2;
}

void p5(){
	int num1, num2;
	cout<<"Enter first number: ";
	cin>>num1;
	
	cout<<endl<<"Enter second number: ";
	cin>>num2;
	
	max(num1, num2);
	
}



main(){
	cout<< "--------------------";
	cout<<endl<< "    PROBLEM 1";
	cout<<endl<< "--------------------";
	
	p1();
	
	
	cout<<endl<<endl<< "--------------------";
	cout<<endl<< "    PROBLEM 2";
	cout<<endl<< "--------------------"<<endl<<endl;
	p2();
	
	cout<<endl<<endl<< "--------------------";
	cout<<endl<< "    PROBLEM 3";
	cout<<endl<< "--------------------"<<endl<<endl;
	p3();
	
	cout<<endl<<endl<< "--------------------";
	cout<<endl<< "    PROBLEM 4";
	cout<<endl<< "--------------------"<<endl<<endl;
	p4();
	
	cout<<endl<<endl<< "--------------------";
	cout<<endl<< "    PROBLEM 5";
	cout<<endl<< "--------------------"<<endl<<endl;
	p5();
	
	system("pause");
	return 0;
}

