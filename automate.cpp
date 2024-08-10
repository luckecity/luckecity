#include<iostream>
using namespace std;

int main()
{
	double balance = 100.00; //the system should extract this info
	double bet = 2;//should set the bet tab to R2
	double cashout = 5;//should set the cashout tab to 5.00X
	double profit, gain;
	double roundTotal; // the system need to detect the round or follow up
	int loss=2; //the system need to auto increement
	
	// as soon as the log in is successful
	do{
		
		//check the balance and use the if statement
		if (balance <= 100.00){
		
		//the system should detect the current round
		cout<<"enter round "<<endl;
		cin>>roundTotal;
		
		if(roundTotal >= cashout){
			//multiply the bet by cashout and add it to balance
			gain = balance + (bet * cashout);
			balance = gain - loss;
			cout<<"gained = R"<<gain<<endl;				
			cout<<"total loss = R"<<loss<<endl;	
			cout<<"new balance after loss = R"<<balance<<endl;	
			
		}else{
			//minus the bet from balance
			//add the loss bet to the loss total
			balance = balance - bet ;
			loss = (bet + bet) + loss;
			
			cout<<"new balance = R"<<balance<<endl;
			
			
			bet=bet * 2;						
			cout<<"new bet = R"<<bet<<endl;
			
		}				
	}	
		
	}while(balance <100);
	
			
	bet =2;
	cout<<"new bet = R"<<bet<<endl;
	do
	{
		if (balance >= 100.00){
		
		cout<<"enter round "<<endl;
		cin>>roundTotal;
		
		if(roundTotal >= cashout){
			//multiply the bet by cashout and add it to balance
			gain = balance + (bet * cashout);
			balance = gain - loss;
			cout<<"gained = R"<<gain<<endl;				
			cout<<"total loss = R"<<loss<<endl;	
			cout<<"new balance after loss = R"<<balance<<endl;
		}else{
			//minus the bet from balance
			balance = balance - bet ;
			cout<<"new balance = R"<<balance<<endl;
			
			bet=bet * 2;
			cout<<"new bet = R"<<bet<<endl;
			
		}		
	}
	}while(balance >110 && balance <200);
	
	
}

