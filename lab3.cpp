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
  char str1[100]="Hello";
  char str2[100]="hello";
  //strcpy(str1,"Hello there");
  //cout << yo(str1);
  
  mystrcmp(str1, str2);
  mystrcpy(str1, str2);
  mystrcat(str1, str2);
  cout<<str1;
}
