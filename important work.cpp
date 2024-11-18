#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

int main(){
	
	//declaring variables to hold each students details 
	 
	string surname;		// to hold the surname of each student
	string name;		// to hold the name of each student
	string class_grade; // to hold the class of each student
	int grade, ID;		// to hold the grade and identity number of each student
	int another; // for adding another record
	
	do{
		cout<<"Enter the student Surname: ";
		cin>>surname;
		
		cout<<"Enter the student Name: ";
		cin>>name;
		
		cout<<"Enter the student grade: ";
		cin>>grade;
		
		// using a wile loop to valide the input from the teacher
		//making sure that the teacher enter an integer value from the range of 1 through 7
		
		while(grade<1 || grade>7){
			cout<<"\tinvalide grade\n";
			cout<<"enter the correct grade 1-7: ";
			cin>>grade;
		}
		cout<<"Enter the student class, example.. A, B, C, D: ";
		cin>>class_grade;
		
		cout<<"Enter the student Identity Number: ";
		cin>>ID;
		
		ofstream details;
		
		// creating a Students information file  
		//and writing data to the student information file
		
		details.open("students information.txt", ios::app);
		{
			details<<"NAMES "<<setw(29)<<surname<<" "<<name<<endl;
			details<<"GRADE "<<setw(25)<<grade<<class_grade<<endl;
			details<<"IDENTITY NUMBER "<<setw(17)<<ID<<endl;
			details<<endl;
			
			details.close();
		}
		
		int total_marks;		// declaring total marks variable to hold the total marks for all each subject
	
		float average;			 // an average to help in calculating if the student pass or fail
	
	int maths, english, social, science, siswati, economics, religious; 	// to hold the marks for each subject entered by the teacher
	
	
		cout<<"Enter mathematics score: ";
		cin>>maths;
		
		// using a while loop to validate input from the teacher, 
		//making sure that the teacher does not input an integer value less than o or greater the 100
		
	while(maths<0 || maths>100){
				cout<<"wrong input\n";
			cout<<"enter valid mathematics score: ";
			cin>>maths;
			}

		cout<<"Enter English Language score: ";
		cin>>english;
		
		// using a while loop to validate input from the teacher, 
		//making sure that the teacher does not input an integer value less than o or greater the 100
		
		while(english<0 || english>100){
				cout<<"wrong input\n";
			cout<<"enter valid English Language score: ";
			cin>>english;
			}
			
		cout<<"Enter Social studies score: ";
		cin>>social;
		
		// using a while loop to validate input from the teacher, 
		//making sure that the teacher does not input an integer value less than o or greater the 100
		
		while(social<0||social>100){
				cout<<"wrong input\n";
			cout<<"enter valid Social studies score: ";
			cin>>social;
			}
			
		
		cout<<"Enter Science score: ";
		cin>>science;
				
		// using a while loop to validate input from the teacher, 
		//making sure that the teacher does not input an integer value less than o or greater the 100
		
		while(science<0 ||science>100){
				cout<<"wrong input\n";
			cout<<"enter valid Science score: ";
			cin>>science;
			}
			
		cout<<"Enter Siswati score: ";
		cin>>siswati;
		
		// using a while loop to validate input from the teacher, 
		//making sure that the teacher does not input an integer value less than o or greater the 100
		
		while(siswati<0 ||siswati >100){
				cout<<"wrong input\n";
			cout<<"enter valid Siswati score: ";
			cin>>siswati;
			}
			
		cout<<"Enter Home Economics score: ";
		cin>>economics;
		
		// using a while loop to validate input from the teacher, 
		//making sure that the teacher does not input an integer value less than o or greater the 100
		
		while(economics<0 || economics>100){
				cout<<"wrong input\n";
			cout<<"enter valid Home Economics score: ";
			cin>>economics;
			}
			
		cout<<"Enter Religious Education score: ";
		cin>>religious;
		
		// using a while loop to validate input from the teacher, 
		//making sure that the teacher does not input an integer value less than o or greater the 100
		
		while(religious<0 || religious>100){
				cout<<"wrong input\n";
			cout<<"enter valid Religious Education score: ";
			cin>>religious;
			}
			
		total_marks=maths+science+social+english+religious+economics+siswati;
		average=total_marks/7;
		
		
		// displaying the student report to the screen
		
		cout<<endl;
		cout<<"\t\t\t\t=== REPORT ====="<<endl;
	{

	cout<<endl;
	
	cout<<"Names:\t\t\t\t"<<name<<endl;
	
	cout<<"surname:\t\t\t"<<surname<<endl;
	
	cout<<"grade: \t\t\t\t"<<grade<<class_grade<<endl;
	
	cout<<"Identity Number:\t\t"<<ID<<endl;
	cout<<endl;
	}

	cout<<"\t\tSUBJECTS\t\t\tMARKS OBTAINED"<<endl;
	cout<<endl;	
	cout<<"Mathematics \t\t\t\t\t\t"<<maths<<endl;
	
	cout<<"English Language \t\t\t\t\t"<<english<<endl;
	
	cout<<"Social Studies \t\t\t\t\t\t"<<social<<endl;
	cout<<"Science \t\t\t\t\t\t"<<science<<endl;
	cout<<"Siswati Language \t\t\t\t\t"<<siswati<<endl;
	cout<<"Home Economics \t\t\t\t\t\t"<<economics<<endl;
	cout<<"Religious Education \t\t\t\t\t"<<religious<<endl;
	cout<<endl;
	
	cout<<"total \t\t\t\t\t\t\t"<<total_marks<<endl;
	cout<<endl;
	cout<<"average \t\t\t\t\t\t"<<average<<endl;
	
	if(average>=50){
		cout<<endl;
			cout<<"remarks \t\t\t\t\t\t"<<"pass"<<endl;
		}
		else if(average<50){
			cout<<endl;
			cout<<"remarks \t\t\t\t\t\t"<<"fail"<<endl;
		}
		
	ofstream report; 		// declaring an object file 
	
	report.open(" STUDENT REPORT.txt", ios::app);	// creating a file called STUDENT REPORT  and appending every new record to the file
	{
		// writing data to the Student Report file
		
	report<<"                                "<<endl;
	report<<"NAMES:                              "<<surname<<" "<<name<<" "<<grade<<class_grade<<endl;
	report<<endl;
	report<<"SUBJECT                            MARKS"<<endl;
	report<<"MATHEMATICS                        "<<maths<<"\n";
	report<<"ENGLISH LANGUAGE                   "<<english<<"\n";
	report<<"SOCIAL STUDIES                     "<<social<<"\n";
	report<<"SCIENCE                            "<<science<<"\n";
	report<<"SISWATI LANGUAGE                   "<<siswati<<"\n";
	report<<"HOME ECONOMICS                     "<<economics<<"\n";
	report<<"RELIGIOUS EDUCATION                "<<religious<<endl;	
	report<<endl;
	report<<"TOTAL MARKS                        "<<total_marks<<endl;
	report<<endl;
	report<<"AVERAGE                            "<<average<<endl;
	if(average>=50){
		
			report<<"remarks                            "<<"pass"<<endl;
		}
		else if(average<50){
			
			report<<"remarks                            "<<"fail"<<endl;
		}
	
	report.close();
	}
	
	// an option is given if the teacher want to add more record or quit the program by pressing 2
	
	cout<<"\t\t\t\t======================================="<<endl;
	cout<<"\t\t\t\t===DO YOU WANT TO ADD ANOTHER RECORD==="<<endl;
	cout<<"\t\t\t\t====1 for yes 2 for no====="<<endl;
	cout<<"\t\t\t\t======================================="<<endl;
	cout<<"\t\t\t\t";
	cin>>another;
	
	
	while(another <1 ||another >2){
		
		cout<<"\t\t\t\tsorry invalid entry\n";
		cout<<"\t\t\t\tTo add another record\n";
		cout<<"\t\t\t\tpress 1 for yes\n";
		cout<<"\t\t\t\tpress 2 to quite the program"<<endl;
		cout<<"\t\t\t\t  ";
		cin>>another;
	}
}while(another !=2);
	return 0;
}
