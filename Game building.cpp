#include<iostream>

#include<string>

#include<iostream>

#include<cstdlib>

#include<ctime>

using namespace std;

void show_message(){
	
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t\t\t:::WECOME TO GAIN MORE LOOSE LESS:::"<<endl;
	cout<<"\t\t\t\t::::::::::::::::::::::::::::::::::::"<<endl;
}

int details(){
	
	
	long int contact_number; 
	cout<<endl;
	
	{
		cout<<"\t\t\t\tEnter your Contact number"<<endl;
		cout<<"\t\t\t\t";
		cin>>contact_number;
	}
	
	return 0;
}

int Question_5_function_1L(){
	
	char Q51F1[5];		// Q51F1 STANDS FOR question five one love questions function number one;
	
	int total=0; // to hold the total number of correct questions answered
	
	cout<<endl;
		cout<<"\t\t\t\tWhich of the following is NOT identified as one of the"<<endl;
		cout<<"\t\t\t\telements of interpersonal attraction?"<<endl; 
  		cout<<endl;
		cout<<"\t\t\tA educational success"<<endl;
   		cout<<"\t\t\tB proximity"<<endl;
   		cout<<"\t\t\tC physical attraction"<<endl;
   		cout<<"\t\t\tD charisma"<<endl;
   		cout<<"\t\t";
   		cin>>Q51F1[0];
   		
   			if(Q51F1[0]=='A'||Q51F1[0]=='a'){
					
					total=total+2;
					cout<<"\t\t\t==========="<<endl;
					cout<<"\t\t\t==you win=="<<endl;
					cout<<"\t\t\t==========="<<endl;
				}else{
					cout<<"\t\t\t:::::::::::::::::"<<endl;
					cout<<"\t\t\t:::OOP's Sorry:::"<<endl;
					cout<<"\t\t\t:::::::::::::::::"<<endl;
				}
				
				cout<<endl;

		cout<<"\t\t\t\tWhich element of interpersonal attraction applies to "<<endl;
		cout<<"\t\t\t\tthe phrase,""opposites attract?"<<endl;  
   			cout<<endl;
		cout<<"\t\t\tA relationship potential"<<endl;
   		cout<<"\t\t\tB complementary needs"<<endl;
   		cout<<"\t\t\tC reciprocation of liking"<<endl;
   		cout<<"\t\t\tD credibility"<<endl;
   		cout<<"\t\t";
   		cin>>Q51F1[1];
   		
   			if(Q51F1[1]=='B'||Q51F1[1]=='b'){
					
					total=total+2;
					cout<<"\t\t\t==========="<<endl;
					cout<<"\t\t\t==you win=="<<endl;
					cout<<"\t\t\t==========="<<endl;
				}else{
					cout<<"\t\t\t:::::::::::::::::"<<endl;
					cout<<"\t\t\t:::OOP's Sorry:::"<<endl;
					cout<<"\t\t\t:::::::::::::::::"<<endl;
				}
				
				cout<<endl;
		cout<<"\t\t\t\tIn which type of relationship do both partners attempt to have the same "<<endl;
		cout<<"\t\t\t\tlevel of power?"<<endl; 
   				cout<<endl;
		cout<<"\t\t\tA competitive symmetric relationship"<<endl;
   		cout<<"\t\t\tB assertive symmetric relationship"<<endl;
   		cout<<"\t\t\tC symmetric relationship"<<endl;
   		cout<<"\t\t\tD submissive symmetric relationship"<<endl;
   		cout<<"\t\t";
   		cin>>Q51F1[2];
   		
   		if(Q51F1[2]=='C'||Q51F1[2]=='c'){
					
					total=total+2;
					cout<<"\t\t\t==========="<<endl;
					cout<<"\t\t\t==you win=="<<endl;
					cout<<"\t\t\t==========="<<endl;
				}else{
					cout<<"\t\t\t:::::::::::::::::"<<endl;
					cout<<"\t\t\t:::OOP's Sorry:::"<<endl;
					cout<<"\t\t\t:::::::::::::::::"<<endl;
				}
				
				cout<<endl;
		cout<<"\t\t\t\tWhich type of relationship involves a shifting back and forth of power between "<<endl;
		cout<<"\t\t\t\tthe partners depending on the situation?"<<endl; 
   				cout<<endl;
		cout<<"\t\t\tA complementary relationship"<<endl;
   		cout<<"\t\t\tB perpendicular relationship"<<endl;
   		cout<<"\t\t\tC symmetric relationship"<<endl;
   		cout<<"\t\t\tD parallel relationship"<<endl;
   		cout<<"\t\t";
   		cin>>Q51F1[3];
   		
   		if(Q51F1[3]=='D'||Q51F1[3]=='d'){
					
					total=total+2;
					cout<<"\t\t\t==========="<<endl;
					cout<<"\t\t\t==you win=="<<endl;
					cout<<"\t\t\t==========="<<endl;
				}else{
					cout<<"\t\t\t:::::::::::::::::"<<endl;
					cout<<"\t\t\t:::OOP's Sorry:::"<<endl;
					cout<<"\t\t\t:::::::::::::::::"<<endl;
				}
				cout<<endl;

		cout<<"\t\t\t\tWhich type of relationship exists when both partners are vying for"<<endl;
		cout<<"\t\t\t\tcontrol or dominance over the other person?"<<endl;  
   					cout<<endl;
		cout<<"\t\t\tA competitive symmetric relationship"<<endl;
   		cout<<"\t\t\tB competitive parallel relationship"<<endl;
   		cout<<"\t\t\tC competitive power relationship"<<endl;
   		cout<<"\t\t\tD competitive complementary relationship"<<endl;
		cout<<"\t\t";
		cin>>Q51F1[4];
		
			if(Q51F1[4]=='A'||Q51F1[4]=='a'){
					
					total=total+2;
					cout<<"\t\t\t==========="<<endl;
					cout<<"\t\t\t==you win=="<<endl;
					cout<<"\t\t\t==========="<<endl;
				}else{
					cout<<"\t\t\t:::::::::::::::::"<<endl;
					cout<<"\t\t\t:::OOP's Sorry:::"<<endl;
					cout<<"\t\t\t:::::::::::::::::"<<endl;
				}
				
				cout<<endl;

			if(total>=8){
			total=total+2;
			cout<<"\t\t\t|you gained| (E"<<total<<")"<<endl;
		}else if(total==10){
			total=total+0;
			cout<<"\t\t\t=you gained= (E"<<total<<endl;
			
		}else{
			
			cout<<"\t\t\t===you loose==="<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8 and above to WIN E10"<<endl;
		}
		
	return 0;
}

int Question_5_function_2L(){
	
	
					char Q51F2L[5]; // Q51 means that the player selected 5 Question and Love questions to play
									// it is an array that hold 20 different Questions ANSWERs
									
					int total=0; // to hold the total number of correct questions answered
					
//the type of Questions such as Love Questions Start from this lines "these is only for love questions
			cout<<"\t\t\t\tWhich of the following social roles are most likely relationships of choice?" <<endl; 
			
   			cout<<endl;					
			cout<<"\t\t\tA classmates"<<endl;
   			cout<<"\t\t\tB lovers"<<endl;
   			cout<<"\t\t\tC teachers"<<endl;
			cout<<"\t\t\tD family members"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F2L[0];
			
				if(Q51F2L[0]=='B'||Q51F2L[0]=='b'){
					
					total=total+2;
					cout<<"\t\t\t==================="<<endl;
					cout<<"\t\t\t=====you win======="<<endl;
					cout<<"\t\t\t===================="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's Sorry"<<endl;
				}
				
				cout<<endl;
				
			cout<<"\t\t\t\tWho, from the following list, would you likely trust to keep your vulnerabilities"<<endl;
			cout<<"\t\t\t\tsecret?"<<endl; 
   					cout<<endl;
			cout<<"\t\t\tA your accountant"<<endl;
   			cout<<"\t\t\tB your lover"<<endl;
   			cout<<"\t\t\tC your friend"<<endl;
  			cout<<"\t\t\tD your doctor"<<endl;
  			cout<<"\t\t\t\t";
  				cin>>Q51F2L[1];
  				
  				if(Q51F2L[1]=='B'||Q51F2L[1]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t==================="<<endl;
					cout<<"\t\t\t=====you win======="<<endl;
					cout<<"\t\t\t===================="<<endl;
				}else{
					cout<<"\t\t\tOOP's Sorry"<<endl;
				}
				
				cout<<endl;
			cout<<"\t\t\t\tAs a relationship becomes increasingly intimate the amount of information"<<endl;
			cout<<"\t\t\t\tdisclosed ____________________."<<endl;  
   			cout<<endl;	
			cout<<"\t\t\tA will stop"<<endl;
  			cout<<"\t\t\tB will stay the same"<<endl;
  			cout<<"\t\t\tC will decrease"<<endl;
   			cout<<"\t\t\tD will increase"<<endl;
   			cout<<"\t\t\t\t";
			 	cin>>Q51F2L[2];
				 
				 if(Q51F2L[2]=='C'||Q51F2L[2]=='c'){
					
					total=total+2;
					
						cout<<"\t\t\t==================="<<endl;
					cout<<"\t\t\t=====you win======="<<endl;
					cout<<"\t\t\t===================="<<endl;
					
				}else{
					cout<<"\t\t\tOOP's Sorry"<<endl;
				}
				
				cout<<endl;
				
			cout<<"\t\t\t\tGenerally, a dramatic increase or decrease in self-disclosure in a relationship"<<endl;
			cout<<"\t\t\t\treflects ___________."<<endl; 
   				cout<<endl;
			cout<<"\t\t\tA nothing, since it is common in all relationships"<<endl;
   			cout<<"\t\t\tB some significant change in the relationship"<<endl;
   			cout<<"\t\t\tC that the relationship is over"<<endl;
   			cout<<"\t\t\tD that the relationship has stabilized"<<endl;
   			cout<<"\t\t\t\t";
   				cin>>Q51F2L[2];
   				
   			if(Q51F2L[3]=='B'||Q51F2L[3]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t==================="<<endl;
					cout<<"\t\t\t=====you win======="<<endl;
					cout<<"\t\t\t===================="<<endl;
				}else{
					cout<<"\t\t\tOOP's Sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tInterpersonal intimacy _____________."<<endl;  
   				cout<<endl;
			cout<<"\t\t\tA requires sexual interaction"<<endl;
   			cout<<"\t\t\tB is indicated by touching"<<endl;
   			cout<<"\t\t\tC is being able to be yourself and still be accepted by your partner"<<endl;
			cout<<"\t\t\tD is associated with dating"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F2L[4];
			
			if(Q51F2L[4]=='C'||Q51F2L[4]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t==================="<<endl;
					cout<<"\t\t\t=====you win======="<<endl;
					cout<<"\t\t\t===================="<<endl;
				}else{
					cout<<"\t\t\tOOP's Sorry"<<endl;
				}
				cout<<endl;
		
		
		if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t=====you gained E"<<total<<" "<<"======"<<endl;
		}else if(total==10){
			total=total+0;
			cout<<"\t\t\tyou gained E"<<total<<endl;
			
		
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			
			cout<<"\t\t\tget a total of 8-10 to WIN |E10|"<<endl;
			
		}
		

return 0;
	}

int Question_5_function_3L(){
	
	int total=0;
	
	char Q51F3[5];
	
				cout<<endl;
				cout<<"\t\t\t\tWhich type of interpersonal power is based on a person's ability to satisfy our needs?"<<endl;  
   cout<<endl;
   				cout<<"\t\t\tA legitimate power"<<endl;
   				cout<<"\t\t\tB referent power"<<endl;
   				cout<<"\t\t\tC expert power"<<endl;
   				cout<<"\t\t\tD reward power"<<endl;
   				cout<<"\t\t\t\t";
				cin>>Q51F3[0];
				
				if(Q51F3[0]=='D'||Q51F3[0]=='d'){
					
					total=total+2;
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t====You Win==="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tThe type of power that comes from respect for a position that another person holds is"<<endl;
			cout<<"\t\t\t\tcalled __________."<<endl; 
   					cout<<endl;
   						
				cout<<"\t\t\tA coercive power"<<endl;
   				cout<<"\t\t\tB referent power"<<endl;
   				cout<<"\t\t\tC legitimate power"<<endl;
   				cout<<"\t\t\tD reward power"<<endl;
   				cout<<"\t\t\t\t";
				cin>>Q51F3[1];
				
				if(Q51F3[1]=='C'||Q51F3[1]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t====You Win==="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;

		cout<<"\t\t\t\tAccording to the Johari Window self disclosure model, the 'blind' window represents"<<endl;
		 cout<<"\t\t\t\tinformation about yourself that is ________________."<<endl;  
   				cout<<endl;
			cout<<"\t\t\tA not known to you and known to others"<<endl;
   			cout<<"\t\t\tB known to you and known to others"<<endl;
   			cout<<"\t\t\tC not known to others and not known to you"<<endl;
   			cout<<"\t\t\tD known to you and not known to others"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F3[2];
				
				if(Q51F3[2]=='A'||Q51F3[2]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t====You Win==="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		cout<<"\t\t\t\tWhen self disclosing, _____________."<<endl;
   cout<<endl;
   
   			cout<<"\t\t\tA the information flow is reciprocal"<<endl;
   			cout<<"\t\t\tB sharing information is easy and involves little risk"<<endl;
   			cout<<"\t\t\tC information moves in large increments"<<endl;
   			cout<<"\t\t\tD information flows from more personal to less personal"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F3[3];
			
				if(Q51F3[3]=='A'||Q51F3[3]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t====You Win==="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"OOP's sorry"<<endl;
				}
				cout<<endl;
			
			cout<<"\t\t\t\tThe theory of interpersonal relationship development that says relational development "<<endl;
			cout<<"\t\t\t\toccurs in conjunction with various tensions that exist in all relationships is ______."<<endl; 
   cout<<endl;
			cout<<"\t\t\tA social interaction theory"<<endl;
   			cout<<"\t\t\tB impression management theory"<<endl;
   			cout<<"\t\t\tC social exchange theory"<<endl;
   			cout<<"\t\t\tD dialectical theory"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F3[4];
			
				if(Q51F3[4]=='D'||Q51F3[4]=='d'){
					
					total=total+2;
					cout<<"\t\t\t============="<<endl;
					cout<<"\t\t\t===You Win==="<<endl;
					cout<<"\t\t\t============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			if(total>=8){
			total=total+2;
			cout<<"\t\t\t=============="<<endl;
			cout<<"\t\t\t==you gained E"<<total<<endl;
			cout<<"\t\t\t=============="<<endl;
			
		}else if(total==10){
			
			total=total+0;
			cout<<"\t\t\t=============="<<endl;
			cout<<"\t\t\t==you gained E"<<total<<endl;
			cout<<"\t\t\t=============="<<endl;
			
		
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
			
	return 0;
}

int Question_5_function_4L(){
	
		int total=0;
		char Q51F4[5];
		
		cout<<endl;
		cout<<"\t\t\t\tWhich of the following factors are not factors that should be taken into"<<endl;
		cout<<"\t\t\t\taccount when deciding whether a marriage is a non-marriage?"<<endl;
		cout<<endl;
		
		cout<<"\t\t\tA Whether the ceremony or event set out or purported to be a lawful marriage."<<endl;
 		cout<<"\t\t\tB Whether it bore all or enough of the hallmarks of marriage."<<endl;
 		cout<<"\t\t\tC Whether an impartial observer would believe the ceremony or event constituted a lawful"<<endl;
		 cout<<"\t\t\t  marriage."<<endl;
 		cout<<"\t\t\tD The reasonable perceptions, understandings, and beliefs of those in attendance."<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F4[0];
			
			
			if(Q51F4[0]=='C'||Q51F4[0]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t====You Win==="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
		cout<<"\t\t\t\tWhich of the following statements about sham marriages is incorrect?"<<endl;
 			cout<<endl;
		cout<<"\t\t\tA They are void."<<endl;
		cout<<"\t\t\tB They may be used as a way to gain residence to a country, to gain a work permit or to"<<endl;
		cout<<"\t\t\t   claim benefits."<<endl;
 		cout<<"\t\t\tC The parties do not intend to live together as husband and wife."<<endl;
 		cout<<"\t\t\tD They are valid."<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F4[1];
			
			if(Q51F4[1]=='A'||Q51F4[1]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t====You Win==="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		cout<<"\t\t\t\tWhich of the following can you marry under English law?"<<endl;
 			cout<<endl;
		cout<<"\t\t\tA Your cousin."<<endl;
		cout<<"\t\t\tB Your adoptive parent."<<endl;
		cout<<"\t\t\tC Your parent."<<endl;
		cout<<"\t\t\tD Your Uncle"<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F4[2];
			
			if(Q51F4[2]=='A'||Q51F4[2]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t====You Win==="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
	
			cout<<"\t\t\t\tWhich of the following statements is true?"<<endl;
			cout<<endl;
 		cout<<"\t\t\tA Where the parties are under 16 they can marry with parental consent."<<endl;
 		cout<<"\t\t\tB If a party is subject to a care order they can marry with the consent of the Local Authority."<<endl;
 		cout<<"\t\t\tC Parties can enter into a civil partnership without consent if they are 17."<<endl;
 		cout<<"\t\t\tD Where the parties are aged between 16 and 18 they can marry if they have the consent"<<endl;
		 cout<<"\t\t\t   of any relative."<<endl;
		cout<<"\t\t";
			cin>>Q51F4[3];
			
			if(Q51F4[3]=='B'||Q51F4[3]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t====You Win==="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tWhich of the following is a ground on which a civil partnership would be void?"<<endl;
 		cout<<endl;
		 cout<<"\t\t\tA The parties are of the same sex."<<endl;
 		 cout<<"\t\t\tB It has not been consummated owing to the incapacity of either party to consummate it."<<endl;
 		 cout<<"\t\t\tC The necessary formalities have not been complied with."<<endl;
		 cout<<"\t\t\tD The respondent was suffering from a venereal disease in a communicable form."<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F4[4];
				
				if(Q51F4[4]=='C'||Q51F4[4]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t====You Win==="<<endl;
					cout<<"\t\t\t=============="<<endl;
				
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			if(total>=8){
			total=total+2;
			cout<<"\t\t\t\t================="<<endl;
			cout<<"\t\t\t\t====you gained E"<<total<<endl;
			cout<<"\t\t\t\t================"<<endl;
		}else if(total==10){
			total=total+0;
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
			
	return 0;
}

int Question_5_function_5L(){
	
	int total=0;
	char Q51F5[5];
	
			cout<<endl;
	
	cout<<"\t\t\t\tOn which of the following grounds could a marriage be voidable?"<<endl;
	cout<<endl;
		cout<<"\t\t\tA The parties are within the prohibited degrees of relationship"<<endl;
 		cout<<"\t\t\tB Either of the parties is under the age of 16."<<endl;
 		cout<<"\t\t\tC The parties are of the same sex."<<endl;
 		cout<<"\t\t\tD It has not been consummated owing to the willful refusal of the respondent to consummate it."<<endl;
		cout<<"\t\t\t\t";
		cin>>Q51F5[0];
		
			if(Q51F5[0]=='D'||Q51F5[0]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		cout<<"\t\t\t\tWhich of the following statements are false?"<<endl;
		cout<<endl;
 			cout<<"\t\t\tA If a marriage is void there is no need to apply for a decree of nullity."<<endl;
 			cout<<"\t\t\tB If a civil partnership is voidable there is no need to apply for a decree of nullity."<<endl;
 			cout<<"\t\t\tC If a marriage is void the parties may apply for a decree of nullity so they can apply for"<<endl;
			 cout<<"\t\t\t  financial provision."<<endl;
 			cout<<"\t\t\tD If a marriage is voidable the parties must apply for a decree of nullity to annul it."<<endl;
			cout<<"\t\t\t\t";
				cin>>Q51F5[1];
				
			if(Q51F5[1]=='B'||Q51F5[1]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		cout<<"\t\t\t\tWhich of the following statements relating to consummation of a marriage is incorrect?"<<endl;
			cout<<endl;
		cout<<"\t\t\tA Consummation is an act of sexual intercourse between a male and a female."<<endl;
 		cout<<"\t\t\tB Partial and imperfect intercourse may be sufficient to consummate a marriage."<<endl;
 		cout<<"\t\t\tC The use of contraceptives does not prevent the marriage being consummated."<<endl;
 		cout<<"\t\t\tD If a couple have intercourse before they marry but not afterwards, this does not"<<endl;
		 cout<<"\t\t\t  consummate the marriage."<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F5[2];
			
		if(Q51F5[2]=='B'||Q51F5[2]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
		
		cout<<"\t\t\t\tWhich of the following would not allow a party to obtain a decree of nullity on the"<<endl;
		cout<<"\t\t\t\tgrounds of mistake?"<<endl;
 				cout<<endl;
		cout<<"\t\t\tA Mistake as to a person's name."<<endl;
 		cout<<"\t\t\tB Mistake as to a person's profession."<<endl;
 		cout<<"\t\t\tC Mistake as to the nature of the ceremony."<<endl;
 		cout<<"\t\t\tD Being so drunk that it was not possible to validly consent to the marriage."<<endl;
 		cout<<"\t\t\t\t";
			cin>>Q51F5[3];
		
			if(Q51F5[3]=='C'||Q51F5[3]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				
		cout<<"\t\t\t\tWhich of the following are bars to nullity?"<<endl;
		cout<<endl;
		cout<<"\t\t\tA The petitioner led the respondent to believe that he would not seek "<<endl;
		cout<<"\t\t\t  to annul the marriage and it would be unjust to the respondent to grant the decree."<<endl;
 		cout<<"\t\t\tB The annulment is against public policy."<<endl;
 		cout<<"\t\t\tC The petitioner has not applied for an annulment within three years of the marriage breakdown."<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F5[4];
			
		if(Q51F5[4]=='A'||Q51F5[4]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
						
			if(total>=8){
			total=total+2;
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
		}else if(total==10){
			total=total+0;
		
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
}

int Question_5_function_6L(){
	
	int total=0;
	char Q51F6[5];
	
	cout<<endl;
	
		cout<<"\t\t\t\tWhich of the following is not an element of the definition of marriage set "<<endl;
		cout<<"\t\t\t\tout in Hyde v Hyde?"<<endl;
 			cout<<endl;
		cout<<"\t\t\tA Voluntary."<<endl;
 		cout<<"\t\t\tB Until ended by divorce or judicial separation."<<endl;
 		cout<<"\t\t\tC One man and one woman."<<endl;
 		cout<<"\t\t\tD To the exclusion of all others."<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F6[0];
			
			if(Q51F6[0]=='B'||Q51F6[0]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tWhich of the following elements applies equally to marriages and civil partnerships?"<<endl;
 			cout<<endl;
			cout<<"\t\t\tA The sexes of the parties."<<endl;
 			cout<<"\t\t\tB Whether words need to be spoken to enter into the union."<<endl;
			cout<<"\t\t\tC Whether the parties are within the prohibited degrees of relationship."<<endl;
			cout<<"\t\t\t\t";
				cin>>Q51F6[1];
				
				if(Q51F6[1]=='C'||Q51F6[1]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		cout<<"\t\t\tWhich of the following is not a difference between the position of "<<endl;
		cout<<"\t\t\tmarried people/civil partners and cohabitees?"<<endl;
		cout<<endl;
 		cout<<"\t\t\tA Married people/civil partners have rights to occupy the family home under s"<<endl;
		cout<<"\t\t\t   30 Family Law Act 1996 whereas cohabitants do not.\n"<<endl;
 		cout<<"\t\t\tB Married people/civil partners can apply for injunctions under the"<<endl;
		cout<<"\t\t\t   Family Law Act 1996 whereas cohabitants cannot.\n"<<endl;
 		cout<<"\t\t\tC Married people/civil partners can claim maintenance from their former"<<endl;
		cout<<"\t\t\t   partner after the relationship breaks down whereas cohabitants cannot."<<endl;
		cout<<"\t\t\t\t";
				cin>>Q51F6[2];
				
				if(Q51F6[2]=='B'||Q51F6[2]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		cout<<"\t\t\t\tWhich of the following methods of establishing an interest in property is the most"<<endl;
		cout<<"\t\t\t\tstraightforward?"<<endl;
 		cout<<endl;
		 cout<<"\t\t\tA Express trust."<<endl;
		cout<<"\t\t\tB Resulting trust."<<endl;
 		cout<<"\t\t\tC Constructive trust."<<endl;
 		cout<<"\t\t\tD Proprietary estoppel."<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F6[3];
			
			if(Q51F6[3]=='A'||Q51F6[3]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
	cout<<"\t\t\t\tWhich of the following elements is not needed to establish a constructive trust?"<<endl;
	cout<<endl;
 	cout<<"\t\t\tA A common intention that both parties should have a beneficial interest."<<endl;
 	cout<<"\t\t\tB The claimant must have acted to his detriment on the basis of the common intention."<<endl;
 	cout<<"\t\t\tC It would be unconscionable to deny the claimant relief."<<endl;
	cout<<"\t\t\t\t";
		cin>>Q51F6[4];
		
		if(Q51F6[4]=='C'||Q51F6[4]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			
			if(total>=8){
			total=total+2;
			cout<<"\t\t\t================"<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t================"<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t================"<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t================"<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
	return 0;		
}	

int Question_5_function_7L(){
	
	int total=0;
	char Q51F7[5];
	
	cout<<endl;
			
			cout<<"\t\t\t\tWhere a party establishes a share in property through proprietary estoppel, which of "<<endl;
			cout<<"\t\t\t\tthe following best describes the court's approach towards quantifying it?"<<endl;
 			cout<<endl;
			cout<<"\t\t\tA The party's share will be what the legal title provides."<<endl;
			cout<<"\t\t\tB The party's share will be the minimum required to do justice between the parties."<<endl;
 			cout<<"\t\t\tC The party's share will be what he or she alleged it to be in argument."<<endl;
 			cout<<"\t\t\tD The party's share will be the amount which equity determines is fair as between the parties."<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F7[0];
			
			if(Q51F7[0]=='B'||Q51F7[0]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tWhich of the following statements is incorrect?"<<endl;
			cout<<endl;
		cout<<"\t\t\tA Where one cohabitant (A) leaves property to another cohabitant (B) in his Will, B must"<<endl; 
		cout<<"\t\t\t   make a claim under the Inheritance (Provision for Family and Dependants) Act 1975 (IPFDA) to"<<endl;
		cout<<"\t\t\t   receive anything.\n"<<endl;
 		cout<<endl;
		cout<<"\t\t\tB A former cohabitant can claim under the IPFDA as a person maintained by the deceased."<<endl;
 		cout<<"\t\t\tC A former cohabitant can claim under the IPFDA as a cohabitant of two years or more."<<endl;
 		cout<<"\t\t\tD Under IPFDA a cohabitant can only claim such financial provision as it would be reasonable "<<endl;
		cout<<"\t\t\t   in all the circumstances of the case for him or her to receive for his maintenance."<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F7[1];
			
			if(Q51F7[1]=='A'||Q51F7[1]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tWhich of the following would bring a Civil Partnership to an end?"<<endl;
 				cout<<endl;
				cout<<"\t\t\tA A decree absolute"<<endl;
 				cout<<"\t\t\tB A judicial separation order"<<endl;
 				cout<<"\t\t\tC A conditional dissolution order"<<endl;
 				cout<<"\t\t\tD A final dissolution order"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q51F7[2];
			
			if(Q51F7[2]=='A'||Q51F7[2]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		cout<<"\t\t\t\tWhich of the following are grounds for divorce?"<<endl;
 		cout<<endl;
		cout<<"\t\t\tA Adultery"<<endl;
 		cout<<"\t\t\tB Behaviour"<<endl;
 		cout<<"\t\t\tC Irretrievable breakdown"<<endl;
 		cout<<"\t\t\tD All of the above"<<endl;
 		cout<<"\t\t\t\t";
		cin>>Q51F7[3];
			
			if(Q51F7[3]=='C'||Q51F7[3]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		cout<<"\t\t\t\tWhich of the following facts cannot be used to prove irretrievable breakdown of a civil"<<endl;
		cout<<"\t\t\t\tpartnership?"<<endl;
		cout<<endl;
 		cout<<"\t\t\tA That the respondent has committed adultery and the petitioner cannot "<<endl;
		cout<<"\t\t\t   reasonably be expected to live with the respondent"<<endl;
		cout<<"\t\t\tB That the respondent has behaved in such a way that the petitioner"<<endl;
		cout<<"\t\t\t   cannot reasonably be expected to live with the respondent"<<endl;
 		cout<<"\t\t\tC That the respondent has deserted the petitioner for a continuous period of at least "<<endl;
		cout<<"\t\t\t  two years immediately preceding the presentation of the petition"<<endl;
 		cout<<"\t\t\tD That the parties to the marriage have lived apart for a continuous period of at least two"<<endl;
		 cout<<"\t\t\t  years immediately before the petition is presented and the respondent consents to a decree"<<endl;
		 cout<<"\t\t\t   being granted"<<endl;
 		cout<<"\t\t\tE That the parties to the marriage have lived apart for a continuous period of at least"<<endl;
		 cout<<"\t\t\t  five years before the petition is presented"<<endl;
		cout<<"\t\t\t\t";
		cin>>Q51F7[4];
			
			if(Q51F7[4]=='A'||Q51F7[4]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				if(total>=8){
			total=total+2;
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
				cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
	return 0;
}	

int Question_5_function_8L(){
	
	
	int total=0;
	
	char Q51F8[5];
	
			cout<<endl;
			
			cout<<"\t\t\t\tWhat is the name of Valentine's servant?"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tA Jason"<<endl;
			cout<<"\t\t\tB James"<<endl;
			cout<<"\t\t\tC Jeremy"<<endl;
			cout<<"\t\t\tD Jeremiah"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F8[0];
			
			if(Q51F8[0]=='C'||Q51F8[0]=='c'){
					
					total=total+2;
					
						cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
			
			cout<<"\t\t\t\tWhat has Valentine done with all his money?"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tA squandered it on women and entertainment"<<endl;
			cout<<"\t\t\tB purchased real estate"<<endl;
			cout<<"\t\t\tC doubled it in a game of chance"<<endl;
			cout<<"\t\t\tD bought a bride"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F8[1];
			
			if(Q51F8[1]=='A'||Q51F8[1]=='a'){
					
					total=total+2;
					
						cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tWhat activity does Valentine recently enjoy?"<<endl;
			cout<<endl;
			cout<<"\t\t\tA scheming"<<endl;
			cout<<"\t\t\tB reading"<<endl;
			cout<<"\t\t\tC laughing"<<endl;
			cout<<"\t\t\tD drinking"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F8[2];
			
			if(Q51F8[2]=='B'||Q51F8[2]=='b'){
					
					total=total+2;
					
						cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;

		cout<<"\t\t\t\tWhat profession does Valentine hope to take on to earn a living?"<<endl;
		cout<<endl;
		
		cout<<"\t\t\tA becoming a doctor"<<endl;
		cout<<"\t\t\tB becoming a writer"<<endl;
		cout<<"\t\t\tC becoming a teacher"<<endl;
		cout<<"\t\t\tD becoming a lawyer"<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F8[3];
			
			if(Q51F8[3]=='B'||Q51F8[3]=='b'){
					
					total=total+2;
					
						cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tWho is Valentine's best friend?"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tA Jeremy"<<endl;
			cout<<"\t\t\tB Mrs. Frail"<<endl;
			cout<<"\t\t\tC Scandal"<<endl;
			cout<<"\t\t\tD Tattle"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F8[4];
			
			if(Q51F8[4]=='C'||Q51F8[4]=='c'){
					
					total=total+2;
					
						cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
			
			
			if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t====you gained E"<<total<<endl;
			cout<<"\t\t\t================"<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t====you gained E"<<total<<endl;
			cout<<"\t\t\t================"<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
	return 0;	


}

int Question_5_function_9L(){
	
	int total=0;
	
	char Q51F9[5];
	
	cout<<endl;
	
	cout<<"\t\t\t\tWhere is Valentine in danger of going if he does not devise a plan?"<<endl;
	cout<<endl;
		
		cout<<"\t\t\tA back to school"<<endl;
		cout<<"\t\t\tB to court"<<endl;
		cout<<"\t\t\tC back to work"<<endl;
		cout<<"\t\t\tD debtor's prison"<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F9[0];
			
		if(Q51F9[0]=='D'||Q51F9[0]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
			
			cout<<"\t\t\t\tWhat kind of writer does Valentine hope to become?"<<endl;
			cout<<endl;
				cout<<"\t\t\tA a journalist"<<endl;
				cout<<"\t\t\tB an essayist"<<endl;
				cout<<"\t\t\tC a novelist"<<endl;
				cout<<"\t\t\tD a poet"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q51F9[1];
			
		if(Q51F9[1]=='D'||Q51F9[1]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
			
			cout<<"\t\t\t\tWhat s the name of the creditor who is most adamant about being paid?"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tA Mrs. Frail"<<endl;
			cout<<"\t\t\tB Tattle"<<endl;
			cout<<"\t\t\tC the nurse"<<endl;
			cout<<"\t\t\tD Trapland"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F9[2];
			
		if(Q51F9[2]=='D'||Q51F9[2]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
			
			cout<<"\t\t\t\tThe test for the behaviour fact is:"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tA Subjective"<<endl;
			cout<<"\t\t\tB Objective"<<endl;
			cout<<"\t\t\tC Objective and subjective"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F9[3];
			
		if(Q51F9[3]=='C'||Q51F9[3]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				
				cout<<"\t\t\t\tWhich of the following would not be enough for a petition based on behaviour?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\tA Criticism, disapproval and boorish behaviour"<<endl;
				cout<<"\t\t\tB A collection of trivial acts"<<endl;
				cout<<"\t\t\tC Negative behaviour such as prolonged silences and periods of inactivity"<<endl;
				cout<<"\t\t\tD Failure to give spontaneous, demonstrative affection"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q51F9[4];
			
		if(Q51F9[4]=='A'||Q51F9[4]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				if(total>=8){
			total=total+2;
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
	return 0;

		
}

int Question_5_function_10L(){
	
	int total=0;
	
	char Q51F10[5];
	
		
		cout<<endl;
		
		cout<<"\t\t\t\tThe stages of coming together in relationships include"<<endl;
				cout<<endl;
		
		cout<<"\t\t\tA circumscribing"<<endl;
		cout<<"\t\t\tB differentiating"<<endl;
		cout<<"\t\t\tC intensifying"<<endl;
		cout<<"\t\t\tD stagnating"<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F10[0];
			
		if(Q51F10[0]=='C'||Q51F10[0]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		
		cout<<"\t\t\t\tYou attempt to present yourself in the best possible light to another person you"<<endl;
		cout<<"\t\t\t\tlike but who doesn't know you very well. You appear warm and open. This is an example of"<<endl;
		cout<<endl;
		
		cout<<"\t\t\tA the experimenting stage of relationships"<<endl;
		cout<<"\t\t\tB the integrating stage of relationships"<<endl;
		cout<<"\t\t\tC the bonding stage of relationships"<<endl;
		cout<<"\t\t\tD the initiating stage of relationships"<<endl;
		cout<<"\t\t\t\t";
			cin>>Q51F10[1];
			
		if(Q51F10[1]=='D'||Q51F10[1]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		
		cout<<"\t\t\t\tYou and your partner want to get married while skydiving, recording the ceremony "<<endl;
		cout<<"\t\t\t\ton video Your parents want you to have a traditional formal wedding in a church with"<<endl;
		cout<<"\t\t\t\tbridesmaids in ugly dresses, with ushers, and with tons of flowers. This is an example"<<endl;
		cout<<"\t\t\t\tof which of the following dialectics?"<<endl;
		cout<<endl;
		
			cout<<"\t\t\tA inclusion-seclusion"<<endl;
			cout<<"\t\t\tB revelation-concealment"<<endl;
			cout<<"\t\t\tC autonomy-connection"<<endl;
			cout<<"\t\t\tD conventionality-uniqueness"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F10[2];
			
		if(Q51F10[2]=='D'||Q51F10[2]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tAn interpersonal relationship"<<endl;
					cout<<endl;
			
			cout<<"\t\t\tA is a dyadic communication; a transaction that takes place between two people"<<endl;
			cout<<"\t\t\tB is a close connection between two people that is characterized by strong emotional bonding"<<endl;
			cout<<"\t\t\t   and commitment"<<endl;
			cout<<"\t\t\tC qualifies as a personal relationship"<<endl;
			cout<<"\t\t\tD is a connection two people have to each other because of an association, an attraction,"<<endl;
			cout<<"\t\t\t   or a power"<<endl;
			cout<<"\t\t\t   distribution"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F10[3];
			
		if(Q51F10[3]=='D'||Q51F10[3]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				
				cout<<"\t\t\t\tWhich of the following types of love are in the proper order?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\tA Empty Love, Romantic Love, Infatuated Love, Compassionate Love"<<endl;
				cout<<"\t\t\tB Romantic Love, Infatuated Love, Compassionate Love, Consummate Love"<<endl;
				cout<<"\t\t\tC Infatuated Love, Romantic Love, Compassionate Love, Consummate Love"<<endl;
				cout<<"\t\t\tD Compassionate Love, Consummate Love, Infatuated Love, Fatuous Love"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q51F10[4];
			
		if(Q51F10[4]=='A'||Q51F10[4]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		if(total>=8){
			total=total+2;
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
	return 0;

}

int Question_5_function_11L(){
	
	int total=0;
	
	char Q51F11[5];
	
	cout<<endl;
			
			cout<<"\t\t\t\tYou want to be able to visit friends without having to 'check' with your partner to"<<endl;
			cout<<"\t\t\t\tsee if it is okay,"<<endl;
			cout<<"\t\t\t\tbut you don't want to cause friction in your relationship. You are experiencing which"<<endl;
			cout<<"\t\t\t\tof the following dialectics?"<<endl;
			
			cout<<endl;
			cout<<"\t\t\tA autonomy-connection"<<endl;
			cout<<"\t\t\tB revelation-concealment"<<endl;
			cout<<"\t\t\tC conventionality-uniqueness"<<endl;
			cout<<"\t\t\tD inclusion-seclusion"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F11[0];
			
		if(Q51F11[0]=='A'||Q51F11[0]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;

		
		cout<<"\t\t\t\tWhich of the following strategies used in intercultural marriages work effectively"<<endl;
		cout<<"\t\t\t\tto maintain the relationship and make it work?"<<endl;
		cout<<endl;
		
		cout<<"\t\t\tA submission"<<endl;
		cout<<"\t\t\tB compromise"<<endl;
		cout<<"\t\t\tC obliteration"<<endl;
		cout<<"\t\t\tD consensus"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q51F11[1];
			
		if(Q51F11[1]=='D'||Q51F11[1]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;

	
			cout<<"\t\t\t\tResearch on relationships in the United States reveals that"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tA the marriage rate is dropping"<<endl;
			cout<<"\t\t\tB gay and lesbian relationships are less durable than heterosexual marriages"<<endl;
			cout<<"\t\t\tC most Americans believe that it is more difficult to have a good marriage today than "<<endl;
			cout<<"\t\t\t   it was for their parents' generation"<<endl;
			cout<<"\t\t\tD d. all of the above"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q51F11[2];
			
		if(Q51F11[2]=='D'||Q51F11[2]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;

			cout<<"\t\t\t\tAll of the following are true of relationship dialectics except"<<endl;
					cout<<endl;
			
			cout<<"\t\t\tA contradictory impulses that force us to choose either one or the other impulse"<<endl;
			cout<<"\t\t\tB contradictory impulses that push-pull us at the same time"<<endl;
			cout<<"\t\t\tC a fundamental source of conflict in relationships"<<endl;
			cout<<"\t\t\tD all of the above are parts of relationship dialectics"<<endl;
					cout<<"\t\t\t\t";
			cin>>Q51F11[3];
			
		if(Q51F11[3]=='A'||Q51F11[3]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;

			cout<<"\t\t\t\tRelationships based on a cost benefit analysis are explained by which theory"<<endl;
					cout<<endl;
			
			cout<<"\t\t\tA exchange theory"<<endl;
			cout<<"\t\t\tB reciprocal liking"<<endl;
			cout<<"\t\t\tC similarity attraction theory"<<endl;
			cout<<"\t\t\tD matching effect"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q51F11[4];
			
		if(Q51F11[4]=='A'||Q51F11[4]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;

	if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
	return 0;
	
}

//below function consist of communications only
int Question_5_function_1C(){
	
	
	int total=0;
	
	char Q52F1[5];
	
	cout<<endl;
	
			cout<<"\t\t\t\tEthics in the communication competence model is"<<endl;
			cout<<endl;
			
			cout<<"\t\t\tA the successful performance of a communication behavior"<<endl;
			cout<<"\t\t\tB receptive accuracy whereby you can detect, decode, and comprehend signals in your social"<<endl;
			cout<<"\t\t\t   environment"<<endl;
			cout<<"\t\t\tC a conscious decision to invest time and energy in improving our communication with others"<<endl;
			cout<<"\t\t\tD a set of standards for judging the moral correctness of communication behavior"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q52F1[0];
			
				if(Q52F1[0]=='D'||Q52F1[0]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				
				cout<<"\t\t\t\tWhich of the following is not a weakness of the linear model of communication has:"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. it doesn't include feedback"<<endl;
				cout<<"\t\t\tb. doesn't include noise"<<endl;
				cout<<"\t\t\tc. it assumes listeners are passive not active participants"<<endl;
				cout<<"\t\t\td. it assumes sending and receiving are separate, not simultaneous activities"<<endl;
					cout<<"\t\t\t\t";
			cin>>Q52F1[1];
			
				if(Q52F1[1]=='B'||Q52F1[1]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tNoise from a communication perspective includes"<<endl;
				cout<<endl;
			cout<<"\t\t\ta. startling sounds"<<endl;
			cout<<"\t\t\tb. biases and assumptions"<<endl;
			cout<<"\t\t\tc. confusing word choices"<<endl;
			cout<<"\t\t\td. all of the above"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q52F1[2];
			
				if(Q52F1[2]=='D'||Q52F1[2]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			
		cout<<"\t\t\t\tFields of experience refer to"<<endl;
		cout<<endl;
			
			cout<<"\t\t\ta. cultural background"<<endl;
			cout<<"\t\t\tb. geographic location"<<endl;
			cout<<"\t\t\tc. ethnicity"<<endl;
			cout<<"\t\t\td. all of the above"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q52F1[3];
			
				if(Q52F1[3]=='D'||Q52F1[3]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;

			cout<<"\t\t\t\tResearch on the communication abilities of Americans reveals that"<<endl;
			cout<<endl;
			
			cout<<"\t\t\ta. more than 90% of Americans see themselves as extremely effective communicators"<<endl;
			cout<<"\t\t\tb. managers see themselves as good or very good listeners, but most of their employees"<<endl;
			cout<<"\t\t\t    rate most of their managers'  as poor on listening skills"<<endl;
			cout<<"\t\t\tc. most personnel interviewers assess job applicants' communication skills in general as"<<endl;
			cout<<"\t\t\t    above average"<<endl;
			cout<<"\t\t\td. both b and c"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q52F1[4];
			
				if(Q52F1[4]=='B'||Q52F1[4]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
		
		if(total>=8){
			total=total+2;
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
				cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
	return 0;

}

//start working from 10L for the shifting of the tabs
int Question_5_function_2C(){
	
			int total=0;
	
	char Q52F2[5];
	
	cout<<endl;
	
			cout<<"\t\t\t\tThe interactive model provides the following insights about human communication:"<<endl;
			cout<<endl;
			
			cout<<"\t\t\ta. a communicator is both a sender and a receiver at the same time"<<endl;
			cout<<"\t\t\tb. fields of experience can significantly affect the understanding of messages transmitted"<<endl;
			cout<<"\t\t\tc. communication has an impact on all parties involved in the communication"<<endl;
			cout<<"\t\t\td. all of the above"<<endl;
			cout<<"\t\t\t\t";
				cin>>Q52F2[0];
			
				if(Q52F2[0]=='B'||Q52F2[0]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				
				
				cout<<"\t\t\t\tCommunication is a process 'means that'"<<endl;
				cout<<endl;
				cout<<"\t\t\ta. we must adapt to inevitable change when we communicate with others"<<endl;
				cout<<"\t\t\tb. no relationship stands still, frozen in time"<<endl;
				cout<<"\t\t\tc. we can understand messages from other individuals by carefully examining "<<endl;
				cout<<"\t\t\t    a single word, phrase, or sentence"<<endl;
				cout<<"\t\t\td. both a and b"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F2[1];
			
				if(Q52F2[1]=='D'||Q52F2[1]=='d'){
					
					total=total+2;
					
						cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				
				cout<<"\t\t\t\tMeaning is"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. socially constructed"<<endl;
				cout<<"\t\t\tb. never perfectly shared, only approximately shared"<<endl;
				cout<<"\t\t\tc. shared both verbally and nonverbally"<<endl;
				cout<<"\t\t\td. all of the above"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F2[2];
			
				if(Q52F2[2]=='D'||Q52F2[2]=='d'){
					
					total=total+2;
					
						cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tRules"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. provide a basis for determining the appropriateness of our communication"<<endl;
				cout<<"\t\t\tb. can be both implicit and explicit"<<endl;
				cout<<"\t\t\tc. should never be modified; that would be inappropriate"<<endl;
				cout<<"\t\t\td. both a and b"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F2[3];
			
				if(Q52F2[3]=='D'||Q52F2[3]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;

		
		cout<<"\t\t\t\tIf everyone who works in the office leaves early on days when the boss is not there,"<<endl;
		cout<<"\t\t\t\tbut no one reports it."<<endl;
		cout<<"\t\t\t\tThis represents a:"<<endl;
		
		cout<<endl;
		
		cout<<"\t\t\ta. implicit rule"<<endl;
		cout<<"\t\t\tb. explicit rule"<<endl;
		cout<<"\t\t\tc. rule violation"<<endl;
		cout<<"\t\t\td. Receptive Accuracy"<<endl;
			cout<<"\t\t\t\t";
				cin>>Q52F2[4];
			
				if(Q52F2[4]=='A'||Q52F2[4]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;


			if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
	return 0;
	
}

int Question_5_function_3C(){
	
		int total=0;
	
	char Q52F3[5];
	
	cout<<endl;
				
			cout<<"\t\t\t\tHow many ways are there to communicate?"<<endl;
			cout<<endl;
			
			cout<<"\t\t\ta. 1"<<endl;
			cout<<"\t\t\tb. 2"<<endl;
			cout<<"\t\t\tc. 3"<<endl;
			cout<<"\t\t\td. 4"<<endl;
			cout<<"\t\t\te. 5"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q52F3[0];
			
					if(Q52F3[0]=='C'||Q52F3[0]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
			
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		cout<<"\t\t\t\tWhat is Verbal Communication?"<<endl;
		cout<<endl;
	
	cout<<"\t\t\ta. Talking to someone"<<endl;
	cout<<"\t\t\tb. When someone is talking and someone else is listening"<<endl;
	cout<<"\t\t\tc. When more than one person is talking"<<endl;
	cout<<"\t\t\td. Using verbal noises to show you are listening like “uh huh”"<<endl;
	cout<<"\t\t\te. All the above	"<<endl;
		cout<<"\t\t\t\t";
			cin>>Q52F3[1];
			
					if(Q52F3[1]=='B'||Q52F3[1]=='b'){
					
					total=total+2;
					
				
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
			
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		cout<<"\t\t\t\tIf someone has a trouble speaking, for example had a stroke, what should you do?"<<endl;
		cout<<endl;
		
		cout<<"\t\t\ta. Guess what they are trying to say"<<endl;
		cout<<"\t\t\tb. Give them paper so they can write it down"<<endl;
		cout<<"\t\t\tc. Teach them sign language"<<endl;
		cout<<"\t\t\td. Allow them time to answer"<<endl;
		cout<<"\t\t\te. Use other forms of communication"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q52F3[2];
			
					if(Q52F3[2]=='D'||Q52F3[2]=='d'){
					
					total=total+2;
					
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
			
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
		
			cout<<"\t\t\t\tIf you are speaking with someone who has a hearing impairment, what should you do?"<<endl;
			cout<<endl;
				cout<<endl;
			cout<<"\t\t\ta. Make sure you face them when you are talking"<<endl;
			cout<<"\t\t\tb. You should not be speaking to them, this is disrespectful as they cannot hear you"<<endl;
			cout<<"\t\t\tc. Give them paper and pen and write to each other"<<endl;
			cout<<"\t\t\td. You should learn sign language to communicate with them"<<endl;
			cout<<"\t\t\te. Just mouth the words as it is easier for them to read your lips"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q52F3[3];
			
					if(Q52F3[3]=='A'||Q52F3[3]=='a'){
					
					total=total+2;
					
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
			
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
		
		cout<<"\t\t\t\tWhat is communication without words?"<<endl;
		cout<<endl;
		cout<<"\t\t\ta. There is no communication without words"<<endl;
		cout<<"\t\t\tb. Non-verbal communication"<<endl;
		cout<<"\t\t\tc. Telepathy"<<endl;
		cout<<"\t\t\td. Sign language"<<endl;
		cout<<"\t\t\te. Gestures"<<endl;
		cout<<"\t\t\t\t";
			cin>>Q52F3[4];
			
					if(Q52F3[4]=='B'||Q52F3[4]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
			
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
					if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
	return 0;
	
	
	
}

int Question_5_function_4C(){
	
	int total=0;
	
	char Q52F4[5];
	
	cout<<endl;
	
			cout<<"\t\t\t\tWhich of the following is NOT a form of non-verbal communication?"<<endl;
			cout<<endl;
			
			cout<<"\t\t\ta. Body language"<<endl;
			cout<<"\t\t\tb. Tone of voice"<<endl;
			cout<<"\t\t\tc. Written communication"<<endl;
			cout<<"\t\t\td. Facial expressions"<<endl;
			cout<<"\t\t\te. Telepathy"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q52F4[0];
			
					if(Q52F4[0]=='E'||Q52F4[0]=='e'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tWhat are the two parts to communication?"<<endl;
			
			cout<<endl;
			
			cout<<"\t\t\ta. There only needs to be one part, when someone says something"<<endl;
			cout<<"\t\t\tb. When someone says something, and the other person has understood"<<endl;
			cout<<"\t\t\tc. When someone says something, and the other person has replied"<<endl;
			cout<<"\t\t\td. When someone says something while using non-verbal communication"<<endl;
			cout<<"\t\t\te. There is four parts to communication"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q52F4[1];
			
					if(Q52F4[1]=='B'||Q52F4[1]=='b'){
					
					total=total+2;
					
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tWhat needs to be complete for there to have been effective communication?"<<endl;
			cout<<endl;
			
			cout<<"\t\t\ta. The persons sentence"<<endl;
			cout<<"\t\t\tb. The documentation"<<endl;
			cout<<"\t\t\tc. Both the sending and receiving of the message"<<endl;
			cout<<"\t\t\td. The task that was asked of the person"<<endl;
			cout<<"\t\t\te. An agreement"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q52F4[2];
			
					if(Q52F4[2]=='C'||Q52F4[2]=='c'){
					
					total=total+2;
					
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
			
			cout<<"\t\t\tScenario:"<<endl;
			cout<<"\t\t\t\tYou ask a co-worker if they can help you with a client, they cross their arms and "<<endl;
			cout<<"\t\t\t\troll their eyes but do not say anything. Have they communicated?"<<endl;
			cout<<endl;
			
			cout<<"\t\t\ta. No, at this stage it is one-way communication"<<endl;
			cout<<"\t\t\tb. No, when they answer you they will have communicated back, completing two-way communication"<<endl;
			cout<<"\t\t\tc. No, but they are being rude"<<endl;
			cout<<"\t\t\td. Yes, they have used non-verbal communication"<<endl;
			cout<<"\t\t\te. Sort of, you won't really know until they answer though"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q52F4[3];
			
					if(Q52F4[3]=='D'||Q52F4[3]=='d'){
					
					total=total+2;
					
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
			
			cout<<"\t\t\t\tWhy are there rules about how to communicate?"<<endl;
			cout<<endl;
			
			cout<<"\t\t\ta. There are no rules about how to communicate"<<endl;
			cout<<"\t\t\tb. Your workplace is just making sure it has full control over you"<<endl;
			cout<<"\t\t\tc. It is to make sure everyone understands each other"<<endl;
			cout<<"\t\t\td. Your workplace is obliged to have a policy because of OSH"<<endl;
			cout<<"\t\t\te. Some people are not very good at communicating"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q52F4[3];
			
					if(Q52F4[3]=='C'||Q52F4[3]=='c'){
					
					total=total+2;
					
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
			
				if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
		cout<<endl;
		
	return 0;
	
}

int Question_5_function_5C(){
	
	int total=0;
	
	char Q52F5[5];
	
	cout<<endl;
	
			cout<<"\t\t\t\tWhen you are talking directly to a person and you can see them, this is called what?"<<endl;
			cout<<endl;
			
		cout<<"\t\t\ta. Verbal contact"<<endl;
		cout<<"\t\t\tb. Face to face communication"<<endl;
		cout<<"\t\t\tc. Talking"<<endl;
		cout<<"\t\t\td. Interaction"<<endl;
		cout<<"\t\t\te. Body language"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q52F5[0];
			
					if(Q52F5[0]=='B'||Q52F5[0]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tHow will you find out how you should answer the phone at your workplace?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. You should not be answering the phone at your workplace"<<endl;
				cout<<"\t\t\tb. Listen to what the others say"<<endl;
				cout<<"\t\t\tc. Do what feels most comfortable"<<endl;
				cout<<"\t\t\td. In the policies manual"<<endl;
				cout<<"\t\t\te. There is no particular way to answer the phone as long as you are polite"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q52F5[1];
			
					if(Q52F5[1]=='D'||Q52F5[1]=='d'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
		cout<<"\t\t\t\tWhen speaking on the phone, what type of communication is being used?"<<endl;
		cout<<endl;
			cout<<"\t\t\ta. Verbal and tone of voice"<<endl;
			cout<<"\t\t\tb. Verbal and body language"<<endl;
			cout<<"\t\t\tc. Verbal"<<endl;
			cout<<"\t\t\td. Nonverbal communication"<<endl;
			cout<<"\t\t\te. Face to face"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q52F5[2];
			
					if(Q52F5[2]=='A'||Q52F5[2]=='a'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
			
			cout<<"\t\t\t\tWhen speaking on the phone, you need to ensure you do not do what?"<<endl;
			cout<<endl;
			
			cout<<"\t\t\ta. Break communication law"<<endl;
			cout<<"\t\t\tb. Break telephone contracts"<<endl;
			cout<<"\t\t\tc. Breach confidentiality"<<endl;
			cout<<"\t\t\td. Hang up on someone"<<endl;
			cout<<"\t\t\te. Speak any language other than English"<<endl;
			cout<<"\t\t\t\t";
			cin>>Q52F5[3];
			
					if(Q52F5[3]=='C'||Q52F5[3]=='c'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
			
		cout<<"\t\t\t\tIs text messaging an acceptable form of communication?"<<endl;
		cout<<endl;
		cout<<"\t\t\ta. It is not formally classed as communication as communication involves talking"<<endl;
		cout<<"\t\t\tb. Yes, in certain circumstances"<<endl;
		cout<<"\t\t\tc. Yes, it should be the preferred choice when making arrangements"<<endl;
		cout<<"\t\t\td. No, under no circumstances should you text for work reasons"<<endl;
		cout<<"\t\t\te. Yes, also, by using emoji’s it can demonstrate the feelings you want to get across"<<endl;
		cout<<"\t\t\t\t";
			cin>>Q52F5[4];
			
					if(Q52F5[4]=='B'||Q52F5[4]=='b'){
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
					cout<<endl;
			
				if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
		cout<<endl;
		
	return 0;
			
		
}

int Question_5_function_6C(){
	
	int total=0;
	
	char Q52F6[5];
	
	cout<<endl;
				
				
				cout<<"\t\t\t\tBesides how to answer the phone, what else might be in the policy about communication?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. Methods of communication are acceptable to use with a client"<<endl;
				cout<<"\t\t\tb. There are not really policies on communication"<<endl;
				cout<<"\t\t\tc Why you should communicate"<<endl;
				cout<<"\t\t\td. What not to say when communicating"<<endl;
				cout<<"\t\t\te. All of the above"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F6[0];
				
				if(Q52F6[0]=='A'|Q52F6[0]=='a'){
				
					
					total=total+2;
					
						
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				
				cout<<"\t\t\t\tHow can a person correctly communicate?"<<endl;
				cout<<endl;
					cout<<"\t\t\ta. Speaking"<<endl;
					cout<<"\t\t\tb. Text message"<<endl;
					cout<<"\t\t\tc. Email"<<endl;
					cout<<"\t\t\td. Phone"<<endl;
					cout<<"\t\t\te. All of the above"<<endl;
					cout<<"\t\t\t\t";
						cin>>Q52F6[1];
				
				if(Q52F6[1]=='E'|Q52F6[1]=='e'){
				
					
					total=total+2;
					
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
					cout<<"\t\t\t\tWhich of the following is NOT an instance to use text messaging or Email?"<<endl;
					cout<<endl;
				cout<<"\t\t\ta. To change an appointment time"<<endl;
				cout<<"\t\t\tb. To swap a shift"<<endl;
				cout<<"\t\t\tc. A reminder for an appointment"<<endl;
				cout<<"\t\t\td. To quickly give test results"<<endl;
				cout<<"\t\t\te. To let a client know you are running late"<<endl;
				cout<<"\t\t\t\t";
						cin>>Q52F6[2];
				
				if(Q52F6[2]=='D'|Q52F6[2]=='d'){
				
					
					total=total+2;
					
						
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tWho can give out information on the phone?"<<endl;
			cout<<endl;
				
				cout<<"\t\t\ta. The care giver"<<endl;
				cout<<"\t\t\tb. The manager"<<endl;
				cout<<"\t\t\tc. The nurse"<<endl;
				cout<<"\t\t\td. All of the above"<<endl;
				cout<<"\t\t\te. b and c"<<endl;
				cout<<"\t\t\t\t";
						cin>>Q52F6[3];
				
				if(Q52F6[3]=='E'|Q52F6[3]=='e'){
				
					
					total=total+2;
					
						
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tWhat should never be discussed on social media?"<<endl;
			cout<<endl;
				
				cout<<"\t\t\ta. Workplace politics"<<endl;
				cout<<"\t\t\tb. Clients in the facility"<<endl;
				cout<<"\t\t\tc. How you feel about management"<<endl;
				cout<<"\t\t\td. How much you dislike your job"<<endl;
				cout<<"\t\t\te. All of the above"<<endl;
				cout<<"\t\t\t\t";
						cin>>Q52F6[4];
				
				if(Q52F6[4]=='E'|Q52F6[4]=='e'){
				
					
					total=total+2;
					
						
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				
				if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
		cout<<endl;
		
	return 0;
		
				
				
				
}

int Question_5_function_7C(){
	
	int total=0;
	
	char Q52F7[5];
	
	cout<<endl;
	
				cout<<"\t\t\t\tHow much of language is made up of non-verbal communication?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. 10%"<<endl;
				cout<<"\t\t\tb. 38%"<<endl;
				cout<<"\t\t\tc. 52%"<<endl;
				cout<<"\t\t\td. 76%"<<endl;
				cout<<"\t\t\te. 93%"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F7[0];
				
				if(Q52F7[0]=='E'|Q52F7[0]=='e'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
					cout<<"\t\t\t\tHow many types of communication are there?"<<endl;
					cout<<endl;
					
					cout<<"\t\t\ta. 2"<<endl;
					cout<<"\t\t\tb. 4"<<endl;
					cout<<"\t\t\tc. 6"<<endl;
					cout<<"\t\t\td. 8"<<endl;
					cout<<"\t\t\te. 10"<<endl;
					cout<<"\t\t\t\t";
				cin>>Q52F7[1];
				
				if(Q52F7[1]=='C'|Q52F7[1]=='c'){
				
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
					cout<<"\t\t\t\tHow can people use verbal communication?"<<endl;
					cout<<endl;
						
						cout<<"\t\t\ta. Verbal communication is any words used during face to face contact"<<endl;
						cout<<"\t\t\tb. Verbal communication can happen face to face, telephone, skype"<<endl;
						cout<<"\t\t\tc. Verbal communication is the use of words but not sounds"<<endl;
						cout<<"\t\t\td. Verbal communication is any words either spoken or written but does not include body"<<endl;
						cout<<"\t\t\t    language"<<endl;
						cout<<"\t\t\te. Verbal communication is any words or sounds used during face to face contact"<<endl;
						cout<<"\t\t\t\t";
							cin>>Q52F7[2];
				
				if(Q52F7[2]=='B'|Q52F7[2]=='b'){
				
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;

			cout<<"\t\t\t\tWhich of the following is NOT a reason to use minimal encouragers (sounds that "<<endl;
			cout<<"\t\t\t\tare not words)?"<<endl;
			cout<<endl;
			cout<<"\t\t\ta. Show you are listening"<<endl;
			cout<<"\t\t\tb. Encourage your client"<<endl;
			cout<<"\t\t\tc. So you don't interrupt"<<endl;
			cout<<"\t\t\td. Avoid answering a question"<<endl;
			cout<<"\t\t\te. Show you understand"<<endl;
				cout<<"\t\t\t\t";
			cin>>Q52F7[3];
				
				if(Q52F7[3]=='D'|Q52F7[3]=='d'){
				
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;

			cout<<"\t\t\t\tWhat is the term used to describe the emotion or feeling in your voice?"<<endl;
			cout<<endl;
				cout<<"\t\t\ta. Affect"<<endl;
				cout<<"\t\t\tb. Verbal communication"<<endl;
				cout<<"\t\t\tc. Tone"<<endl;
				cout<<"\t\t\td. Sarcasm"<<endl;
				cout<<"\t\t\te. Sentiment"<<endl;
					cout<<"\t\t\t\t";
			cin>>Q52F7[4];
				
				if(Q52F7[4]=='C'|Q52F7[4]=='c'){
				
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				
				if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
			}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
		
		cout<<endl;
		
	return 0;
		

	
}

int Question_5_function_8C(){
	
	int total=0;
	
	char Q52F8[5];
	
	cout<<endl;
					
					cout<<"\t\t\t\tUsing your whole body to communicate is called what?"<<endl;
					cout<<endl;
					
					cout<<"\t\t\ta. Miming"<<endl;
					cout<<"\t\t\tb. Body language"<<endl;
					cout<<"\t\t\tc. Sign language"<<endl;
					cout<<"\t\t\td. Exuberant communication"<<endl;
					cout<<"\t\t\te. Full communication"<<endl;
					cout<<"\t\t\t\t";
				cin>>Q52F8[0];
				
				if(Q52F8[0]=='B'|Q52F8[0]=='b'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tIf you cross your arms when talking to someone you are doing what?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. Being very rude"<<endl;
				cout<<"\t\t\tb. Putting your body in a closed position"<<endl;
				cout<<"\t\t\tc. Putting your body in an open position"<<endl;
				cout<<"\t\t\td. Putting your body in a defensive position"<<endl;
				cout<<"\t\t\te. Showing that you are really listening"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F8[1];
				
				if(Q52F8[1]=='B'|Q52F8[1]=='b'){
				
					
					total=total+2;
					
						cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tWaving is what type of communication?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. Gestures"<<endl;
				cout<<"\t\t\tb. Body language"<<endl;
				cout<<"\t\t\tc. Sign language"<<endl;
				cout<<"\t\t\td. Body position"<<endl;
				cout<<"\t\t\te. Tactile signing"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F8[2];
				
				if(Q52F8[2]=='A'|Q52F8[2]=='a'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tFacial expressions are a part of what?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. Gestures"<<endl;
				cout<<"\t\t\tb. Sign language"<<endl;
				cout<<"\t\t\tc. Body language"<<endl;
				cout<<"\t\t\td. Verbal communication"<<endl;
				cout<<"\t\t\te. Non-effective communication"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F8[3];
				
				if(Q52F8[3]=='C'|Q52F8[3]=='c'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tSitting in a position where you are below a person, looking up is a sign of what?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. You think they are more powerful than you"<<endl;
				cout<<"\t\t\tb. You think you should give them more power"<<endl;
				cout<<"\t\t\tc. You are weaker than the other person"<<endl;
				cout<<"\t\t\td. You are showing respect to their Mana"<<endl;
				cout<<"\t\t\te. You think you are more powerful than them"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F8[4];
				
				if(Q52F8[4]=='D'|Q52F8[4]=='d'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;

		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
				
				
	return 0;
}

int Question_5_function_9C(){
	
	int total=0;
	
	char Q52F9[5];
	
	cout<<endl;
					
				cout<<"\t\t\t\tWhich of the following is NOT an accepted form of written communication?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. Policies"<<endl;
				cout<<"\t\t\tb. Emails"<<endl;
				cout<<"\t\t\tc. Text Messages"<<endl;
				cout<<"\t\t\td. Notes"<<endl;
				cout<<"\t\t\te. Anything written is written communication"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F9[0];
				
				if(Q52F9[0]=='E'|Q52F9[0]=='e'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					;
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tWhen writing a formal letter, what do you need to begin with?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. Date"<<endl;
				cout<<"\t\t\tb. Greeting"<<endl;
				cout<<"\t\t\tc. Address"<<endl;
				cout<<"\t\t\td. Subject header"<<endl;
				cout<<"\t\t\te. Signature"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F9[1];
				
				if(Q52F9[1]=='B'|Q52F9[1]=='b'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tWhen writing a letter, what do you NOT have to help you get your message across?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. Spell check"<<endl;
				cout<<"\t\t\tb. Emoji's"<<endl;
				cout<<"\t\t\tc. Body language"<<endl;
				cout<<"\t\t\td. Edit function"<<endl;
				cout<<"\t\t\te. Facial expressions"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F9[2];
				
				if(Q52F9[2]=='C'|Q52F9[2]=='c'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
					cout<<"\t\t\t\tWhen using electronic communication, which of the following is something you"<<endl;
					cout<<"\t\t\t\tshould NOT do?"<<endl;
					cout<<endl;
					
					cout<<"\t\t\ta. Use jargon"<<endl;
					cout<<"\t\t\tb. Use text language"<<endl;
					cout<<"\t\t\tc. Give private information"<<endl;
					cout<<"\t\t\td. Give important news"<<endl;
					cout<<"\t\t\te. All of the above"<<endl;
					cout<<"\t\t\t\t";
				cin>>Q52F9[3];
				
				if(Q52F9[3]=='E'|Q52F9[3]=='e'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
			cout<<"\t\t\t\tWhich of the following is a legal document?"<<endl;
			cout<<endl;
			
			cout<<"\t\t\ta. Any emails with a client’s name"<<endl;
			cout<<"\t\t\tb. Any emails regardless of content"<<endl;
			cout<<"\t\t\tc. Policy manual"<<endl;
			cout<<"\t\t\td. Client notes"<<endl;
			cout<<"\t\t\te. Any written documentation"<<endl;
			cout<<"\t\t\t\t";
				cin>>Q52F9[4];
				
				if(Q52F9[4]=='D'|Q52F9[4]=='d'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
				
				
	return 0;	
	
}

int Question_5_function_10C(){
	
	int total=0;
	
	char Q52F10[5];
	
	cout<<endl;
	
						cout<<"\t\t\t\tWhen writing clinical notes, you should only write what?"<<endl;
						cout<<endl;
						
						cout<<"\t\t\ta. The cares you have done"<<endl;
						cout<<"\t\t\tb. Factual information"<<endl;
						cout<<"\t\t\tc. Your perspective of their overall health for the day"<<endl;
						cout<<"\t\t\td. What the client has given permission for you to write"<<endl;
						cout<<"\t\t\te. What needs to happen the following day"<<endl;
							cout<<"\t\t\t\t";
				cin>>Q52F10[0];
				
				if(Q52F10[0]=='B'|Q52F10[0]=='b'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tNotes should be written in what colour?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. Blue or Black"<<endl;
				cout<<"\t\t\tb. Blue"<<endl;
				cout<<"\t\t\tc. Black"<<endl;
				cout<<"\t\t\td. Red"<<endl;
				cout<<"\t\t\te. Any colour is fine"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F10[1];
				
				if(Q52F10[1]=='A'|Q52F10[1]=='a'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
					cout<<"\t\t\t\tWhy are policies and procedures created?"<<endl;
					cout<<endl;
					
					cout<<"\t\t\ta. So the staff are legally bound to behave in a certain way"<<endl;
					cout<<"\t\t\tb. So a health care worker can be disciplined if it is not done the way the manager wants"<<endl;
					cout<<"\t\t\tc. To give the golden standard to aim for with cares"<<endl;
					cout<<"\t\t\td. To ensure everyone follows the same rules and guidelines"<<endl;
					cout<<"\t\t\te. To give the general idea of how things should be done"<<endl;
					cout<<"\t\t\t\t";
				cin>>Q52F10[2];
				
				if(Q52F10[2]=='D'|Q52F10[2]=='d'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
					cout<<"\t\t\t\tHow often are policies reviewed?"<<endl;
					cout<<endl;
					
					cout<<"\t\t\ta. Every 6 months"<<endl;
					cout<<"\t\t\tb. Every year"<<endl;
					cout<<"\t\t\tc. Every 2 years"<<endl;
					cout<<"\t\t\td. Every 5 years"<<endl;
					cout<<"\t\t\te. Every time there is an incident"<<endl;
					cout<<"\t\t\t\t";
				cin>>Q52F10[3];
				
				if(Q52F10[3]=='C'|Q52F10[3]=='c'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tIf you think a policy has become outdated, what should you do?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. Change it"<<endl;
				cout<<"\t\t\tb. Talk to your manager"<<endl;
				cout<<"\t\t\tc. Nothing, it will be reviewed at some stage"<<endl;
				cout<<"\t\t\td. Ignore it"<<endl;
				cout<<"\t\t\te. Try the way you think it should be to prove your way is better"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F10[4];
				
				if(Q52F10[4]=='B'|Q52F10[4]=='b'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				
					if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;
			
		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;	

		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
				
				
	return 0;
	
}

int Question_5_function_11C(){
	
	int total=0;
	
	char Q52F11[5];
	
	cout<<endl;
	
	
					cout<<"\t\t\t\tHow many languages are recognised as official languages of New Zealand?"<<endl;
					cout<<endl;
					
					cout<<"\t\t\ta. 1"<<endl;
					cout<<"\t\t\tb. 2"<<endl;
					cout<<"\t\t\tc. 3"<<endl;
					cout<<"\t\t\td. 4"<<endl;
					cout<<"\t\t\te. 5"<<endl;
						cout<<"\t\t\t\t";
				cin>>Q52F11[0];
				
				if(Q52F11[0]=='C'|Q52F11[0]=='c'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tWhat is sign language?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. Using your hands to make gestures that form words"<<endl;
				cout<<"\t\t\tb. Another name for lip reading"<<endl;
				cout<<"\t\t\tc. Written signs"<<endl;
				cout<<"\t\t\td. Using a series of tapping to create words"<<endl;
				cout<<"\t\t\te. Using facial gestures as a code"<<endl;
					cout<<"\t\t\t\t";
				cin>>Q52F11[1];
				
				if(Q52F11[1]=='A'|Q52F11[1]=='a'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tWhen using sign language, it is important to remember what?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. To only use your left hand"<<endl;
				cout<<"\t\t\tb. The signs vary from country to country"<<endl;
				cout<<"\t\t\tc. To only use your right hand"<<endl;
				cout<<"\t\t\td. To show no emotion on your face"<<endl;
				cout<<"\t\t\te. Sign language should only be used in emergencies"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F11[2];
				
				if(Q52F11[2]=='B'|Q52F11[2]=='b'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tWho uses tactile-signing?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. People that have hearing impairment"<<endl;
				cout<<"\t\t\tb. People who are deaf"<<endl;
				cout<<"\t\t\tc. People who are blind"<<endl;
				cout<<"\t\t\td. People who are deaf-blind"<<endl;
				cout<<"\t\t\te. People who are hearing impaired and cannot use their hands"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F11[3];
				
				if(Q52F11[3]=='D'|Q52F11[3]=='d'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t\tWhich of the following is NOT a way of tactile signing?"<<endl;
				cout<<endl;
				
				cout<<"\t\t\ta. Finger spelling"<<endl;
				cout<<"\t\t\tb. Hand-over-hand signing"<<endl;
				cout<<"\t\t\tc. Adapted written signs"<<endl;
				cout<<"\t\t\td. On-body signing"<<endl;
				cout<<"\t\t\te. Lip Reading"<<endl;
				cout<<"\t\t\t\t";
				cin>>Q52F11[4];
				
				if(Q52F11[4]=='E'|Q52F11[4]=='e'){
				
					
					total=total+2;
					
					cout<<"\t\t\t=============="<<endl;
					cout<<"\t\t\t===You Win===="<<endl;
					cout<<"\t\t\t=============="<<endl;
					
				}else{
					
					cout<<"\t\t\tOOP's sorry"<<endl;
				}
				cout<<endl;
				
				if(total>=8){
			total=total+2;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;	

		}else if(total==10){
			total=total+0;
			
			cout<<"\t\t\t==============="<<endl;
			cout<<"\t\t\t===you gained E"<<total<<endl;
			cout<<"\t\t\t==============="<<endl;	

		}else{
			
			cout<<"\t\t\tyou loose"<<endl;
			cout<<"\t\t\tyour total is "<<total<<endl;
			cout<<"\t\t\tget a total of 8-10 to WIN E10"<<endl;
		}
				
				
	return 0;	
				
	}



int main(){
	
	

	show_message();
	
	
	char play_again;
	int option_game;
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\n\n";
	cout<<"\t\t\t\t1 to play ";
	cout<<"\t\t\t\t2 to quit "<<endl;
	cout<<"\t\t\t\t\t\t\t";
	cin>>option_game;
	
	
	do{
	
	if(option_game ==1){
		
		srand(time(0));
		
		 Question_5_function_2L();
		 srand(time(0));
		 
		 Question_5_function_3L();
		 srand(time(0));
		 
		 Question_5_function_4L();
	
		}
				
				cout<<endl;
			
				cout<<"\t\tDO WANT TO PLAY AGAIN\n"<<endl;
				cout<<"\t\tpress Y for YES\n"<<endl;
				cout<<"\t\tN for NO"<<endl;
				cout<<"\t\t\t";
				cin>>play_again;
				
}while(play_again == 'Y' || play_again == 'y');

return 0;
}
