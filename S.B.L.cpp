#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void Global(){
	
	cout<<endl;
	cout<<"\t\t\t============================================"<<endl;
	cout<<"\t\t\t=== WELCOME TO GLOBAL UNIVERSITY COLLEGE ==="<<endl;
	cout<<"\t\t\t============================================"<<endl;
	cout<<endl;
	
}


//creating a function for student registration

int Courses(){
	
	int course_number;
	
	cout<<endl;
		cout<<"\t1 Marketing Management" <<endl;
		
		cout<<"\t2 Purchase and Supply Management"<<endl;
		
		cout<<"\t3 Information Technology" <<endl;
		
		cout<<"\t4 Health and Safety"<<endl;
		
		cout<<"\t5 Supply Chain & Transport Management" <<endl;
		
		cout<<"\t6 Project Management"<<endl;
		
		cout<<"\t7 Human Resource"<<endl;
		
		cout<<"\t8 Business Management/Administration"<<endl;
		
		cout<<"\t9 Hotel Operation And Management"<<endl;
		
		cout<<"\t10 Stores Management & Stock Control"<<endl;
		cout<<endl;
		cout<<"\tPress 0 to quit"<<endl;
		cout<<"\t";		
		cin>>course_number;
		
		return course_number;
		
}
string Register(){
	
			//to hold names of students
			string surname, name;
			//to hold student course that is chosen from the listed courses
			int chose;
			//if to procced after the course is chossen
			int choice;
				
		cout<<"please enter your surname: ";
		cin>>surname;
	
		cout<<"enter your name: ";
		cin>>name;
		
		cout<<"Choose the course that your studying "<<endl;
		
		cout<<endl;
		
		chose=Courses();
	
		
	cout<<"\tyou choose course number "<<chose<<endl;
	
	cout<<"press y to proceed or N to choose another course #"<<endl;
	cin>>choice;
	
	if(choice==1){
			
				cout<<"thank you "<<endl;
	}else{
		
		Courses();
	}
	
}
int main(){
	
	Global();
	
	Register();
	
	
	return 0;
}



