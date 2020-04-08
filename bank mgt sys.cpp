#include<iostream>
#include<string>

class Customer
{
	std::string m_first_name;
	std::string m_middle_name;
	std::string m_last_name;
	int m_age;
	int m_birthdate;
	int m_birthmonth;
	int m_birthyear;
	std::string m_address;
	int m_pincode;
	std::string m_state;
	std::string m_country;
	std::string m_nationalism;
	//std::string m_account_type;   //saving or cuurent
	int m_balance=0;
	int m_amount;
	//int m_withdraw;
	    //withdraw or deposit money
	
	
	public:
		Customer()= default;
		
		
		Customer(std::string first_name, std::string middle_name, std::string last_name, int age, int birthdate, int birthmonth, int birthyear, 
		std::string address, int pincode, std::string state, std::string country, std::string nationalism )   //to create an account
		{
			m_first_name=first_name;
			m_middle_name=middle_name;
			m_last_name= last_name;
			m_age=age;
			m_birthdate=birthdate;
			m_birthmonth=birthmonth;
			m_address=address;
			m_pincode=pincode;
			m_state=state;
			m_country=country;
			m_nationalism=nationalism;
			
			
		}
		
		void details()   //to view account details
		{
			std::cout<<"First name: "<<m_first_name<<"\n"<<"Middle Name: "<<m_middle_name<<"\n"<<"Last Name: "<<m_last_name<<"\n"<<"Age: "<<m_age<<
			"\n"<<"DOB: "<<m_birthdate<<"/"<<m_birthmonth<<"/"<<m_birthyear<<"\n"<<"Address: "<<m_address<<"\n"<<"Pincode: "<<m_pincode<<"\n"<<
			"State: "<<m_state<<"\n"<<"Country: "<<m_country<<"\n"<<"Nationalism: "<<m_nationalism<<"\n";
		}
		
		int withdraw(int amount)   //to withdraw some amount
		{
			m_amount=amount;
			m_balance=m_balance-amount;
			return m_balance;
		}
		
		int deposit(int amount)   //to deposit some amount
		{
			m_amount=amount;
			m_balance=m_balance+amount;
			return m_balance;
		}
	
};

int main()
{
	
	std::string first_name1;
	std::string middle_name1;
	std::string last_name1;
	int age1;
	int birthdate1;
	int birthmonth1;
	int birthyear1;
	std::string add1;
	int pincode1;
	std::string state1;
	std::string country1;
	std::string nationalism1;
	
	std::cout<<"First name: ";
	std::getline(std::cin,first_name1);
	std::cout<<"Middle Name: ";
	std::getline(std::cin,middle_name1);
	std::cout<<"Last Name: ";
	std::getline(std::cin,last_name1);
	std::cout<<"Age: ";
	std::cin>>age1;
	std::cout<<"Birthdate: ";
	std::cin>>birthdate1;
	std::cout<<"Birthmonth: ";
	std::cin>>birthmonth1;
	std::cout<<"Birthyear: ";
	std::cin>>birthyear1;
	std::cin.ignore(32767, '\n');
	std::cout<<"Address: ";
	std::getline(std::cin,add1);
	std::cout<<"Pincode: ";
	std::cin>>pincode1;
	std::cin.ignore(32767, '\n');
	std::cout<<"State: ";
	std::getline(std::cin,state1);
	std::cout<<"Country: ";
	std::getline(std::cin,country1);
	std::cout<<"Nationalism: ";
	std::getline(std::cin,nationalism1);
	
	Customer cus(first_name1, middle_name1,last_name1, age1, birthdate1,  birthmonth1, birthyear1, add1 , 
	pincode1, state1, country1, nationalism1); 
	
	
	std::cout<<"Here are the actions you can perform:\n 1. Withdraw\n 2. Deposit \n 3. Display details\n 4. Exit\n";
	int action,amount1;
	while(1)
	{
		std::cout<<"Choose the action: ";
		std::cin>>action;
		switch(action)
		{
			case 1:
				std::cout<<"Enter amount to withdraw: ";
				std::cin>>amount1;
				std::cout<<"Balance: "<<cus.withdraw(amount1)<<"\n";
				break;
			case 2:
				std::cout<<"Enter amount to deposit: ";
				std::cin>>amount1;
				std::cout<<"Balance: "<<cus.deposit(amount1)<<"\n";
				break;
			case 3:
				cus.details();
				std::cout<<"\n";
				break;
			case 4:
				std::cout<<"Thank you for using\n";
				exit(0);
				break;
			
				
			default:
				break;
				
		}
	}

	
	return 0;
}
