#include<iostream.h>
#include<cstdlib>
#include<string>
class MainMenu
{
public:
	MainMenu();
	virtual void showMenu();
private:
};
MainMenu::MainMenu()
{
}
void MainMenu::showMenu()
{
	 cout<<"\n\nSelect type of food:"<<endl;
     cout<<"\nNo.         NAME                   "<<endl;
     cout<<"\n-------------------------------------\n";
	 cout<<"\n[1]         Foods"<<endl;
     cout<<"\n[2]         Drinks"<<endl;
     cout<<"\nEnterYour choice : ";
}

class MenuOne: public MainMenu
{
public:
	MenuOne();
	void showMenu();
private:
};
MenuOne::MenuOne()
{
}
void MenuOne::showMenu()
{
	 cout<<"\n\nSelect type of food:"<<endl;
	 cout<<"\n[1]Burger"<<endl;
     cout<<"\n[2]Biryani"<<endl;
     cout<<"\n[3]Sandwich"<<endl;
     cout<<"\nEnter your choice : ";
}

class MenuTwo: public MainMenu
{
public:
	MenuTwo();
	void showMenu();
private:
};
MenuTwo::MenuTwo()
{
}
void MenuTwo::showMenu()
{
     cout<<"\n\nSelect type of drink:"<<endl;
	 cout<<"\n[1]Hot drinks"<<endl;
     cout<<"\n[2]Cold drinks"<<endl;
     cout<<"\n[3]Juices"<<endl;
     cout<<"\nEnter your choice : ";
}

class MealOne: public MainMenu
{
public:
	MealOne();
	void showMenu();
private:
};
MealOne::MealOne()
{
}
void MealOne::showMenu()
{
int cost1 = 150, cost2 = 130, cost3 = 150, cost4 = 150, cost5 = 140;
	 cout<<"\nSelect type of burger:"<<endl;
     cout<<"\n Number           NAME                        PRICE          "<<endl;
     cout<<"\n-----------------------------------------------------------\n";
     cout<<"\n [1]		Classic cheeseburger	  Rupees "<<cost1<<"   "<<endl;
	 cout<<"\n [2]		Classic Veggie burger	  Rupees "<<cost2<<"    "<<endl;
     cout<<"\n [3]		Chicken burger		  Rupees "<<cost3<<"    "<<endl;
	 cout<<"\n [4]		Chilli cheese burger	  Rupees "<<cost4<<"    "<<endl;
     cout<<"\n [5]		Potato corn burger	  Rupees "<<cost5<<"       "<<endl;
	 cout<<"\n [6]		Cancel you purchasing			     "<<endl;
     cout<<"\nYour choice : ";
}

class MealTwo: public MainMenu
{
public:
	MealTwo();
	void showMenu();
private:
};
MealTwo::MealTwo()
{
}
void MealTwo::showMenu()
{
int costB1 = 370, costB2 = 280, costB3 = 290, costB4 = 290, costB5 = 370;
	 cout<<"\nSelect type of Biryani:"<<endl;
     cout<<"\n Number           NAME                        PRICE          "<<endl;
     cout<<"\n-----------------------------------------------------------\n";
     cout<<"\n [1]		Chicken                     Rupees "<<costB1<<"   "<<endl;
	 cout<<"\n [2]		Vegetable		    Rupees "<<costB2<<"    "<<endl;
     cout<<"\n [3]		Paneer			    Rupees "<<costB3<<"     "<<endl;
	 cout<<"\n [4]		Egg		            Rupees "<<costB4<<"    "<<endl;
     cout<<"\n [5]		Chef special		    Rupees "<<costB5<<"       "<<endl;
	 cout<<"\n [6]		Cancel you purchasing			     "<<endl;
     cout<<"\nYour choice : ";
}

class MealThree: public MainMenu
{
public:
	MealThree();
	void showMenu();
private:
};
MealThree::MealThree()
{
}
void MealThree::showMenu()
{
	int costS1 = 80.00, costS2 = 85.00, costS3 = 90.00, costS4 = 80.00;
	 cout<<"\n\nSelect type of Sandwich:"<<endl;
     cout<<"\n Number           NAME                        PRICE          "<<endl;
     cout<<"\n-----------------------------------------------------------\n";
     cout<<"\n [1]		Club Sandwich		     Rupees "<<costS1<<"  "<<endl;
	 cout<<"\n [2]		Chicken Crispy Sandwich      Rupees "<<costS2<<" "<<endl;
     cout<<"\n [3]		Extream Veg Sandwich	     Rupees "<<costS3<<" "<<endl;
	 cout<<"\n [4]		Cheese Sandwich	             Rupees "<<costS4<<" "<<endl;
	 cout<<"\n [5]		Cancel your purchasing		                 "<<endl;
     cout<<"\nEnter Your choice : ";
}

class DrinkOne: public MainMenu
{
public:
	DrinkOne();
	void showMenu();
private:
};
DrinkOne::DrinkOne()
{
}
void DrinkOne::showMenu()
{
	double costhd1 = 35.00, costhd2 = 35.00, costhd3 = 35.00, costhd4 = 35.00, costhd5 = 35.00;
	 cout<<"\n\nSelect type of Hot Drinks:"<<endl<<endl;
     cout<<"\n No.           NAME                        PRICE          "<<endl;
     cout<<"\n -----------------------------------------------------------\n";
     cout<<"\n [1]		Coffee		         RUPEES "<<costhd1<<"  "<<endl;
	 cout<<"\n [2]		Green Tea		 Rupees "<<costhd2<<"  "<<endl;
     cout<<"\n [3]		Hot Chocolate		 Rupees "<<costhd3<<"  "<<endl;
     cout<<"\n [4]		Tea	                 Rupees "<<costhd4<<"  "<<endl;
     cout<<"\n [5]		Black tea		 Rupees "<<costhd5<<"  "<<endl;
     cout<<"\n [6]		Cancel purchasing			     "<<endl;
     cout<<"\nEnter Your choice : ";

}

class DrinkTwo: public MainMenu
{
public:
	DrinkTwo();
	void showMenu();
private:
};
DrinkTwo::DrinkTwo()
{
}
void DrinkTwo::showMenu()
{
	double costCd1 = 25.00, costCd2 = 25.00, costCd3 = 25.00, costCd4 = 25.00, costCd5 = 25.00;
     cout<<"\n No.             NAME                      PRICE          "<<endl;
     cout<<"\n-----------------------------------------------------------\n";
     cout<<"\n [1]		Cold Coffee		  RUPEES "<<costCd1<<"  "<<endl;
	 cout<<"\n [2]		Lemonade		  RUPEES "<<costCd2<<"  "<<endl;
     cout<<"\n [3]		Iced Green tea		  RUPEES "<<costCd3<<"  "<<endl;
     cout<<"\n [4]		Ice tea	                  RUPEES "<<costCd4<<"  "<<endl;
     cout<<"\n [5]		Chocolate shake		  RUPEES "<<costCd5<<"  "<<endl;
     cout<<"\n [6]		Cancel purchasing			     "<<endl;
     cout<<"\nEnter Your choice : ";


}

class DrinkThree: public MainMenu
{
public:
	DrinkThree();
	void showMenu();
private:
};
DrinkThree::DrinkThree()
{
}
void DrinkThree::showMenu()
{
	 double costJ1 = 10.00, costJ2 = 10.00, costJ3 = 10.00, costJ4 = 10.00;
     cout<<"\n No.            NAME                        PRICE          "<<endl;
     cout<<"\n-----------------------------------------------------------\n";
     cout<<"\n [1]		Apple		           RUPEES "<<costJ1<<"  "<<endl;
	 cout<<"\n [2]		Strawberry		   RUPEES "<<costJ2<<"  "<<endl;
     cout<<"\n [3]		Mango		           RUPEES "<<costJ3<<"  "<<endl;
     cout<<"\n [4]		Orange	                   RUPEES "<<costJ4<<"  "<<endl;
     cout<<"\n [5]		Cancel purchasing		     "<<endl;
     cout<<"\nEnter Your choice : ";
}

void menuFunction();
void mainMenu();
void menuOne();
void menuTwo();
void menuThree();
void mealOne();
void mealTwo();
void mealThree();
void mealFour();
void drinkOne();
void drinkTwo();
void drinkThree();
void totalAmount();

int main()
{
    menuFunction();
	mainMenu();

	cout<<" =================================================== \n";  
	cout<<" ---------------------------------------------------\n";
	cout<<" |			  	                   | \n";           
	cout<<" |			  	                   | \n";
    cout<<" |                 Thank you.                      | "<<endl;
	cout<<" |              Have a great day !!!               |  "<<endl;
	cout<<" |			  	                   | \n";
	cout<<" |			  	                   | \n";
	cout<<" ---------------------------------------------------\n";
	cout<<" =================================================== \n"; 
}

void menuFunction()
{
    char userName[200];
    int contactNumber;
    char userAddress[200];

	cout<<" =============================================================\n";
	cout<<" |			  	                             |\n";
	cout<<" |			  	                             | \n";
    cout<<" |                    FOOD ORDERING SYSTEM                   |  "<<endl;
	cout<<" |			  	                             | \n";
	cout<<" |		  	                                     | \n";
	cout<<" =============================================================\n";
    
    cout<<"\n\n";
    cout<<"Please enter your name:  ";
    cin>>userName;
    cout<<endl;
    
	cout<<"\n";
    cout<<"Please enter your contact number:  ";
    cin>>contactNumber;
    cout<<endl;
    
	cout<<"\n";
    cout<<"Please enter your address that you wish to deliver:  ";
    cin>>userAddress;
    cout<<endl;
}  
void  mainMenu()
{
     int menu;
     MainMenu a;
	 
	 a.showMenu();
     cin>>menu;


	 if(menu == 1)
		 menuOne();
	 
	 else if(menu == 2)
	     menuTwo();
	  
	 else
	     mainMenu();
}

void menuOne()
{
     int meal;
	 MenuOne b;
     b.showMenu();
     cin>>meal;
     if(meal == 1)
		mealOne();
	 else if(meal == 2)
		mealTwo();
	 else if(meal == 3)
		mealThree();
	 else
		menuOne();
}
void menuTwo()
{
	 int drinks;
	 MenuTwo c;
     c.showMenu();
     cin>>drinks;
	 if(drinks == 1)
		drinkOne();
     else if(drinks == 2)
		drinkTwo();
     else if(drinks == 3)
        drinkThree();
     else
	    menuTwo();
}
void mealOne()
{
	int total, tax_total;
	int cost1 = 150, cost2 = 130, cost3 = 150, cost4 = 150, cost5 = 140;
     int burger;
	 int quantity1=0, quantity2=0, quantity3=0, quantity4=0, quantity5=0;
	 char purchase;
	 
     MealOne e;
     
	 e.showMenu();
	 
     cin>>burger;
                            
     switch (burger)
     {

	case 1:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity1;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity1*cost1);
						tax_total = total * 1.083;

                        cout << "Proceeding to check out..." << endl << endl;
	                    cout << "Your total is: 	Rupees" << total << endl;
	                    cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
            break;

	case 2:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity2;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity2*cost2);
						tax_total = total * 1.083;

                        cout << "Proceeding to check out..." << endl << endl;
	                    cout << "Your total is: 	Rupees" << total << endl;
	                    cout << "\nYour total after tax is: Rupees" << tax_total << endl;	
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 3:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity3;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			
			else if (purchase == 'n' || purchase == 'N')
			{

						total = (quantity3*cost3);
						tax_total = total * 1.083;

                        cout << "Proceeding to check out..." << endl << endl;
	                    cout << "Your total is: 	Rupees" << total << endl;
	                    cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 4:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity4;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			
			else if (purchase == 'n' || purchase == 'N')
			{

						total = (quantity4*cost4);
						tax_total = total * 1.083;

                        cout << "Proceeding to check out..." << endl << endl;
	                    cout << "Your total is: 	Rupees" << total << endl;
	                    cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 5:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity5;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;

			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			
			else if (purchase == 'n' || purchase == 'N')
			{

						total = (quantity5*cost5);
						tax_total = total * 1.083;

                        cout << "Proceeding to check out..." << endl << endl;
	                    cout << "Your total is: 	Rupees" << total << endl;
	                    cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 6:
                       total = (quantity1*cost1);
					   total = (quantity2*cost2);
					   total = (quantity3*cost3);
					   total = (quantity4*cost4);
					   total = (quantity5*cost5);
						tax_total = total * 1.083;

                        cout << "Proceeding to check out..." << endl << endl;
	                    cout << "Your total is: 	Rupees" << total << endl;
	                    cout << "\nYour total after tax is: Rupees" << tax_total << endl;
                        break;
	default:
						cout << "Selections must be between 1 and 6\n";
						mealOne();
			break;	
            }
        }
                        	 
void mealTwo()
{
	int total, tax_total;
	int costB1 = 370, costB2 = 280, costB3 = 290, costB4 = 290, costB5 = 370;
     int biryani;
	 int quantity6=0, quantity7=0, quantity8=0, quantity9=0, quantity10=0;
	 char purchase;
	 MealTwo f;
	 f.showMenu();
     cin>>biryani;               
     switch (biryani)
     {
	case 1:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity6;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity6*costB1);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
            break;

	case 2:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity7;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity7*costB2);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 3:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity8;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity8*costB3);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 4:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity9;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity9*costB4);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 5:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity10;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity10*costB5);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 6:
            {
					   total = (quantity6*costB1);
					   total = (quantity7*costB2);
					   total = (quantity8*costB3);
					   total = (quantity9*costB4);
					   total = (quantity10*costB5);
						tax_total = total * 1;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
                        break;
	default:
						cout << "Selections must be between 1 and 6\n";
						mealOne();
			break;	
            }
        }
}
                          
void mealThree()
{
	int total, tax_total;
	int costS1 = 80.00, costS2 = 85.00, costS3 = 90.00, costS4 = 80.00;
     int sandwich;
	 int quantity11=0, quantity12=0, quantity13=0, quantity14=0;
	 char purchase;
	 MealThree g;
	 g.showMenu();
     cin>>sandwich;                    
     switch (sandwich)
	 {
     case 1:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity11;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity11*costS1);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
            break;

	case 2:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity12;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity12*costS2);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 3:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity13;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity13*costS3);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 4:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity14;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity14*costS4);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
    case 5:
            {
					   total = (quantity11*costS1);
					   total = (quantity12*costS2);
					   total = (quantity13*costS3);
					   total = (quantity14*costS4);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
                        break;
	default:
						cout << "Selections must be between 1 and 6\n";
						mealOne();
			break;	
            }
        }
}
         	 
void drinkOne()
{
	double total, tax_total;
	double costhd1 = 35.00, costhd2 = 35.00, costhd3 = 35.00, costhd4 = 35.00, costhd5 = 35.00;
     int hotDrinks;
     int quantity21=0, quantity22=0, quantity23=0, quantity24=0, quantity25=0;
	 char purchase;
	  DrinkOne i;
	i.showMenu();
     cin>>hotDrinks;                            
     switch (hotDrinks)
	 {
     case 1:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity21;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity21*costhd1);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
            break;

	case 2:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity22;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity22*costhd2);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 3:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity23;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity23*costhd3);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 4:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity24;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity24*costhd4);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 5:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity25;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity25*costhd5);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 6:
                       total = (quantity21*costhd1);
					   total = (quantity22*costhd2);
					   total = (quantity23*costhd3);
					   total = (quantity24*costhd4);
					   total = (quantity25*costhd5);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
                        break;
	default:
						cout << "Selections must be between 1 and 6\n";
						drinkOne();
			break;	
            }
        }
                        
void drinkTwo()
{
	double total, tax_total;
	double costCd1 = 25.00, costCd2 = 25.00, costCd3 = 25.00, costCd4 = 25.00, costCd5 = 25.00;
     int coldDrinks;
     int quantity26=0, quantity27=0, quantity28=0, quantity29=0, quantity30=0;
	 char purchase;
	  DrinkTwo j;
     j.showMenu();
     cin>>coldDrinks;             
     switch (coldDrinks)
	 {
     case 1:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity26;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity26*costCd1);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
            break;

	case 2:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity27;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity27*costCd2);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;	
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 3:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity28;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity28*costCd3);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 4:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity29;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity29*costCd4);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 5:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity30;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity30*costCd5);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 6:
                       total = (quantity26*costCd1);
					   total = (quantity27*costCd2);
					   total = (quantity28*costCd3);
					   total = (quantity29*costCd4);
					   total = (quantity30*costCd5);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
                        break;
	default:
						cout << "Selections must be between 1 and 6\n";
						drinkOne();
			break;	
            }
        }
void drinkThree()
{
	double total, tax_total;
	double costJ1 = 10.00, costJ2 = 10.00, costJ3 = 10.00, costJ4 = 10.00;
     int juices;
     int quantity31=0, quantity32=0, quantity33=0, quantity34=0, quantity35=0;
	 char purchase;
	  DrinkThree k;
     k.showMenu();
     cin>>juices;           
     switch (juices)
	 {
     case 1:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity31;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity31*costJ1);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
            break;
	case 2:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity32;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity32*costJ2);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;	
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 3:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity33;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity33*costJ3);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 4:
                        cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> quantity34;
						cout << endl;
                        cout<<"Do you want to cancel your purchasing (y/n)? ";
			cin>>purchase;
			cout<<endl;
			if (purchase == 'y' || purchase == 'Y')
				mainMenu();
			else if (purchase == 'n' || purchase == 'N')
			{
						total = (quantity34*costJ4);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
			}
			else
				cout<<"Invalid Choice!"<<endl;
			break;
	case 5:
                       total = (quantity31*costJ1);
					   total = (quantity32*costJ2);
					   total = (quantity33*costJ3);
					   total = (quantity34*costJ4);
						tax_total = total * 1.083;
                        cout << "Proceeding to check out..." << endl << endl;
						cout << "Your total is: Rupees" << total << endl;
						cout << "\nYour total after tax is: Rupees" << tax_total << endl;
                        break;
	default:
						cout << "Selections must be between 1 and 6\n";
						drinkOne();
			break;	
            }
        }

void totalAmount()
{
	double amount1, total;
	int quantity1;
	amount1=quantity1*10;
	total=amount1;
}
