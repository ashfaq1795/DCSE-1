#include<iostream>
#include<conio.h>
#include<fstream>
#include<windows.h>		//header file for full screen
#include<string>
using namespace std;

struct Meesni
{
	string room_no, type, Bed, status;
	int rent;
};
struct Booking
{
	unsigned long long int cnic;
	string name, indate;
	int days, trent, adv, rrent;
};
void splash();
void intro();
void MAINMENU();
void admin();
void addroom();
bool showall();
bool showavail();
void dellall();
void dellspecific();
void modify();
void book();
void showuser();





int main()
{
	splash();
	MAINMENU();
	return 0;
}



void splash()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); // For full screen display
	system("color 70");
	system("cls");
	cout << "\t\t\t\t========================================================================================================" << endl;
	cout << "\t\t\t\t--------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t========================================================================================================\n" << endl;
	cout << "\t\t\t\t\t\t\tH O T E L  M A N A G E M E N T  S Y S T E M\n";
	cout << "\t\t\t\t\t\t---------------------------------------------------------------------\n" << endl;
	cout << "\n\n\n\n\t\t\t\t\t\t============================================================";
	cout << "\n\t\t\t\t\t\t\tGroup Members\t\t\tARID Number ";
	cout << "\n\t\t\t\t\t\t============================================================";
	cout << "\n\n\t\t\t\t\t\t\tXYZ\t\t\tReg-NO ";
	cout << "\n\n\t\t\t\t\t\t\tXYZ\t\t\tReg-NO ";
	_getch();
}
void intro()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); // For full screen display
	system("color f9");
	system("cls");
	cout << "\t\t\t\t========================================================================================================" << endl;
	cout << "\t\t\t\t--------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t========================================================================================================\n" << endl;
	cout << "\t\t\t\t\t\t\t H O T E L  M A N A G E M E N T  S Y S T E M\n";
	cout << "\t\t\t\t\t\t---------------------------------------------------------------------\n" << endl;
}
void MAINMENU()
{
	int mchoice;
menu:
	intro();
	cout << "\n\t\t\t\t\t\t\t\t\tM A I N  M E N U \n\n" << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t*Select An option* \n" << endl;
	cout << "\t\t\t\t\t\t\t\t\t1 =>\tBOOK A ROOM\n\n\t\t\t\t\t\t\t\t\t2 =>\tAvailable ROOMS\n\n\t\t\t\t\t\t\t\t\t3 =>\tUser Information";
	cout << "\n\n\t\t\t\t\t\t\t\t\t4 =>\tAdministration\n\n\t\t\t\t\t\t\t\t\t5 =>\tEXIT " << endl;
	cin >> mchoice;
	while (cin.fail())      //avoiding character input
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "\aYou can only enter INTEGERS.\n\n";
		cout << "Please Choose Again \t==>\t";
		cin >> mchoice;
	}
	switch (mchoice)
	{
	case 1:
		intro();
		if(showavail())
		book();
		goto menu;
		break;
	case 2:
		intro();
		showavail();
		goto menu;
		break;
	case 3:
		intro();
		showuser();
		goto menu;
		break;
	case 4:
		admin();
		goto menu;
		break;
	case 5:
		intro();
		cout <<
			"Thanks for Visit..... GOOD BYE!!!";
		_getch();
		break;
	default:
		cout << "You Choosed Wrong option .\tPress any key to Choose Again\n";
		_getch();
		goto menu;
		break;
	}
}
void admin()
{
	int pass, mchoice;
	intro();
	system("color fc");
pass:
	cout << endl << "\t\t\t Enter PIN to access ";
	cin >> pass;
	while (cin.fail())      //avoiding character input
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "\n\aYou can only enter INTEGERS.\n\n";
		cout << "\t\t\t Please Enter Again \t==>\t";
		cin >> pass;
	}
	if (pass == 12345)
	{
	xyz:
		system("cls");
		intro();
		system("color fc");
		cout << "\n\t\t\t\t\t\t\t\t\tADMINISTRATOR MENU \n\n\n\n" << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t*Select An option* \n" << endl;
		cout << "\n\n\t\t\t\t\t\t\t\t1 =>\tAdd Room\n\n\t\t\t\t\t\t\t\t2 =>\tShow All Rooms\n\n\t\t\t\t\t\t\t\t3 =>\tShow Available Rooms\n\n\t\t\t\t\t\t\t\t4 =>\tModify Room\n\n\t\t\t\t\t\t\t\t5 =>\tDelete All Rooms\n\n\t\t\t\t\t\t\t\t6 =>\tDelete Specific Room\n\n\t\t\t\t\t\t\t\t7 =>\tExit To Main Menu" << endl;
		cin >> mchoice;
		while (cin.fail())      //avoiding character input
		{
			cin.clear(); // clear input buffer to restore cin to a usable state
			cin.ignore(INT_MAX, '\n'); // ignore last input
			cout << "\aYou can only enter INTEGERS.\n\n";
			cout << "Please Choose Again \t==>\t";
			cin >> mchoice;
		}
		cout << endl;
		switch (mchoice)
		{
		case 1:
			intro();
			system("color fc");
			addroom();
			_getch();
			goto xyz;
			break;
		case 2:
			intro();
			system("color fc");
			showall();
			_getch();
			goto xyz;
			break;
		case 3:
			intro();
			system("color fc");
			showavail();
			_getch();
			goto xyz;
			break;
		case 4:
			intro();
			system("color fc");
			if(showall())
			modify();
			goto xyz;
			break;
		case 5:
			intro();
			system("color fc");
			dellall();
			goto xyz;
			break;
		case 6:
			intro();
			system("color fc");
			if(showall())
			dellspecific();
			goto xyz;
			break;
		case 7:
			goto abc;
			break;
		default:
			cout << "You choose Wrong option .\tPress any key to Choose Again\n";
			_getch();
			goto xyz;
		}
		_getch();
	}
	else
	{
		cout << endl << "\t\t\t You Enter Wrong Password ";
		cout << endl << "\t\t\t If You want to try again press Y/y or any other key to exit ";
		switch (_getche())
		{
		case 'y':
		case'Y':
			goto pass;
			break;
		}
	}
abc:
	cout << "";
}
void addroom()
{
	Meesni m, m1;
	cout << "Enter Room No: \t\t\t";
	getline(cin, m.room_no);
	getline(cin, m.room_no);
room:
	int a = 0;
	ifstream check("Meesni.txt");
	if (check.is_open())
	{
		while (!check.eof())
		{
			check >> m1.room_no >> m1.type >> m1.Bed >> m1.rent >> m1.status;
			if (!check.eof())
			{
				if (m.room_no == m1.room_no)
				{
					a = 1;
				}
			}
		}
		if (a == 1)
		{
			cout << "\nThis Room No. is already Inserted Please enter any other Room No\n";
			check.close();
			cout << "Enter Room No: \t\t\t";
			getline(cin, m.room_no);
			goto room;
		}
		check.close();
	}


	cout << "Enter Room Type: \t\t";
	getline(cin, m.type);
	cout << "Enter Room Capacity:\t\t";
	getline(cin, m.Bed);
	cout << "Enter Room Rent Per Day: \t";
	cin >> m.rent;
	while (cin.fail())      //avoiding character input
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "\aYou can only enter INTEGERS.\n\n";
		cout << "Please Enter Again \t==>\t";
		cin >> m.rent;
	}
	cout << "Enter Room Status: \t\t";
	getline(cin, m.status);
	getline(cin, m.status);
	ofstream add("Meesni.txt", ios::app);
	add << m.room_no << "\t" << m.type << "\t" << m.Bed << "\t" << m.rent << "\t" << m.status << "\n";
	add.close();
	cout << "Data Successfully Added!!";
}
bool showall()
{
	int a = 0;
	Meesni m;
	ifstream show("Meesni.txt");
	if (show.is_open())
	{
		cout << "======================================================================================================================\n";
		cout << "\tRoom No. \t Type \t\t Capacity\t Rent Per Day\t\t Room Status \n";
		cout << "======================================================================================================================\n";
		while (!show.eof())
		{
			show >> m.room_no >> m.type >> m.Bed >> m.rent >> m.status;
			if (!show.eof())
			{
				a = 1;
				cout << "\t" << m.room_no << "\t\t" << m.type << "\t\t" << m.Bed << " Person\t\t" << m.rent << "\t\t" << m.status << "\n";
			}
		}
	}
	else
	{
		cout << "No Data Found....";
		_getch();
		return false;
	}
	if (a == 0)
	{
		cout << "No Data Found....";
		_getch();
		return false;
	}
	return true;
}
bool showavail()
{
	int a = 0;
	Meesni m;
	ifstream show("Meesni.txt");
	if (show.is_open())
	{
		cout << "======================================================================================================================\n";
		cout << "\tRoom No. \t Type \t\t Capacity\t Rent Per Day\t\t Room Status \n";
		cout << "======================================================================================================================\n";
		while (!show.eof())
		{
			show >> m.room_no >> m.type >> m.Bed >> m.rent >> m.status;
			if (!show.eof())
			{
				if (m.status == "Available" || m.status == "available")
				{
					a = 1;
					cout << "\t" << m.room_no << "\t\t" << m.type << "\t\t" << m.Bed << " Person\t\t" << m.rent << "\t\t" << m.status << "\n";
				}
				
			}
		}
	}

	if (a == 0)
	{
		cout << "No Available Room Found....";
		_getch();
		return false;
	}
	_getch();
	return true;
}
void dellall()
{
	char op;
	cout << "Are you sure you want to delete all rooms" << endl;
	cout << "Press Y for yes or press any other key to go in menu ";
	cin >> op;
	if (op == 'Y' || op == 'y')
	{
		ofstream del("Meesni.txt", ios::trunc);
		del.close();
		cout << "Rooms Succrsfully deleted Press any key to go back " << endl;
		_getch();
	}
}
void dellspecific()
{
	Meesni m;
	char op;
again:
	string delroom;
	cout << "Enter Room No you want to delete:\t";
	getline(cin, delroom);
	getline(cin, delroom);
	int a = 0;
	ofstream modfile1("temp.txt", ios::app);
	ifstream modfile("Meesni.txt");
	if (modfile.is_open())
	{
		while (!modfile.eof())
		{
			modfile >> m.room_no >> m.type >> m.Bed >> m.rent >> m.status;
			if (!modfile.eof())
			{
				if (m.room_no == delroom)
				{
					a = 1;
				}
				else
				{
					modfile1 << m.room_no << "\t" << m.type << "\t" << m.Bed << "\t" << m.rent << "\t" << m.status << "\n";
				}
			}
		}
	}
	modfile.close();
	modfile1.close();

	remove("Meesni.txt");
	system("rename temp.txt Meesni.txt");
	if (a == 0)
	{
		cout << "You enter wrong Room No. \n";
		cout << "\n Press Y/y If you want to try again:\t ";
		cin >> op;
		switch (op)
		{
		case 'Y':
		case 'y':
			goto again;
		default:
			break;
		}
	}
	else
	{
		cout << "Room Successfully deleted \n";
	}
	cout << "\n Press Any Key to go back in admisntration menu ";
	_getch();
}
void modify()
{
	Meesni m;
	char op;
again:
	string modroom;
	cout << "Enter Room No you want to Modify:\t";
	getline(cin, modroom);
	getline(cin, modroom);
	int a = 0, x = 0;
	ofstream modfile1("temp.txt", ios::app);
	ifstream modfile("Meesni.txt");
	if (modfile.is_open())
	{
		while (!modfile.eof())
		{
			modfile >> m.room_no >> m.type >> m.Bed >> m.rent >> m.status;
			if (!modfile.eof())
			{
				if (m.room_no == modroom)
				{
					char mchoice;
				again1:
					a = 1;
					system("cls");
					intro();
					system("color fc");
					cout << "\n\t\t\t\t\t\t\t\t\tADMINISTRATOR MENU \n\n\n\n" << endl;
					cout << "\n\t\t\t\t\t\t\t\t\t*Select An option* \n" << endl;
					cout << "\n\n\t\t\t\t\t\t\t\t1 =>\tRoom Type\n\n\t\t\t\t\t\t\t\t2 =>\tRoom Capacity\n\n\t\t\t\t\t\t\t\t3 =>\tRent Per Day\n\n\t\t\t\t\t\t\t\t4 =>\tRoom Status\n\n\t\t\t\t\t\t\t\t5 =>\tGo Back" << endl;
					cin >> mchoice;
					switch (mchoice)
					{
					case '1':
						cout << "Enter Room Type: \t\t";
						getline(cin, m.type);
						getline(cin, m.type);
						modfile1 << m.room_no << "\t" << m.type << "\t" << m.Bed << "\t" << m.rent << "\t" << m.status << "\n";
						break;
					case '2':
						cout << "Enter Room Capacity:\t\t";
						getline(cin, m.Bed);
						getline(cin, m.Bed);
						modfile1 << m.room_no << "\t" << m.type << "\t" << m.Bed << "\t" << m.rent << "\t" << m.status << "\n";
						break;
					case '3':
						cout << "Enter Room Rent Per Day: \t";
						cin >> m.rent;
						while (cin.fail())      //avoiding character input
						{
							cin.clear(); // clear input buffer to restore cin to a usable state
							cin.ignore(INT_MAX, '\n'); // ignore last input
							cout << "\aYou can only enter INTEGERS.\n\n";
							cout << "Please Enter Again \t==>\t";
							cin >> m.rent;
						}
						modfile1 << m.room_no << "\t" << m.type << "\t" << m.Bed << "\t" << m.rent << "\t" << m.status << "\n";
						break;
					case '4':
						cout << "Enter Room Status: \t\t";
						getline(cin, m.status);
						getline(cin, m.status);
						modfile1 << m.room_no << "\t" << m.type << "\t" << m.Bed << "\t" << m.rent << "\t" << m.status << "\n";
						break;
					case '5':
						x = 1;
						modfile1 << m.room_no << "\t" << m.type << "\t" << m.Bed << "\t" << m.rent << "\t" << m.status << "\n";
						break;
					default:
						cout << "You enter wrong Option \n";
						cout << "\n Please try again:\t ";
						goto again1;
						break;
					}
				}
				else
				{
					modfile1 << m.room_no << "\t" << m.type << "\t" << m.Bed << "\t" << m.rent << "\t" << m.status << "\n";
				}
			}
		}
	}
	modfile.close();
	modfile1.close();
	remove("Meesni.txt");
	system("rename temp.txt Meesni.txt");
	if (a == 0)
	{
		cout << "You enter wrong Room No. \n";
		cout << "\n Press Y/y If you want to try again:\t ";
		cin >> op;
		switch (op)
		{
		case 'Y':
		case 'y':
			goto again;
		default:
			break;
		}
	}
	if (x == 1)
	{
		goto abc;
	}
	else
	{
		cout << "Room Successfully Modified \n";
	}
	cout << "\n Press Any Key to go back in admisntration menu ";
	_getch();
abc:
	cout << "";
}
void book()
{
	string broom;
	int a = 0;
	Meesni m;
	Booking b;
	cout << "Enter Room No. you want to Book:\t";
	getline(cin, broom);
	getline(cin, broom);
back:
	ifstream show("Meesni.txt");
	ofstream temp("temp.txt", ios::app);
	ofstream reporter("Reporter.txt", ios::app);
	if (show.is_open())
	{
		while (!show.eof())
		{
			show >> m.room_no >> m.type >> m.Bed >> m.rent >> m.status;
			if (!show.eof())
			{
				if (m.status == "Available" && m.room_no == broom)
				{
					a = 1;
					intro();
					cout << "Enter your CNIC without - :\t";
					cin >> b.cnic;
					while (cin.fail())      //avoiding character input
					{
						cin.clear(); // clear input buffer to restore cin to a usable state
						cin.ignore(INT_MAX, '\n'); // ignore last input
						cout << "\aYou can only enter INTEGERS.\n\n";
						cout << "Please Enter Again \t==>\t";
						cin >> b.cnic;
					}
					cout << "Enter your Name:\t\t";
					getline(cin, b.name);
					getline(cin, b.name);
					cout << "Enter Check in date(dd-mm-yy):\t";
					getline(cin, b.indate);
					cout << "How many days you want to stay:\t";
					cin >> b.days;
					b.trent = m.rent*b.days;
					b.adv = b.trent * 30 / 100;
					b.rrent = b.trent - b.adv;
					cout << "Your Total rent is: " << b.trent << endl;
					cout << "Kindly Pay " << b.adv << " Rs. in advance to book the Room";
					_getch();
					reporter << b.cnic << "\t" << b.name << "\t" << m.room_no << "\t" << b.indate << "\t" << b.days << "\t" << b.trent << "\t" << b.adv << "\t" << b.rrent << "\n";
					temp << m.room_no << "\t" << m.type << "\t" << m.Bed << "\t" << m.rent << "\t" << "Booked" << "\n";
				}
				else
				{
					temp << m.room_no << "\t" << m.type << "\t" << m.Bed << "\t" << m.rent << "\t" << m.status << "\n";
				}
			}
		}
	}
	show.close();
	temp.close();
	reporter.close();

	remove("Meesni.txt");
	system("rename temp.txt Meesni.txt");

	if (a == 1)
	{
		cout << "\nThanks for Booking the room..\n";
	}
	else
	{
		char op;
		cout << "You Enter Incorrect Room no. Press Y/y to enter again:\t";
		cin >> op;
		switch (op)
		{
		case 'y':
		case 'Y':
			cout << "Enter Room No. you want to Book:\t";
			getline(cin, broom);
			getline(cin, broom);
			goto back;
			break;
		default:
			break;
		}
	}
}
void showuser()
{
	int a = 0;
	Meesni m;
	Booking b;
	unsigned long long int ucnic;
	cout << "Enter your CNIC without - :\t";
	cin >> ucnic;
	while (cin.fail())      //avoiding character input
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "\aYou can only enter INTEGERS.\n\n";
		cout << "Please Enter Again \t==>\t";
		cin >> ucnic;
	}
	ifstream book("Reporter.txt");
	if (book.is_open())
	{
		cout << "=============================================================================================================================================================\n";
		cout << "\t\tCNIC. \t NAME \t\t ROOM NO\t Check In \t Stayed \t Total Rent \t Advance Paid \t Remainig Balance \n";
		cout << "=============================================================================================================================================================\n";
		while (!book.eof())
		{
			book >> b.cnic >> b.name >> m.room_no >> b.indate >> b.days >> b.trent >> b.adv >> b.rrent;
			if (!book.eof())
			{
				if (b.cnic == ucnic)
				{
					a = 1;
					cout << "\t" << b.cnic << "\t" << b.name << "\t\t" << m.room_no << "\t\t" << b.indate << "\t" << b.days << " days" << "\t\t" << b.trent << "\t\t" << b.adv << "\t\t" << b.rrent << "\n";
				}
			}
		}
	}
	else
	{
		cout << "No Record Found....";
	}
	if (a == 0)
		cout << "No Record Found....";
	_getch();
}
