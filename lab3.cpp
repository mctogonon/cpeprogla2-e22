#include<iostream>
#include<cstring>
using namespace std;

int mystrcmp(char* str1, char* str2){
  //return strlen(str);
  switch (strcmp(str1, str2)){
  	case -1:
  		cout<<"negative";
  	break;
  	
  	case 0:
  		cout<<"equal";
  	break;
  	
  	case 1:
  		cout<<"positive";
  	break;
  };
}

void mystrcat(char* str1, char* str2){
	strcat(str1, str2);
}

void mystrcpy(char* str1, char* str2){
	strcpy(str1, str2);
}


int main(){
  char str1[100];
  char str2[100];

  cout<<endl<<endl;
  
  cout << "Enter a first word: ";
  cin >> str1;
  
  cout << "Enter a second word: ";
  cin >> str2;
  
  cout <<endl;
  
	cout <<"************************"<<endl;
	cout <<"STRING COMPARE"<<endl;
	cout <<"************************"<<endl;
  
  mystrcmp(str1, str2);
  
  cout<< endl <<endl << endl;
  
	cout <<"************************"<<endl;
	cout <<"STRING CONCATINATION"<<endl;
	cout <<"************************"<<endl;
  
  mystrcat(str1, str2);
  cout<<str1<<endl<<endl <<endl <<endl;
  
	cout <<"************************"<<endl;
	cout <<"STRING COPY"<<endl;
	cout <<"************************"<<endl;
  
  mystrcpy(str1, str2);
  cout << str1 << endl;
  
 
}
