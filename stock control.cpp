#include <iostream>
#include <string>
#include <fstream>

using namespace std;


// declaring a function that will hold all the program features
int Features(){
	
	
	int choice;
	cout<<"\n\n\n"<<endl;
	cout<<"\t\t\t   1. \tADD PRODUCT"<<endl;
	cout<<"\t\t\t   2. \tDISPLAY ALL RECORD"<<endl;
	cout<<"\t\t\t   3. \tSEARCH PRODUCT"<<endl;
	cout<<"\t\t\t   4. \tMODIFY PRODUCT"<<endl;
	cout<<"\t\t\t   5. \tDELETE PRODUCT"<<endl;
	cout<<"\t\t\t   0. \tQUIT THE PROGRAM"<<endl;
	cin>>choice;
	
	return choice;	
}

// defining a class for the new product
class NEW_PRODUCT{
	
	private :
	 int prod_number;
	 string prod_name;
	 int prod_quantity;
	
	// defining a method to get the product name
	
	public:
		
		 void Set_Product_Name(string PRODUCT_NAME){
		
		 prod_name = PRODUCT_NAME;
		 
	}
	
	// this method get the product number
	
		 void Set_Product_Number(int PRODUCT_NUMBER){
		
		prod_number = PRODUCT_NUMBER;
		
	}
	
	// while this method get the product quantity
	
		void Set_Product_Quantity( int Quantity){
		
		prod_quantity = Quantity;
		
	}
	
	// GETTING AND RETURNING THE VALUES THAT IS PASSED IN THE METHODS  
	
	string Get_Product_Name(){
		
		return prod_name;
	}
	
	int Get_Product_Number(){
		
		return prod_number;
	}
	
	int Get_Product_Quantity(){
		
		return prod_quantity;
	}
	
	// declaring a file mothod or function
	
	void File(){
		
			// declaring a file object
			
			ofstream Product_File;
	
			Product_File.open("PRODUCT FILE.txt", ios::app);
			
		
		// wwriting product details to the Product file
		
			Product_File<<Get_Product_Name()<<"\t\t\t\t"<<Get_Product_Quantity()<<"\t\t\t\t"<<Get_Product_Number()<<endl;
			
			cout<<"\n\n"<<endl;
			cout<<"PRODUCT ADDED SUCCESSFULLY TO THE PRODUCT FILE\n\n"<<endl;
			
			Product_File.close();
}
	
};

void DISPLAY_ALL_PRODUCT(){
		
	int prod_number;
	 string prod_name;
	 int prod_quantity;
	 
	 ifstream Product_file("PRODUCT FILE.txt");
	
	cout<<"\nPRODUCT NAME\tPRODUCT QUAMTITY\tPRODUCT NUMBER\n"<<endl;
	
	while(Product_file>>prod_name>>prod_number>>prod_quantity){
		
		
		cout<<prod_name<<"\t\t\t"<<prod_number<<"\t\t\t"<<prod_quantity<<endl;
	}
		
}

// Method for taking input from the user when he/she is searching for a product
string Set_Search_Product(){
		
		string Search;
		
		//prompting the user to enter the name of the product that he/she want to search for
		
		cout <<"What do you want to search for"<<endl;
		cin >> Search;
		
		return Search;
		
}



int main(){
	
	
	int feature = Features();
	
	// variable to loop again if the user want to add another product
	char Add_Again;
	
	
	// declaring an object for the NEW_PRODUCT class
	NEW_PRODUCT new_product_Object;
	
	// declaring temporary variables to hold the product details
	
	string ProductName;
	int ProductNumber, ProductQuantity;
	
	
	switch(feature){
		
		case 0:
			cout<<"thank you for using Mazwe program"<<endl;
			break;
		case 1:
				
	// prompting the user to enter product details
	do{
	
	cout << "Enter The Product Name ";
	cin >> ProductName;
	
	
	cout << "What Is The Product Number ";
	cin >> ProductNumber;
	
	cout<< "Enter The Product Quantity ";
	cin >> ProductQuantity;

	// accessing the Set functions or methods in the NEW_PRODUCT class using the class object
		
	new_product_Object.Set_Product_Name(ProductName);
	new_product_Object.Set_Product_Number(ProductNumber);
	new_product_Object.Set_Product_Quantity(ProductQuantity);
	new_product_Object.File();
	
	cout<<"Add ANOTHER PRODUCT Y=YES N=NO"<<endl;
	cin>>Add_Again;
	
	}while(Add_Again == 'y' || Add_Again == 'Y');
	
	break;
	
	case 2:
		DISPLAY_ALL_PRODUCT();
		
		break;
	
	case 3:
		char search_again;
	do{
		
		
	string search =Set_Search_Product();
	string name1; // it is used to hold the name when wanted to print an error message if search does not match the name in file
	string name; // to hold the name of the product that is read from the product file
	int quantity,  number; //to hold the quantity and number of the product that is read from the product file
	
	// opening the Product file using the product object
	ifstream Product_File;
	
	Product_File.open("PRODUCT FILE.txt");
	
	if(Product_File.is_open()){
		
		while(Product_File >>name>>quantity>>number){
			
			if(search == name){
				
				cout<<name<<"\t\t"<<quantity<<"\t\t"<<number<<endl;
			}
			}
			
		}
		cout<<"\n\n"<<endl;
		cout<<"search again Y=YES N=NO"<<endl;
		cin >>search_again;	
}while(search_again == 'Y' || search_again == 'y');
	break;
	
	default:
		cout<<"wrong input"<<endl;
}


		
}
