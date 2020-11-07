#include<iostream>
#include<string.h>
#include<cctype>
#include<windows.h>
#include<fstream>
#include<conio.h>
void options1(int );
using namespace std;
class employee
{
	int a,b,c,d,e,f,m,v;

int countwronge;
string emp;
long mobnum;
long min1;
long max1;
public:
employee()
{string *header=new string[m*v];
string *cleaner=new string[a*v];
string *cook=new string[b*v];
string *plumber=new string[c*v];
string *elect=new string[d*v];
string *driver=new string[e*v];
string *gardener=new string[f*v];
min1=140000000;
	max1=189999999;
	}	
	
void emplogin()
{

cout<<"UserName:";
cin>>emp;
cout<<"Please Enter your mobile number: "<<endl;

	cout<<"03";
cin>>mobnum;
if(mobnum>min1&&mobnum<max1)
{
	cout<<"Valid mobile number"<<endl;
	system("cls");
}
else{
	cout<<"Please enter a valid mobile number."<<endl;
		cout<<"03";
cin>>mobnum;
}
}
void empmemnu()
{
}
};
class user1
{
int countwrongu;
fstream userfile;
string fname,lname;
string hnum,block,area,city;
long mobile_no;
long min;
long max;
public:
	user1(){
		userfile.open("USER.txt",ios::app);
		min=140000000;
        max=189999999;
	}
int choiceservice;
void userlogin()
{ system("cls");
cout<<"Welcome to User login:"<<endl;
cout<<"Firstname: ";
cin>>fname;
userfile<<endl<<fname<<"  ";
cout<<endl<<"Last name: ";
cin>>lname;
userfile<<lname;
cout<<"Please Enter your mobile number: "<<endl;

	cout<<"03";
cin>>mobile_no;
userfile<<"   "<<"03"<<mobile_no;
if(mobile_no>min&&mobile_no<max)
{
	cout<<"Valid mobile number"<<endl;
	system("cls");
}
else{
	cout<<"Please enter a valid mobile number."<<endl;
		cout<<"03";
cin>>mobile_no;
userfile<<"   "<<"03"<<mobile_no;
}
cout<<"Enter your house number: "<<endl;

cin>>hnum;
cout<<endl<<"Enter your block: "<<endl;
cin>>block;
userfile<<"   "<<block;
cout<<endl<<"Enter your area: "<<endl;
cin>>area;
userfile<<"   "<<area;
system("cls");
cout<<endl<<"Enter your city: "<<city;
cin>>city;
userfile<<"   "<<city<<endl;
servicedisplay();
}
int retchoice()
{
	return choiceservice;
}
void servicedisplay()
{
cout<<"Select your required Service: "<<endl;
cout<<"1.Cleaning [Rs150/room]"<<endl;
cout<<"2.Cooking [Rs100/dish]"<<endl;
cout<<"3.Plumber [Rs70/fix]"<<endl;
cout<<"4.Electrician [Rs120/fix]"<<endl;
cout<<"5.Driver [Rs100/km]"<<endl;
cout<<"6.Gardening [Rs50/areacovered]"<<endl;
}
};
class manager:public user1,public employee
{
string **workers;
string workeravail;
int countwrongm,k,l;
string m1;
fstream empfile;
int mchoice;
int z;

public:
int a,b,c,d,e,f,m,v;


int choiceservice;
manager()
{
empfile.open("Employees.txt",ios::in);
// workers=NULL;
countwrongm=0;
string *header=new string[m*v];
string *cleaner=new string[a*v];
string *cook=new string[b*v];
string *plumber=new string[c*v];
string *elect=new string[d*v];
string *driver=new string[e*v];
string *gardener=new string[f*v];
m1='\0';
k=6,l=5;
v=3;
int i,j;
workers=new string*[k];
for(i=0;i<k;i++)
{
workers[i]=new string[l];
}
}
void chooseservice(){
cinagain:
cout<<"Option:  ";
cin>>choiceservice;
switch(choiceservice)
{
case 1:
cout<<"Please wait we are looking for an available cleaner for you..."<<endl;
Sleep(2000);
break;
case 2:
cout<<"Please wait we are looking for an available cook for you... "<<endl;
Sleep(2000);
break;
case 3:
cout<<"Please wait we are looking for a an available plumber for you..."<<endl;
Sleep(2000);
break;
case 4:
cout<<"Please wait we are looking for an available Electrician for you..."<<endl;
Sleep(2000);
break;
case 5:
cout<<"Please wait we are looking for an available driver for you..."<<endl;
Sleep(2000);
break;
case 6:
cout<<"Please wait we are looking for an available gardener for you..."<<endl;
Sleep(2000);
break;
default:
cout<<"Please choose the right option...Thankyou"<<endl;
break;
goto cinagain;
}
}
int retcs()
{
	return choiceservice;
}
void manlogin()
{cout<<"UserName:";

cin>>m1;
if(m1[0]=='z'&&m1[1]=='a'&&m1[2]=='i'&&m1[3]=='n')
{
	cout<<"Valid username"<<endl;
}
else if(m1[0]=='f'&&m1[1]=='a'&&m1[2]=='r'&&m1[3]=='a'&&m1[4]=='h')
{
	cout<<"Valid username"<<endl;
}
else {
	cout<<"Username Invalid"<<endl;
cin>>m1;
}
char x='*';
string pass;
L3: cout<<"\nPassword:";
int i=0;
while(pass[i-1]!=13)
{
pass[i]=getch();
putch(x);
i++;
}
if(pass[0]=='m'&&pass[1]=='a'&&pass[2]=='n'&&pass[3]=='a'&&pass[4]=='g'&&pass[5]=='e'&&pass[6]=='r')
{

cout<<"\nLogin Successful"<<endl;
cout<<"Please choose an option: "<<endl;
cout<<"1.View employee status"<<endl;
cout<<"2.View employee list "<<endl;
cin>>mchoice;
menuchoose();
}
else if(pass[0]=='t'&&pass[1]=='e'&&pass[2]=='h'&&pass[3]=='r'&&pass[4]=='e'&&pass[5]=='e'&&pass[6]=='m')
{cout<<"\nLogin Successful"<<endl;
cout<<"Please choose an option: "<<endl;
cout<<"1.View employee status"<<endl;
cout<<"2.View employee list"<<endl;
cin>>mchoice;
menuchoose();
}
else
{
cout<<"\nWrong Password"<<endl;
if(countwrongm>3)
{
cout<<"You have no attempts left please try again after resetting the password"<<endl;
exit(0);}
else
{
countwrongm++;
goto L3;}
}
}
//void addemployee(){
//cout<<"Which employee would you like to add?"<<endl;
//cout<<"1.Cleaner"<<endl;
//cout<<"2.Cooks"<<endl;
//cout<<"3.Plumbers"<<endl;
//cout<<"4.Electrician"<<endl;
//cout<<"5.Driver"<<endl;
//cout<<"6.Gardener"<<endl;
//int choose;
//
//}
void allocate(){
int i,j;
workers[0][0]="CLEANERS";
workers[1][0]="   COOKS";
workers[2][0]="PLUMBERS";
workers[3][0]="ELECTRICIANS";
workers[4][0]="   DRIVERS";
workers[5][0]="GARDENERS";
for(i=0;i < k; i++)
{
for(j=1;j < l;j++)
{
empfile>>workers[i][j];
}
}
//	for(i=0;i < k; i++)
//{
//for(j=0;j < l;j++)
//{
//cout<<workers[i][j]<<"       ";
//}
//cout<<endl;
//}
}



void empstatus(){
	int i,j;
		for(i=0;i < k; i++)
{
for(j=0;j < l;j++)
{
cout<<workers[i][j]<<"       ";
}
cout<<endl;
}
}
void showworker()
{
cout<<"You have been assigned "<<workeravail<<endl;
Sleep(2000);
cout<<"Your worker is on its way..Thankyou"<<endl;
}
void assign(){
allocate();	
int i,j;
if(choiceservice==1)
{
for(i=1;i<5;)

{if(workers[0][i]!="Busy")
{
workeravail=workers[0][i];
empfile<<"Busy";
showworker();
break;
}
else{i++;}}
}
else if(choiceservice==2)
{
for(i=1;i<5;)
{
if(workers[1][i]!="Busy")
{
workeravail=workers[1][i];
workers[1][i]="Busy";
showworker();
break;
}

else{i++;}}
}
else if(choiceservice==3)
{
for(i=1;i<5;)
{if(workers[2][i]!="Busy")
{
workeravail=workers[2][i];
workers[2][i]="Busy";
showworker();
break;
}
else{
i++;}}
}
else if(choiceservice==4)
{
for(i=1;i<5;)
{if(workers[3][i]!="Busy")
{
workeravail=workers[3][i];
workers[3][i]="Busy";
showworker();
break;

}

else{
i++;}
}}
else if(choiceservice==5)
{
for(i=1;i<5;)
{if(workers[4][i]!="Busy")
{
workeravail=workers[4][i];
workers[4][i]="Busy";
showworker();
break;
}

else{
i++;}
}}
else if(choiceservice==6)
{
for(i=1;i<5;)
{
if(workers[5][i]!="Busy")
{
workeravail=workers[5][i];
workers[5][i]="Busy";
showworker();
break;
}

else{i++;}}
}
else
{
cout<<"There are no employees available at the moment sorry for the inconvenience."<<endl<<endl;

}}
void menuchoose()
	{
		switch(mchoice)
		{
			case 1:
				allocate();
				case 2:
					empfile.open("Employee.txt",ios::in);
					while(empfile)
					{
						
					}
		}
//cout<<user1::choiceservice;//checkingifthechoiceiscorrect(part of debugging)
}








};
class billing:public manager
{int z;
float tc;//total cost
	public:
	billing(){
		tc=1;
	}
	void calculatetc()
{ cout<<"Payment for: "<<endl;
cout<<"1.Cleaning"<<endl;
cout<<"2.Cooking"<<endl;
cout<<"3.Plumber"<<endl;
cout<<"4.Electrician"<<endl;
cout<<"5.Driver"<<endl;
cout<<"6.Gardening"<<endl;
cout<<"Choice: "<<endl;
cin>>z;                                           
		switch(z)
	{
		case 1:
			int rooms;
			cout<<"How many rooms did you get cleaned?"<<endl;
			cin>>rooms;
			tc=150*rooms;
			cout<<"Please pay: Rs."<<tc;
			break;
			case 2:
				int dish;
				cout<<"How many dishes were prepared? "<<endl;
				cin>>dish;
				break;
				case 3:
					cout<<"How many equipments were fixed?"<<endl;
					int e;
					cin>>e;
					tc=70*e;
					cout<<"Please pay: Rs."<<tc;
					break;
					case 4:
						cout<<"How many equipments were fixed?"<<endl;
						int f;
						cin>>f;
						tc=120*f;
						cout<<"Please pay: Rs."<<tc;
						break;
						case 5:
							cout<<"How many km did you travel?"<<endl;
							float km;
							cin>>km;
							tc=km*100;
							cout<<"Please pay: Rs."<<tc;
							break;
							case 6:
								cout<<"How much area did the gardener work on?"<<endl;
								float area;
								tc=area*50;
								cout<<"Please pay: Rs."<<tc;
								break;
								default:
									tc=0;
									cout<<"Please pay Rs."<<tc<<endl;
									break;
	}
}
	
	//}
};
//creating objects of classes
user1 p1;
employee e1;
manager mn1;  
billing bill;
int main()
{//welcome screen/display
system("color 20");
cout<<"                  ********************************************"<<endl;
cout<<"                  *                                          *"<<endl;
cout<<"                  *           Welcome to Home.com            *"<<endl;
cout<<"                  *                                          *"<<endl;
cout<<"                  ********************************************"<<endl;
cout<<endl<<endl<<endl;
cout<<"                        ";
   Sleep(100);
   cout<<"<";
   Sleep(100);
   cout<<"<";
   Sleep(100);  
   cout<<"<";
   Sleep(100);
   Sleep(100);
   cout<<"<";
   Sleep(100);
   cout<<"<";
   Sleep(100);  
   cout<<"<";
   Sleep(100);
   cout<<"<";
   Sleep(100);
   cout<<"<";
   Sleep(100);  
   cout<<"<";
      Sleep(100);
cout<<"Please a moment";
 cout<<">";
   Sleep(100);
   cout<<">";
   Sleep(100);  
   cout<<">";
   Sleep(100);
   Sleep(100);
   cout<<">";
   Sleep(100);
   cout<<">";
   Sleep(100);  
   cout<<">";
   Sleep(100);
   cout<<">";
   Sleep(100);
   cout<<">";
   Sleep(100);  
   cout<<">";
    Sleep(500);
    system("cls");
    system("color 70");
    cout<<"Please select an option:"<<endl<<endl<<endl;
    cout<<"(1) Login as user"<<endl;
    cout<<"(2) Login as Employee"<<endl;
    cout<<"(3) Login as manager"<<endl;
    cout<<"(4) Exit "<<endl;
    int opt;
    cout<<"Choice: ";
    cin>>opt;
    options1(opt);
    
}


void options1(int o)
{
switch(o)
{
case 1:
{
p1.userlogin();
mn1.chooseservice();
mn1.assign();

bill.calculatetc( );

break;
}
case 2:
{

e1.emplogin();

break;
}
case 3:
{

mn1.manlogin();
//mn1.allocate();
//mn1.empstatus();

break;
}
case 4:
{
exit(0);
}
default:
{
cout<<"Please choose the correct option"<<endl;
break;
}
}

}
