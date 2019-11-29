#include<iostream>
#include<string>
using namespace std;

class heartrate{
	private:
	string firstname;
	string lastname;
	int day,month,year;
	int Age;
	int maxh;
	float fifty,eighty;
	public:
	heartrate(string fname,string lname,int d,int m,int y){//constructer
	firstname=fname;
	lastname=lname;
	day=d;
	month=m;
	year=y;	

	
	
	}
	getfirstname(){
		cout<<"Your first name is:"<<firstname<<"\n";
	}
	getlastname(){
		cout<<"Your last name is:"<<lastname<<"\n";
	}
	getDOB(){
		cout<<"Your DOB is:"<<day<<"\\"<<month<<"\\"<<year<<"\n";
	}
	setfirstname(string a){
		firstname=a;
	}
	setlastname(string a){
		lastname=a;
	}
	setDOB(int d,int m,int y){	
	    day=d;
	    month=m;
	    year=y;
	}
	age(){
		Age = 2019-year;
		cout<<"Age in years ="<<2019-year<<"\n";
	}
	maxheartrate(){
		maxh=220-Age;
		cout<<"Maximum heart rate is"<<maxh<<"\n";
	}
	targetheartrate(){
		fifty = maxh*0.5;
		eighty = maxh*0.8;
		cout<<"target heart rate is 50 to 80% \n"<<fifty<<"to"<<eighty<<"\n";
	}
	print(){
	getfirstname();
	getlastname();
	age();
	maxheartrate();
	targetheartrate();
	}
};



int main(){
	
	heartrate hr("Jazil","Nauman",14,8,2001);
	hr.print();
	cout<<"\n";
	hr.setfirstname("Jazil");
	hr.getfirstname();
}
