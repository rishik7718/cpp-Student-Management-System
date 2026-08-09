#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
string arr1[100],arr2[100],arr3[100];
double arr4[100];
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
void search()
{
	string id;
	int i;
	if(total==0)
	{
		cout<<"No Students Added Yet !! "<<endl<<endl;
	}
	else
	{
	cout<<"Enter The Student ID : ";
	cin>>id;
	for(i=0;i<total;i++)
	{
		if(id==arr2[i])
		{
			cout<<"-------Student Found Succesfully -------"<<endl<<endl;
		cout<<"Student "<<i+1<<" :"<<endl;
		cout<<"Name : "<<arr1[i]<<endl;
		cout<<"ID : "<<arr2[i]<<endl;
		cout<<"Course : "<<arr3[i]<<endl;
		cout<<"Percentage : "<<arr4[i]<<" %"<<endl<<endl;
		break;
		}
	}
	if(i==total)
	{
		cout<<"Student Not Found !! "<<endl<<endl;
	}
	}
}
void update()
{
	string id;
	int i,update;
	if(total==0)
	{
		cout<<"No Students Added Yet !! "<<endl<<endl;
	}
	else
	{
		cout<<"Enter The Student ID : ";
	cin>>id;
	for(i=0;i<total;i++)
	{
		if(id==arr2[i])
		{
			cout<<"-------Student Found Succesfully -------"<<endl<<endl;
		cout<<"Student "<<i+1<<" :"<<endl;
		cout<<"Name : "<<arr1[i]<<endl;
		cout<<"ID : "<<arr2[i]<<endl;
		cout<<"Course : "<<arr3[i]<<endl;
		cout<<"Percentage : "<<arr4[i]<<" %"<<endl<<endl;
		
	
     do{
     string newName,newCourse;
     double newPercentage;
      cout<<"What Do You Want To Update ? "<<endl;
      cout<<"1 . Name "<<endl;
      cout<<"2 . Course "<<endl;
      cout<<"3 . Percentage "<<endl;
      cout<<"4 . Cancel "<<endl;
      cout<<"Enter Your Option : ";
      cin>>update;
      system("cls");
      switch(update)
      {
	  case 1 :
	  	
      	cout<<"Enter New Name : ";
      	cin>>newName;
      	arr1[i]=newName;
      	cout<<"Updated Succesfullyy !! "<<endl<<endl;
      	break;
      case 2 :
	    cout<<"Enter New Course : ";
		cin>>newCourse;
		arr3[i]=newCourse;
		cout<<"Updated Succesfullyy !! "<<endl<<endl;
		break;
	  case 3 :
	     cout<<"Enter New Percentage : ";
		 cin>>newPercentage;
		 arr4[i]=newPercentage;
		 cout<<"Updated Succesfullyy !! "<<endl<<endl;
		 break;
	  default:
    cout<<"Invalid Option !!"<<endl;
    break;	  	
	  }
	  } 
	  while(update!=4);
    }
  }
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
		cout<<"3. Search Student "<<endl;
		cout<<"4 . Update Student "<<endl;
		cout<<"5 . Exit "<<endl;
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
			    search();
				break;
		    case 4 : 
			    update();
				break;	
			case 5 :
				cout<<"Thank You !!"<<endl;
				exit(0);
				break;
			default :
			    cout<<"Invalid Option !!"<<endl<<endl;	
					
		}
	}
}