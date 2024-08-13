#include <iostream>
using namespace std; 



 
int main(){
	int a,d,e,b=0,c=0,p,q;
	
	cout<<"Enter the number of First Class seats : ";
	cin>>p;
	cout<<"Enter the number of Second Class seats : ";
	cin>>q;
	
	cout<<endl;
	
	int first[p];
	int economy[q];
	
	for(int i=0;i<5;i++){
		first[i]=0;
		economy[i]=0;
	}
	do{
		cout<<"Welcome to ABC Airlines"<<endl;
		cout<<endl;
		cout<<"Please type 1 for first class and Please type 2 for economy class, Press 0 to exit "<<endl;
		cin>>a;
		if(a==1 && b<p){
			first[b]=1;
			cout<<"Sir/Madam your seat has been reserved. Seat number is First class - 0"<<b+1<<endl;
			b++;
		}
		else if(a==1 && c<q){
			cout<<"First class booked would you to place on economy class?(Yes=1, No=0)"<<endl;
			cin>>d;
			if(d==0)
				a=0;
			else
				cout<<"-----------------------------Select option 2--------------------------------------"<<endl;
		}
		else if(a==1 && c>=q){
			cout<<"All seats booked ...Sorry!"<<endl;
			a=0;
		}
		
		if(a==2 && c<q){
			economy[c]=1;
			cout<<"Sir/Madam your seat has been reserved. Seat number is Economy class - 0"<<c+1<<endl;
			c++;
		}
		else if(a==2 && b<p){
			cout<<"Second class booked would you to place on first class?(Yes=1, No=0)"<<endl;
			cin>>e;
			if(e==0)
				a=0;
			else
				cout<<"-----------------------------Select option 1--------------------------------------"<<endl;
		}
		else if(a==2 && b>=p){
			cout<<"All seats booked...Sorry!"<<endl;
			a=0;
		}
	}
	while(a!=0);
	
	cout<<endl;
	cout<<"Have a nice day :) "<<endl;
	
	
	
	
    return 0; 
} 








