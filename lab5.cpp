#include <iostream>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Student{
       int id;
       Name name;
       double grade[3];       
};

void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}

void yeah(){
    Student stud;
    double sum=0;
    cout << "Enter student records: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "First Name: ";
    cin.getline(stud.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(stud.name.lastName, 29);
    for(int i=0; i<3; i++){
            cout << "Grade "<< i << ": ";
            cin >> stud.grade[i];  
			sum+= stud.grade[i];      
    }
    
    cout << "\n\n";
    cout << "Display student records\n";
    cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;
    cout << "Grade: " << sum/3;
    if(sum>=75)
     cout<<"\nPass";
    else
     cout<<"\nFailed";
    //for(int i=0; i<3; i++){
           // cout << "Grade "<< i << ": " << stud.grade[i] << endl;        
    //}
}

struct Quiz{
	float result[4];
};

struct Student{
	int ID;
	char name[50];
	Quiz quiz;
};

void remark(float sum){
	if(sum >=75)
		cout << "Passed";
		
	else
		cout << "Failed";
}

void orayt(){
	Student stud[6];
	float sum =0;
	
	cout<<"Enter 5 Student(s) Record"<<endl<<endl;
	 
	for(int i=1; i<6; i++){
            cout << "Student "<< i <<endl;
            cout << "ID: ";
            cin >> (stud[i].ID);
            cin.ignore();
   			cout << "Name: ";
			cin.getline(stud[i].name, 49); 
			cout << "Enter 3 quize(s): ";
            	 cin >> (stud[i].quiz.result[0]);  
            	 cin >> (stud[i].quiz.result[1]); 
            	 cin >> (stud[i].quiz.result[2]); 
					sum =( (stud[i].quiz.result[0])+(stud[i].quiz.result[1]) + (stud[i].quiz.result[2]))/3;
   cout << endl;
	}
	
	cout << setw(5) << "No."
	<< setw(10)<<"Student No"
	<< setw(15)<<"Name"
	<< setw(5)<<"Grade"
	<< setw(5)<<"Remark";
	
	for(int i=1; i<6; i++){
		cout<<endl;
		cout<<setw(5)<<i
		<<setw(10)<<stud[i].ID
		<<setw(15)<<stud[i].name;
		cout<<setw(5)<<setprecision(4)<<sum<<setw(5);
		remark(sum);
		}	
			
}

struct Name{
	char firstName[30];
	char lastName[30];
	
};

struct Item{
	int ID;
	char name[20];
	double price;
};

struct Date{
	int day;
	int month;
	int year;
};

struct Order{
	Date date;
	Item item;
	int quantity;
};


struct Customer{
	Name name;
	char contactNo[20];
	Order order;
};

void hmp(){
	Customer cust[4];
	
	
	cout<<"Enter 3 customers"<<endl<<endl;
	 
	for(int i=1; i<4; i++){
            cout << "CUSTOMER INFORMATION "<< i <<endl;
           cin.ignore();
            cout << "First Name: ";
            cin.getline(cust[i].name.firstName, 29);
   			cout << "Last Name: ";
			cin.getline(cust[i].name.lastName, 29); 
			cout << "Contact No: ";
			cin>>(cust[i].contactNo);
			
			cout << "Order Date: "<<endl;
			cout << "Day: ";
			cin>>(cust[i].order.date.day);
			cout << "Month: ";
			cin>>(cust[i].order.date.month);
			cout << "Year: ";
			cin>>(cust[i].order.date.year);
			
			cout<<endl<<"Enter 3 items"<<endl;
			for(int j=1; j<4; j++){
				cout << "ID: ";
				cin>>(cust[j].order.item.ID);
				cout << "Name: ";
				cin>>(cust[j].order.item.name);
				cout << "Price: ";
				cin >> (cust[j].order.item.price);	
				cout << "Quantity: ";
				cin >> (cust[j].order.quantity);
			}
			
			
    }
	
}

main(){
	yeah();
	
	cout<<endl<<endl<<endl;
	
	orayt();
	
	cout<<endl<<endl<<endl;
	
	hmp();
}
