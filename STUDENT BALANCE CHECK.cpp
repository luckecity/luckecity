#include<iostream>
#include<string>
#include<fstream>

using namespace std;

//PROTOTYPING THE COURESE FUNCTION

int courses();

// DECLARING A GLOBAL VARIABLE
string surname, name;

int main(){
	
	// DECLARING VARIABLE TO HOLD THE USER CHOICE WHEN THE PROGRAM IS RUNING 
	// PASSWORD1 TO HOLD THE FIRST PASSWORD CREATED BY THE STUDENT
	// PASSWORD1 TO HOLD THE FIRST PASSWORD CREATED BY THE STUDENT
	
		int choice, password1, password2;
		

	{
		cout<<endl;
	cout<<"\t\t\t\t============================================"<<endl;
	cout<<"\t\t\t\t=== WELCOME TO GLOBAL UNIVERSITY COLLEGE ==="<<endl;
	cout<<"\t\t\t\t============================================"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t Press 1 to create account"<<endl;
	
	cout<<endl;
	
	cout<<"\t\t\t\t Press 2 to login"<<endl;
	
	cout<<endl;
	cout<<"\t\t\t\t Press 0 to quit"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t ";
	cin>>choice;
}

	if(choice == 1){
			
	cout<<"\t\t\t\tPlease enter your surname:"<<endl;
	cout<<"\t\t\t\t";
	cin>>surname;
	
	cout<<"\t\t\t\tEnter your name: "<<endl;
	cout<<"\t\t\t\t";
	cin>>name;
	
	cout<<"\t\t\t\tCreate password: "<<endl;
	cout<<"\t\t\t\t";
	cin>>password1;
	
	cout<<"\t\t\t\tRe-enter the password: "<<endl;
	cout<<"\t\t\t\t";
	cin>>password2;
	
	
	while(password2 != password1){
		cout<<"\t\t::::password did not match::::"<<endl;
		cout<<"\t\t\t\tre-enter password: "<<endl;
		cout<<"\t\t\t\t";
		cin>>password2;
		}
		
		if(password2 == password1){
		
		cout<<endl;
		cout<<"\t\t\t\t\t ===CONGRATULATION===\n";
		cout<<endl;
		cout<<"\t\t\t\t account created successfully"<<endl;
		cout<<endl;
		
		cout<<"\t\t\t\tPress 2 to login:"<<endl;
		cout<<"\t\t\t\t";
		cin>>choice;
		
	while(choice<2 || choice>2){
		cout<<"\t\t\t\tplease press 2 to login:"<<endl;
		cout<<"\t\t\t\t";
		cin>>choice;
	}
}

// ASKING FOR PASSWORD AFTER CREATING ACCOUNT WITHOUT TERMINATING THE PROGRAM
	if(choice == 2){
			
			cout<<"\t\t\t\tEnter password:"<<endl;
			cout<<"\t\t\t\t";
			cin>>password2;
			
			while(password2 != password1){
				
				cout<<"\t\t\t\t***password did not match**"<<endl;
				cout<<"\t\t\t\tEnter password"<<endl;
				cout<<"\t\t\t\t";
				cin>>password2;
			}
			
		if(password2 == password1){
				
				// CALLING THE COURSES FUNCTION 
				
			cout<<courses();
			}
		}
		
	}
	while(choice != 0);
	
	return 0;
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
