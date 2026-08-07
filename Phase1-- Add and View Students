#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
string arr1[100],arr2[100],arr3[100],arr4[100];
int total=0;
void enter()
{
	int Option;
	cout<<"How Many Students You Want To Enter : ";
	cin>>Option;
	system("cls");
	if(Option>100-total)
	{
		cout<<"Limit Exeeded !!"<<endl<<endl;
	}
	else
	{
	total=total+Option;
	for(int i=0;i<Option;i++)
	{
		cout<<"Enter The Data Of The Student :"<<i+1<<endl<<endl;
		cout<<"Enter Name : ";
		cin>>arr1[total- Option+i];
		cout<<"Enter ID : ";
		cin>>arr2[total-Option+i];
		cout<<"Enter Course : ";
		cin>>arr3[total- Option+i];
		cout<<"Enter Percentage : ";
		cin>>arr4[total- Option+i];
		cout<<"Added Successfully!!"<<endl<<endl;
	}
}
}
void show()
{
	if(total==0)
	{
		cout<<"No Students Added Yet !! "<<endl<<endl;
	}
	else
	{
	for(int i=0;i<total;i++)
	{
		cout<<"Student "<<i+1<<" :"<<endl;
		cout<<"Name : "<<arr1[i]<<endl;
		cout<<"ID : "<<arr2[i]<<endl;
		cout<<"Course : "<<arr3[i]<<endl;
		cout<<"Percentage : "<<arr4[i]<<" %"<<endl<<endl;
	}
	cout<<"-----------------------"<<endl;
	cout<<"Total Students : "<<total<<endl;
	cout<<"-----------------------"<<endl<<endl;
  }   
}
int main()
{
	int value;
	while(true)
	{
		cout<<"**********Student Management System**********"<<endl;
		cout<<"1 . Add Student "<<endl;
		cout<<"2 . View All Students  "<<endl;
		cout<<"3 . Exit "<<endl;
		cout<<"Enter Your Option : ";
		cin>>value;
		system("cls");
		
		switch(value)
		{
			case 1 :
				enter();
				break;
			case 2 :
			    show();
				break;
			case 3 :
				cout<<"Thank You !!"<<endl;
				exit(0);
				break;
			default :
			    cout<<"Invalid Option !!"<<endl<<endl;	
					
		}
	}
}
