#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class Mobile
{
	public:
void Menu()
{
	
	cout<<"=---=---=---=---=---=---=---=---=---=---="<<endl;
	cout<<"For Call "<<setw(20)<<" Dail 1 "<<endl;
	cout<<"For Message "<<setw(17)<<"  Dail 2 "<<endl;
	cout<<"For open Music "<<setw(13)<<"  Dail 3"<<endl;
	cout<<"For open Browser "<<setw(12)<<"  Dail 4 "<<endl;
	cout<<"For open Settings "<<setw(11)<<"  Dail 5 "<<endl;
	cout<<"For Close Screen "<<setw(15)<<"  Dail 00000"<<endl;
	cout<<"=---=---=---=---=---=---=---=---=---=---="<<endl;	
	
}
void Password()
{
	int a,num;
	string msg,bro;
	cout<<"Dail Your Key And Press Enter = ";
	cin>>a;
	cout<<endl;
	if (a==1)
	{
		cout<<"ENTER NUMBER "<<endl;
		cout<<num;	
		cout<<endl;
		Menu();
		Password();
	}
	else if(a==2)
	{
		cout<<"Enter Your Message "<<endl;
		cin>>msg;
		cout<<endl;
		cout<<"Enter The Number You Send this Message "<<endl;
		cin>>num;
		cout<<"Your Message  >>>"<<msg<<"  Sending To ..... "<< num;
		cout<<endl;
		Menu();
		Password();
	}
	else if(a==3) 
	{
		cout<<"MUSIC OPEN ......"<<endl;
		cout<<"Songs List "<<endl;
		cout<<"Billo "<<endl;
		cout<<"Bohemia "<<endl;
		cout<<"Honey Singh"<<endl;
		cout<<"Playing /\/\/\/\/\ Song List..........";
		cout<<endl;
		Menu();
		Password();
	}
	else if(a==4) 
	{
	
		cout<<"----------------------------------------------------"<<endl;
		cout<<setw(20)<<"HTTP/www.";
		cin>>bro;
		cout<<endl;
		cout<<"----------------------------------------------------"<<endl;
		cout<<"HTTP/www."<<bro;cout<<"  is Searching......... "<<endl;
		cout<<"404 ERROR Plz Check Your Internet Connection "<<endl;	
		cout<<"----------------------------------------------------"<<endl;
		Menu();
		Password();
	}
	
	else if(a==5) 
	{
		cout<<"_________________________________________"<<endl;
		cout<<"----------------SETTINGS-----------------"<<endl;
		cout<<"[wifi]"<<setw(18)<<"[Bluetooth]"<<endl;
		cout<<"[Display]"<<setw(15)<<"[Date/Time]"<<endl;
		cout<<"[Network]"<<setw(11)<<"[About]"<<endl;
		Menu();
		Password();
	}
	else if(a==00000) 
	{
		cout<<"----------------------- NOKIA -----------------------"<<endl;
	}
}	
};
int main()
{
	Mobile M;
	int Password,n=70070353,p=000;
	cout<<"ENTER YOUR PASSWORD "<<endl;
	cin>>Password;
	while(Password>n||Password<n)
	{
		cout<<"INVALID PASSWORD "<<endl;
		cin>>Password;
	}
	if (Password==n)
	{
		M.Menu();
		M.Password();
	}
}
