//W.A.P to Add two make Calculator using switch case
#include<iostream>
using namespace std;
int main(){
int ch;
cout<<"1 for additon of two numbers, \n2 for subtraction of two numbers, \n3 for multiplication of two numbers, \n4 for division of two numbers. \nEnter your choice : ";
cin>>ch;
float a,b,c;
cout<<"Enter Two numbers : "<<endl;
cin>>a>>b;
switch(ch)
{
case 1:cout<<"Addition of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
		break;
case 2:cout<<"Subtraction of "<<a<<" and "<<b<<" is : "<<a-b<<endl;
		break;
case 3:cout<<"Multiplication of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
		break;
case 4: if(b==0)
			{
			 cout<<"Division of "<<a<<" and "<<b<<" is : Infinity. "<<endl;	
			}
		else
		{
			cout<<"Division of "<<a<<" and "<<b<<" is : "<<a/b<<endl;
		}
		break;
default :
		  cout<<"Invalid Choice input.";
}
return 0;
} 
