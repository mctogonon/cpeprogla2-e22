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


void p123(){
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

void p4(){
    char pal[20];
    int t, len;
    int goal = 0;
    
  cout <<"************************"<<endl;
	cout <<"PALINDROME"<<endl;
	cout <<"************************"<<endl;
    
    cout<<endl;
    cout << "Enter a string: ";
    cin >> pal;
    
    len = strlen(pal);
    
    for(t=0; t < len ;t++){
        if(pal[t] != pal[len-t-1]){
            goal = 1;
            break;
	   }
	}
    
    if (goal) {
        cout << endl << pal << " is not a palindrome" << endl; 
    }    
    else {
        cout <<endl << pal << " is a palindrome" << endl; 
    }
}

void p5(){
	char str[100];
	int i;

	cout<<"Enter some String: ";
	cin.getline(str, 100);

	str[0]=toupper(str[0]);

       for(i=1;i<strlen(str);i++){
	
			if(isspace(str[i])){
				i++;
				str[i]=toupper(str[i]);
			}
			else{
				str[i]=tolower(str[i]);
			}
		}	
        	cout<<str;	

}

char stri(char t[100]){
	int k,txt;
	for(k=0; t[k]!='\0'; k++);
	for(k--; k>=0;k--){
		if(t[k-1]==' ' || k==0){
			for(txt=k; t[txt]!='\0' && t[txt]!=' '; txt++)
      			cout<<t[txt];
      			cout<<endl;
		}
 	}		
 	cout << endl;

}


void p6(){
	char str1[30];
	cout << endl;
	cout << "Enter a string: ";
	cin.getline(str1, 30);
	stri(str1);
}


main(){
	cout<< "--------------------";
	cout<<endl<< "PROBLEM 1, 2, & 3";
	cout<<endl<< "--------------------";
	
	p123();
	
	
	cout<<endl<<endl<< "--------------------";
	cout<<endl<< "    PROBLEM 4";
	cout<<endl<< "--------------------"<<endl<<endl;
	p4();
	cin.ignore();
	cout<<endl<<endl<< "--------------------";
	cout<<endl<< "    PROBLEM 5";
	cout<<endl<< "--------------------"<<endl<<endl;
	p5();
	
	cout<<endl<<endl<< "--------------------";
	cout<<endl<< "    PROBLEM 6";
	cout<<endl<< "--------------------"<<endl<<endl;
	p6();
	
	system("pause");
	return 0;
}
