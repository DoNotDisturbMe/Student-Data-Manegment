#include<iostream>
using namespace std;
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total=0;
void enter(){
	int choice;
	cout<<"How many student do you enter"<<endl;
	cin>>choice;
	if(total==0)
	{
	total = total+choice;	
	for(int i=0; i<choice; i++){
		cout<<"Enter data of student: "<<i+1<<endl<<endl;
		cout<<"Enter Name: ";
		cin>>arr1[i];
		cout<<"Enter Roll.No: ";
		cin>>arr2[i];
		cout<<"Enter Course: ";
		cin>>arr3[i];
		cout<<"Enter Class: ";
		cin>>arr4[i];
		cout<<"Enter Contact: ";
		cin>>arr5[i];
	}
}
else{
	for(int i=total; i<total+choice; i++){
		cout<<"Enter data of student: "<<i+1<<endl<<endl;
		cout<<"Enter Name: ";
		cin>>arr1[i];
		cout<<"Enter Roll.No: ";
		cin>>arr2[i];
		cout<<"Enter Course: ";
		cin>>arr3[i];
		cout<<"Enter Class: ";
		cin>>arr4[i];
		cout<<"Enter Contact: "<<endl;
		cin>>arr5[i];
	}
	total = total+choice;
	
}
}
void show(){
	for(int i=0; i<total; i++){
		cout<<"Data of Student: "<<i+1<<endl<<endl;
		cout<<"Name: "<<arr1[i]<<endl;
		cout<<"Roll.No: "<<arr2[i]<<endl;
		cout<<"Course: "<<arr3[i]<<endl;
		cout<<"Class: "<<arr4[i]<<endl;
		cout<<"Contact: "<<arr5[i]<<endl<<endl;
		
	}
	
}
void search(){
	string rollno;
	cout<<"Enter roll no of student which you want to search: ";
	cin>>rollno;
	for(int i=0; i<total; i++){
		if(rollno==arr2[i]){
		cout<<"Data of Student: "<<i+1<<endl<<endl;
		cout<<"Name: "<<arr1[i]<<endl;
		cout<<"Roll.No: "<<arr2[i]<<endl;
		cout<<"Course: "<<arr3[i]<<endl;
		cout<<"Class: "<<arr4[i]<<endl;
		cout<<"Contact: "<<arr5[i]<<endl<<endl;
		}
	}
}
void update(){
		string rollno;
	cout<<"Enter roll no of student which you want to update: ";
	cin>>rollno;
	for(int i=0; i<total; i++){
		if(rollno==arr2[i]){
			cout<<"Previous Data"<<endl;
		cout<<"Data of Student: "<<i+1<<endl<<endl;
		cout<<"Name: "<<arr1[i]<<endl;
		cout<<"Roll.No: "<<arr2[i]<<endl;
		cout<<"Course: "<<arr3[i]<<endl;
		cout<<"Class: "<<arr4[i]<<endl;
		cout<<"Contact: "<<arr5[i]<<endl<<endl;
		
		cout<<"\n Enter New Data"<<endl;
		cout<<"Enter Name: ";
		cin>>arr1[i];
		cout<<"Enter Roll.No: ";
		cin>>arr2[i];
		cout<<"Enter Course: ";
		cin>>arr3[i];
		cout<<"Enter Class: ";
		cin>>arr4[i];
		cout<<"Enter Contact: ";
		cin>>arr5[i];
		
		}
	}
}
void delete_record(){
	int a;
	cout<<"Press 1 to delete full record:"<<endl;
	cout<<"Press 2 to delete specific record:"<<endl;
	cin>>a;
	if(a==1){
		total=0;
		cout<<"All Record is deleted"<<endl;
	}
	else(a==2);
	{
		string rollno1;
		cout<<"Enter rollno which you want to delete:"<<endl;
		cin>>rollno1;
		for(int i=0; i<total; i++){
			if(rollno1==arr2[i]){
				for( int j=i; j<total; j++){
					arr1[j]==arr1[j+1];
					arr2[j]==arr2[j+1];
					arr3[j]==arr3[j+1];
					arr4[j]==arr4[j+1];
					arr5[j]==arr5[j+1];
				}
				total--;
				cout<<"Your reqired records is delete..!!"<<endl;
			}
		}
	}
}
void exit(){
	
}

main()
{
	int val;

	while(true)
	{
		cout<<"Press 1 to enter data"<<endl;
		cout<<"Press 2 to show data"<<endl;
		cout<<"Press 3 to search data"<<endl;
		cout<<"Press 4 to update data"<<endl;
		cout<<"Press 5 to delete data"<<endl;
		cout<<"Press 6 to exit"<<endl;
		cin>>val;
		switch(val)
		{
			case 1:
				enter();
				break;
			case 2: 
				show();
				break;
			case 3: 
				search();
				break;
			case 4:
				update();
				break;
			case 5:
				delete_record();
				break;
			case 6:
				exit();
				break;			
			
			
		}
	}
	
}
