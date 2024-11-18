#include<iostream>
#include<string>
#include<cstdlib>
#include <conio.h>
using namespace std;
// method for hoding the feature and returning users choice
char Program_Feature(){
	int choice;
	cout<<"\n\t\t1: ADD NEW INVESTOR"<<endl;
	cout<<"\t\t\2: DELETE AN INVESTOR"<<endl;
	cout<<"\t\t\3: MODIFY INVESTOR"<<endl;
	choice=getch();
	
	return choice;
}
// class for the names
class Registration_Details{
	
	private:
		string NAMES, ADDRESS; //this takes names  and addresses that is less or equal to 30 characters
		 int ID; // for the investores identity number
		int INVESTMENT_AMOUNT, MONTH_TO_INVEST; // takes the amount of money the investors want to invest and for how many months
		int CONTACT_NUMBER; // to store the contact details of the investors
		
		
		public:
			//seting the names method to be passed in the main function
			
			void SET_NAMES(string names){//we will be passing the names argument into this method known as parameter variable
				
				names=NAMES; // the names in lowercase is used for passing and the NAMES in upperCase belong to the class variable
			}
			void SET_ADDRESS(string address){
				
				address=ADDRESS;
			}
			void ID_CARD(int id){//we will be passing the Identity card argument into this method
				
				id=ID;
			}
			void SET_INVEST_AMOUNT(int investment_amount){
				
				int ivestment_amount=INVESTMENT_AMOUNT;
			}
			void SET_MONTHS(int months){
				
				months=MONTH_TO_INVEST;
			}
			void SET_CONTACT(int contact){
				
				contact=CONTACT_NUMBER;
			}	
		
		//getting the set methods
		// names
		//address
		//amount
		//id
		//months
		//contact
		
		string GET_Names(){
			
			return NAMES;
		}
		
		string GET_Address(){
			
			return ADDRESS;
		}
		
		 int GET_Id(){
			
			return ID;
		}
		int GET_Amount(){
			
			return INVESTMENT_AMOUNT;
		}
		
		int GET_Month(){
			
			return MONTH_TO_INVEST;
		}
		
		int _GETContact(){
			
			return CONTACT_NUMBER;
		}
	
};


int main(){
	
	//every variables in this MAIN FUNCTION is temporary variable 
		char TEMP_NAME[30], TEMP_ADDRESS[30]; 
		int TEMP_ID; 
		int TEMP_INVESTMENT_AMOUNT, TEMP_MONTH_TO_INVEST; 
		 int TEMP_CONTACT_NUMBER;
		
		char choice =Program_Feature();
		 
		switch(choice){
		
		case '1':
				system("cls");
				cout<<"ENTER YOUR FULL NAMES: ";
				cin.getline(TEMP_NAME, 30);
				system("cls");
				cout<<"ENTER YOUR FULL ADDRESS: ";
				cin.getline(TEMP_ADDRESS, 30);
				system("cls");
				cout<<"ENTER YOUR ID NUMBER: "; // work on this because its not receiving long numbers such as 333464799376363992
				cin>>TEMP_ID;
				system("cls");
				cout<<"HOW MUCH DO YOU WANT TO INVEST: E";
				cin>>TEMP_INVESTMENT_AMOUNT;
				system("cls");
				
				while(TEMP_INVESTMENT_AMOUNT>5000){				//while loop is used to 
					system("cls");
					cout<<"AMOUNT IS MORE THAN E5000"<<endl;		// verify that the investors does not invest
					cout<<"TRY AGAIN ";							// money that is more than 5000
					cin>>TEMP_INVESTMENT_AMOUNT;
				}
				
				cout<<"HOW MANY MONTHS: ";
				cin>>TEMP_MONTH_TO_INVEST;
				while(TEMP_MONTH_TO_INVEST <3 || TEMP_MONTH_TO_INVEST >12){
					system("cls");
					cout<<"YOU ARE ALLOW TO INVEST FROM 3 MONTHS UPWARDS"<<endl;
					cout<<"TRY AGAIN ";
					cin>>TEMP_MONTH_TO_INVEST;
				}
				system("cls");
				cout<<"ENTER YOUR CONTACT NUMBER ";
				cin>>TEMP_CONTACT_NUMBER;		// remember to validate this number to make sure it's not more or less than 8 degits
				
				
				// declaring a class object to be used to access the methods in the registration class
				Registration_Details Register_object;
				
				//passing the temporary variables int the methods in the registration class
				Register_object.SET_NAMES(TEMP_NAME);
				Register_object.SET_ADDRESS(TEMP_ADDRESS);
				Register_object.ID_CARD(TEMP_ID);
				Register_object.SET_INVEST_AMOUNT(TEMP_INVESTMENT_AMOUNT);
				Register_object.SET_MONTHS(TEMP_MONTH_TO_INVEST);
				Register_object.SET_CONTACT(TEMP_CONTACT_NUMBER);
			
				
				//getting the information for display on the screen
				system("cls");
				cout<<"CONFIRM YOUR DETAILS"<<endl;
				cout<<"NAMES\t\t"<<Register_object.GET_Names()<<endl;
				cout<<"ADDRESS\t\t"<<Register_object.GET_Address()<<endl;
				cout<<"ID CARD\t\t"<<Register_object.GET_Id()<<endl;
				cout<<"AMOUNT\t\t"<<Register_object.GET_Amount()<<endl;
				cout<<"MONTHS\t\t"<<Register_object.GET_Month()<<endl;
				cout<<"CONTACT\t\t"<<Register_object._GETContact()<<endl;
				break;
		default:
			cout<<"sorry wrong input"<<endl;
	}
		system("pause");
}

