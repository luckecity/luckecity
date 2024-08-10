#include<iostream>
#include<string>
#include<fstream>
#include<cstring>

using namespace std;

//PROTOTYPING THE COURESE FUNCTION
int StudentLogin(); //this function check the password in file against what the student entered
int Admin(); // this allow admin to login and create account for student
int courses(); // this display all the courses offered in school
void StudentAcc();
// DECLARING A GLOBAL VARIABLE
string surname, name;

int main(){
	
	
	//display the main menu for user to login based on privelledge
	
	int MainMenu; 
	
	do
	{
		cout<<"Login As"<<endl;
		cout<<"1 Administrator"<<endl;
		cout<<"2 Student"<<endl;
		cout<<"0 Exit"<<endl;
		cin>>MainMenu;
		
		if(MainMenu == 1)
		{
			Admin();
		}else if(MainMenu == 2)
		{
			 StudentLogin();
		}			
		
		
	}while(MainMenu <0 || MainMenu > 3);
	//validating the user input using a do-while loop


	
}

// ASKING FOR PASSWORD AFTER CREATING ACCOUNT WITHOUT TERMINATING THE PROGRAM
		

// the admin section
int Admin()
{
	
	char AdminPassword[20], StoredPassword[20];
	char AdminUserName[20], StoredName[20];
	fstream AdminOBJ;
	AdminOBJ.open("Admin.txt", ios::in);
	
	//check if the file exist and is open
	if(!AdminOBJ){
		cout<<"error with file opening"<<endl;
		return -1;
	}
	//prompt the admin for password	
	cout<<"Enter UserName "<<endl;
	cin>>AdminUserName;
	
	//compare password wiith stored passwiord
	while(strcmp(AdminUserName,StoredName))
	{
		AdminOBJ>>StoredName;
		
		//check if the password exist
		if(AdminOBJ.eof()){
			cout<<"Wrong UserName "<<endl;
			return -1;
		}
	}
	
	//prompt the admin for password	
	cout<<"Enter Password "<<endl;
	cin>>AdminPassword;
	
	AdminOBJ>>StoredPassword;
	
	//compare password wiith stored passwiord
	while(strcmp(AdminPassword,StoredPassword)){
		
	cout<<"Wrong password. "<<endl;
    cout<<"Try again: ";
    cin>>AdminPassword;
	}	
		StudentAcc();
		
		AdminOBJ.close();
	
}
// for the student to login
int StudentLogin()
{
	char password[20];
	char FilePassword[20];
	char UserName[20];
	char FileUsername[20];
	
	//open and check if the file is already open
	fstream FileOBJ;
	FileOBJ.open("Student Database.txt", ios::in);
	if(!FileOBJ)
	{
		cout<<"error with file"<<endl;
		return 1;
	}
	cout<< "Enter Username ";
	cin>>UserName;
	
	//Get The password from file and compare
	while(strcmp(UserName, FileUsername))
	{
		FileOBJ>>FileUsername;
		if(FileOBJ.eof()){
			cout<<"Username does not exit"<<endl;
			return -1;			
		}
		
	}
	
	FileOBJ>>FilePassword;
	cout<<"Enter Password ";
	cin>>password;
	while(strcmp(FilePassword,password))
	{
		cout<<"Wrong, Re-Enter Password ";
		cin>>password;	
	}
	
	courses();
	FileOBJ.close();
}

//to be used by admin to create student account
void StudentAcc()
{
	
	// DECLARING VARIABLE TO HOLD THE USER CHOICE WHEN THE PROGRAM IS RUNING 
	// PASSWORD1 TO HOLD THE FIRST PASSWORD CREATED BY THE STUDENT
	// PASSWORD1 TO HOLD THE FIRST PASSWORD CREATED BY THE STUDENT
	int choice, password1, password2;
	string username;
	
	do
	{
		
		cout<<endl;
	cout<<"\t\t\t\t============================================"<<endl;
	cout<<"\t\t\t\t=== WELCOME TO GLOBAL UNIVERSITY COLLEGE ==="<<endl;
	cout<<"\t\t\t\t============================================"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t Press 1 to create account"<<endl;
	
	cout<<endl;
	
	cout<<"\t\t\t\t Press 0 to quit"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t ";
	cin>>choice;
	
	}while( choice >2 || choice <0);

// 
	if(choice == 1){
			
	cout<<"\t\t\t\tEnter username:"<<endl;
	cout<<"\t\t\t\t";
	cin>>username;
	
	
	cout<<"\t\t\t\tCreate password: "<<endl;
	cout<<"\t\t\t\t";
	cin>>password1;
	
	cout<<"\t\t\t\tRe-enter the password: "<<endl;
	cout<<"\t\t\t\t";
	cin>>password2;
	
	
	while(password2 != password1)
	{
		cout<<"\t\t::::password did not match::::"<<endl;
		cout<<"\t\t\t\tre-enter password: "<<endl;
		cout<<"\t\t\t\t";
		cin>>password2;
	}
		
		if(password2 == password1)
		{		
		
		//save the information on a file
		fstream StudentFile;
		StudentFile.open("Student database.txt", ios::app);
		StudentFile<<username<<" ";
		StudentFile<<password2<<endl;
		
		for(int i=0; i<30; i++)
		{
			StudentFile<<"=";
		}
		
		StudentFile<<endl;
		StudentFile.close();
		cout<<"\t\t\t\t account created successfully"<<endl;
		cout<<endl;		
		}
}
}
int courses(){

//DECLARING A CONSTANT VARIABLE TO HOLD THE TOTAL AMOUNT OF EACH
//COURSES OFFERED AT GLOBAL UNIVERSITY

	int course_number;
	
	string paid_instalment;
	
	double const M_M(7400), PSM(7400), IT(7400), HS(7400), LSCTM(7400), PM(7400);
	
	double const HR(7400), BM(7400), HOM(7400), SMSC(7400);
	
	double amount_paid;
	
	double course_balance(0);
	
	int receipt;
	char New_record;
	
	ofstream Studentfile;
	Studentfile.open("student file.txt", ios::app);
	do{ 
	cout<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\tWELCOME TO GLOBAL UNIVERSITY COLLECGE(GUC) COURSE LIST"<<endl;
	cout<<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<endl;
	
	cout<<"\t\t\t\tCHOOSE FROM THIS LIST'S"<<endl;
	cout<<"\t\t\t\tTO SEE YOUR BALANCE"<<endl;
	cout<<endl;
		cout<<"\t\t\t\t1 Marketing Management" <<endl;
		
		cout<<"\t\t\t\t2 Purchase and Supply Management"<<endl;
		
		cout<<"\t\t\t\t3 Information Technology" <<endl;
		
		cout<<"\t\t\t\t4 Health and Safety"<<endl;
		
		cout<<"\t\t\t\t5 Supply Chain & Transport Management" <<endl;
		
		cout<<"\t\t\t\t6 Project Management"<<endl;
		
		cout<<"\t\t\t\t7 Human Resource"<<endl;
		
		cout<<"\t\t\t\t8 Business Management/Administration"<<endl;
		
		cout<<"\t\t\t\t9 Hotel Operation And Management"<<endl;
		
		cout<<"\t\t\t\t10 Stores Management & Stock Control"<<endl;
		cout<<endl;
		cout<<"\t\t\t\tPress 0 to quit"<<endl;
		cout<<"\t\t\t\t";		
		cin>>course_number;
	
	if(course_number==1){
	
			cout<<endl;
			cout<<"\t\t\t\tCourse name: Marketing management"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tDid you pay any Instalment?"<<endl;
			cout<<"\t\t\tPress 1 for YES OR 2 for NO"<<endl;
			cout<<"\t\t\t";
			cin>>paid_instalment;
			
			if(paid_instalment == "1"){
				cout<<endl;
				cout<<"\t\t\t\tEnter the amount paid"<<endl;
				cout<<"\t\t\t\t";
				cin>>amount_paid;
				
				cout<<endl;
				
				cout<<"\t\t\t\tEnter the receipt number"<<endl;
				cout<<"\t\t\t\t";
				cin>>receipt;
				
				course_balance =M_M-amount_paid;
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<course_balance<<endl;
			}
			else if(paid_instalment =="2"){
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<(M_M-course_balance)<<endl;
				
			}
		}
		
		else if(course_number ==2){
			
			cout<<"\t\t\t\tCOURSE NAME: purchase and supply management"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tDid you pay any Instalment?"<<endl;
			cout<<"\t\t\tPress 1 for YES OR 2 for NO"<<endl;
			cout<<"\t\t\t\t";
			cin>>paid_instalment;
			
			if(paid_instalment == "1"){
				
				cout<<"\t\t\t\tEnter the amount paid"<<endl;
				cout<<"\t\t\t\t";
				cin>>amount_paid;
				
				cout<<"\t\t\t\tEnter the receipt Number"<<endl;
				cout<<"\t\t\t\t";
				cin>>receipt;
				
				course_balance =PSM-amount_paid;
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<course_balance<<endl;
			}
			
			else if(paid_instalment =="2"){
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<PSM-course_balance<<endl;
				
			}
			
		}else if(course_number ==3){
			
			cout<<"\t\t\t\tCOURSE NAME: information Technology"<<endl;
			cout<<endl;
				
			cout<<"\t\t\tDid you pay any Instalment?"<<endl;
			cout<<"\t\t\tpress 1 for YES OR 2 for NO"<<endl;
			cout<<"\t\t\t\t";
			cin>>paid_instalment;
			
			if(paid_instalment == "1"){
				
				cout<<"\t\t\tEnter the amount paid"<<endl;
				cout<<"\t\t\t\t";
				cin>>amount_paid;
				cout<<"\t\t\tEnter the receipt Number"<<endl;
				cout<<"\t\t\t\t";
				cin>>receipt;
					
				course_balance =IT-amount_paid;
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<course_balance<<endl;
			}
			
			else if(paid_instalment =="2"){
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<IT-course_balance<<endl;
				
			}
			
		}else if(course_number ==4){
			
			cout<<"\t\t\t\tCOURSE NAME: Health and safety"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tDid you pay any Instalment"<<endl;
			cout<<"\t\t\tpress 1 for YES OR 2 for NO"<<endl;
			cout<<"\t\t\t\t";
			cin>>paid_instalment;
			
			if(paid_instalment == "1"){
				cout<<endl;
				
				cout<<"\t\t\tEnter the amount paid"<<endl;
				cout<<"\t\t\t\t";
				cin>>amount_paid;
				
				cout<<"Enter the receipt Number"<<endl;
				cout<<"\t\t\t\t";
				cin>>receipt;
				
				course_balance =HS-amount_paid;
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<course_balance<<endl;
			}
			
			else if(paid_instalment =="2"){
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<HS-course_balance<<endl;
				
			}
			
		}else if(course_number ==5){
			
			cout<<"\t\t\t\tCOURSE NAME : logistices, Supply Chain & Transport management"<<endl;
			
			cout<<"\t\t\tDid you pay any Instalment"<<endl;
			cout<<"\t\t\t\tPress 1 for YES OR 2 for NO"<<endl;
			cout<<"\t\t\t\t";
			cin>>paid_instalment;
			
			if(paid_instalment == "1"){
				
				cout<<"\t\t\tEnter the amount paid"<<endl;
				cout<<"\t\t\t\t";
				cin>>amount_paid;
				
				cout<<"\t\t\tEnter the receipt Number"<<endl;
				cout<<"\t\t\t\t";
				cin>>receipt;
				
				course_balance =LSCTM-amount_paid;
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<course_balance<<endl;
			}
			
			else if(paid_instalment =="2"){
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<LSCTM-course_balance<<endl;
				
			}
			
		}else if(course_number ==6){
			
			cout<<"\t\t\t\tCOURSE NAME : Project management"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tDid you pay any Instalment"<<endl;
			cout<<"\t\t\tpress 1 for YES OR 2 for NO"<<endl;
			cout<<"\t\t\t\t";
			cin>>paid_instalment;
			
			if(paid_instalment == "1"){
				
				cout<<endl;
				
				cout<<"\t\t\tEnter the amount paid"<<endl;
				cout<<"\t\t\t\t";
				cin>>amount_paid;
				
				cout<<"\t\t\tEnter the receipt NUmber"<<endl;
				cout<<"\t\t\t\t";
				cin>>receipt;
				
				course_balance =PM-amount_paid;
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<course_balance<<endl;
			}
			
			else if(paid_instalment =="2"){
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<PM-course_balance<<endl;
				
			}
			
		}else if(course_number ==7){
			
			cout<<"\t\t\t\tCOURSE NAME : HUMAN RESOURSES"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tDid you pay any Instalment"<<endl;
			cout<<"\t\t\tpress 1 for YES OR 2 for NO"<<endl;
			cout<<"\t\t\t\t";
			cin>>paid_instalment;
			
			if(paid_instalment == "1"){
				cout<<endl;
				
				cout<<"\t\t\tEnter the amount paid"<<endl;
				cout<<"\t\t\t\t";
				cin>>amount_paid;
				
				cout<<"\t\t\tEnter the receipt Number"<<endl;
				cout<<"\t\t\t\t";
				cin>>receipt;
				
				course_balance =HR-amount_paid;
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<course_balance<<endl;
			}
			
			else if(paid_instalment =="2"){
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<HR-course_balance<<endl;
				
			}
		}else if(course_number ==8){
			
			cout<<"\t\t\t\tCOURSE NAME : Business Management/Administration"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tDid you pay any Instalment"<<endl;
			cout<<"\t\t\tpress 1 for YES OR 2 for NO"<<endl;
			cout<<"\t\t\t\t";
			cin>>paid_instalment;
			
			if(paid_instalment == "1"){
				
				cout<<"\t\t\tEnter the amount paid"<<endl;
				cout<<"\t\t\t\t";
				cin>>amount_paid;
				
				cout<<"\t\t\tEnter the receipt Number"<<endl;
				cout<<"\t\t\t\t";
				cin>>receipt;
				
				course_balance =BM-amount_paid;
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<course_balance<<endl;
			}
			
			else if(paid_instalment =="2"){
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<BM-course_balance<<endl;
				
			}
			
		}else if(course_number ==9){
			
			cout<<"\t\t\t\tCOURSE NAME : Hotel Operation And Management"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tDid you pay any Instalment"<<endl;
			cout<<"\t\t\tpress 1 for YES OR 2 for NO"<<endl;
			cout<<endl;
			cin>>paid_instalment;
			
			if(paid_instalment == "1"){
				
				cout<<"\t\t\tEnter the amount paid"<<endl;
				cout<<"\t\t\t\t";
				cin>>amount_paid;
				
				cout<<"\t\t\tEnter the receipt Number"<<endl;
				cout<<"\t\t\t\t";
				cin>>receipt;
				
				course_balance =HOM-amount_paid;
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<course_balance<<endl;
			}
			
			else if(paid_instalment =="2"){
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<HOM-course_balance<<endl;
				
			}
			
		}else if(course_number ==10){
			
			cout<<"\t\t\t\tCOURSE NAME : Stores Management & Stock Control"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tDid you pay any Instalment"<<endl;
			cout<<"\t\t\tpress 1 for YES OR 2 for NO"<<endl;
			cout<<"\t\t\t\t";
			cin>>paid_instalment;
			
			if(paid_instalment == "1"){
				
				cout<<"\t\t\tEnter the amount paid"<<endl;
				cout<<"\t\t\t\t";
				cin>>amount_paid;
				
				cout<<"\t\t\tEnter the receipt number"<<endl;
				cout<<"\t\t\t\t";
				cin>>receipt;
				
				course_balance =SMSC-amount_paid;
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<course_balance<<endl;
			}
			
			else if(paid_instalment =="2"){
				
				cout<<"\t\t\t\tDear Student"<<endl;
				cout<<"\t\t\t\tyour balance is E"<<SMSC-course_balance<<endl;
				
			}
		}
		
		//WRITING TO THE STUDENT FILE
		Studentfile<<"NAMES "<<::surname<<" "<<::name<<" "<<"amount paid "<<amount_paid<<" "<<"receipt NO "<<receipt<<endl;
		
		Studentfile.close();
		
		cout<<endl;
		
		//DISPLAYING AN OPTION TO THE STUDENT
		//IF THE STUDENT WANT TO CHECK ANOTHER BALANCE
		cout<<"\t\t\t\tPress Y to check another student balance\n";
		cout<<"\t\t\t\tN to quit"<<endl;
		cout<<"\t\t\t\t";
		cin>>New_record;
		
}while(New_record=='Y' ||New_record=='y');
		
		return 0;
}
