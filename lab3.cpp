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

void mystrcpy(char* str1, char* str2){
	strcpy(str1,str2);
}

void mystrcat(char* str1, char* str2){
	strcat(str1,str2);
}

int main(){
  char str1[100];
  char str2[100];
  //strcpy(str1,"Hello there");
  //cout << yo(str1);
  
  cout << "Enter a first word: ";
  cin >> str1;
  
  cout << "Enter a second word: ";
  cin >> str2;
  
  mystrcmp(str1, str2);
  cout<< "\n";
  
  mystrcat(str1, str2);
  cout<<str1<<endl;
  
  mystrcpy(str1, str2);
  cout << str1 << endl;
}
