#include <iostream>
using namespace std;
    int main(){
	
    int age;
	cout<<"\nPlease enter your age in numbers. "<<endl;
    cin>>age;

if (age<1){
		cout<<"Invalid number! kindly enter a proper number"<<endl;
	}


if (age==1&&age<1||age>0){

	cout<<"You are an infant. "<<endl;
		}
		
else if (age>1 && age<13){
		cout<<"You are child. "<<endl;
		}
		
else if (age==13&&age<20){
		cout<<"You are a teenager. "<<endl;
	}	
	
else if (age==20){
		cout<<"You are an adult. "<<endl;
	}
		
else
	cout<<"You are above 20."<<endl;

	
	return 0;
}