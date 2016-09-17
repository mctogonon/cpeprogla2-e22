#include<iostream>

using namespace std;

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

main(){
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
