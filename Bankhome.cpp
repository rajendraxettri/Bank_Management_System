#include<iostream>
#include<conio.h>
#include<fstream>
#include<sstream>
#include<windows.h>
#include<string.h>
using namespace std;
class homeClass{
    public:
    int option;

//variable for create account section 
	string aNamef,aNamel,aDate, aPhone,aAddress,cID,iOffice,iDate,fNamef,mNamef,gNamef,fNamel,mNamel,gNamel;
    long int AB;
	//for deposit section variable 
	string dNamef,dNamel,dPhone,tdate;

	long int cardNo = 4070;
	long int cardPassword;


	long int damt,dAccount;

//Variable for  BALANCE INQUARY
long int AccountNo,AccountHolder;
	

//variable for account creation 

long int accountForATM;
public:

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	void issueAtmCard();
	void deposit();
	void create();
	void balanceInquiry();


void welcome(){
    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t\t\t\t\t\t\t         =          "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t       =====        "<<endl;Sleep(70);    
    cout<<"\t\t\t\t\t\t\t\t     =========      "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t   =============    "<<endl;Sleep(70);    
    cout<<"\t\t\t\t\t\t\t\t =================  "<<endl;Sleep(70);      
    cout<<"\t\t\t\t\t\t\t\t   =============    "<<endl;Sleep(70);    
    cout<<"\t\t\t\t\t\t\t\t   ==  == ==  ==    "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t   ==  == ==  ==    "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t   ==  == ==  ==    "<<endl;Sleep(70);  
    cout<<"\t\t\t\t\t\t\t\t =================  "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t =================  "<<endl;Sleep(70);  
    SetConsoleTextAttribute(h,4);
	cout<<"\n\n\t\t\t\t\t\t\t";
	cout<<"|";Sleep(60);
	cout<<"<";Sleep(60);
	cout<<"-";Sleep(60);
	cout<<"- ";Sleep(60);
	cout<<"W";Sleep(60);
    cout<<"E";Sleep(60);
    cout<<"L";Sleep(60);
	cout<<"C";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"M";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<" T";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<" T";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<"C";Sleep(60);
	cout<<"H";Sleep(60);
	cout<<" ";Sleep(60);
	cout<<"B";Sleep(60);
	cout<<"A";Sleep(60);
	cout<<"N";Sleep(60);
	cout<<"K";Sleep(60);
	cout<<"!";Sleep(60);
	cout<<" -";Sleep(60);
	cout<<"-";Sleep(60);	
	cout<<">";Sleep(60);
	cout<<"|";Sleep(60);
	getch();
}



void menu(){
	system("CLS");
	char a;

    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t======================================================< HOME MENU >============================================================= "<<endl;Sleep(70);
    SetConsoleTextAttribute(h,2);
    cout<<"\n\t\t================================================================================================================================ "<<endl<<endl;Sleep(70);

	cout<<"\t\t    ====================           ====================            =====================            ========================="<<endl;Sleep(80);
	cout<<"\t\t    ==      ***       ==           ==       ***      ==            ==        ***      ==            ==         ***         =="<<endl;Sleep(80);
	cout<<"\t\t    == CREATE ACCOUNT ==           == DEPOSIT AMOUNT ==            == BALANCE INQUARY ==            ==   ISSUE ATM CARD    =="<<endl;Sleep(80);
	cout<<"\t\t    ==                ==           ==                ==            ==                 ==            ==                     =="<<endl;Sleep(80);
	cout<<"\t\t    ==      |1|       ==           ==       |2|      ==            ==       |3|       ==            ==        |4|          =="<<endl;Sleep(80);
	cout<<"\t\t    ====================           ====================            =====================            ========================="<<endl<<endl<<endl;Sleep(80);
    
    cout<<"\t\t\t\t    =====================           ====================            ===================="<<endl;Sleep(80);
	cout<<"\t\t\t\t    ==       ***       ==           ==       ***      ==            ==       ***      =="<<endl;Sleep(80);
	cout<<"\t\t\t\t    == WITHDRAW AMOUNT ==           == SEARCH ACCOUNT ==            ==  ISSUE CHEQUE  =="<<endl;Sleep(80);
	cout<<"\t\t\t\t    ==                 ==           ==     HOLDERS    ==            ==                =="<<endl;Sleep(80);
	cout<<"\t\t\t\t    ==       |4|       ==           ==       |5|      ==            ==      |6|       =="<<endl;Sleep(80);
	cout<<"\t\t\t\t    =====================           ====================            ===================="<<endl<<endl;Sleep(80);

    cout<<"\t\t\t\t                     ====================          =======================  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                     ==       ***      ==          ==        ***        ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                     == SEARCH ACCOUNT ==          ==   DELETE ACCOUNT  ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                     ==     HOLDERS    ==          ==     :(            ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                     ==       |7|      ==          ==        |8|        ==  "<<endl;Sleep(80);
	cout<<"\t\t\t\t                     ====================          =======================  "<<endl;Sleep(80);
   
     SetConsoleTextAttribute(h,4);
	cout<<"\n\n\t\t\t\t\t\t\t";
	cout<<"|:) ";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<"N";Sleep(60);
	cout<<"T ";Sleep(60);
	cout<<"E";Sleep(60);
    cout<<"R";Sleep(60);
    cout<<" A";Sleep(60);
	cout<<"N";Sleep(60);
	cout<<"Y ";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"P";Sleep(60);
	cout<<"T";Sleep(60);
	cout<<"I";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"N";Sleep(60);
	cout<<" :-";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<":";Sleep(60);
	cout<<")";Sleep(60);
	cout<<"-";Sleep(60);	
	cout<<": ";Sleep(60);
    cin>>option;




    switch (option)
    {
		//Case for create Account 
    case 1:
		do{
		create();
		cout<<"\n\n\t\t\t|------------> CREATE ANOTHER ACCOUNT [Y/N] ";
			cin>>a;
		}while(a == 'Y' || a == 'y');
        break;

		//Case for Deposit Amount.

	case 2:
		deposit();
		menu();
		break;

		//Case for Balance Inquery.
	case 3:
		balanceInquiry();
		menu();
		break;

		//Default case it will execute when the all case will fail .
		

	
	
    
    default:
    system("CLS");
    cout<<"\t\t\t\t\tSORRY INVALIDE OPTION !"<<endl;
    menu();
    break;
    }
}

};


int main()
{
    homeClass home;
    home.welcome();
	home.menu();



return 0;
}//@rajendra_chimala


void homeClass::create(){
	system("CLS");
	fstream file;


    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\n\t\t===================================================< CREATE ACCOUNT >========================================================== "<<endl;Sleep(70);
    cout<<"\n\n\t\t\t|---------> ACCOUNT HOLDER NAME [First Name]: ";
	cin>>aNamef;
	cout<<"\n\n\t\t\t|---------> ACCOUNT HOLDER NAME [First Name]: ";
	cin>>aNamel; 
	 cout<<"\n\n\t\t\t|---------> ACCOUNT NUMBER : ";
	cin>>AccountNo; 
    cout<<"\n\t\t\t|---------> DATE OF BIRTH [YYYY/MM/DD]: ";
	cin>>aDate;
    cout<<"\n\t\t\t|---------> CONTACT NO : ";
	cin>>aPhone;
    cout<<"\n\t\t\t|---------> ADDRESS  OF ACCOUNT HOLDER :";
	cin>>aAddress;
	cout<<"\n\t\t\t|---------> CITIZENSHIP NO : ";
	cin>>cID;
    cout<<"\n\t\t\t|---------> ISSUING OFFICE : ";
	cin>>iOffice;
    cout<<"\n\t\t\t|---------> ISSUED DATE : ";
	cin>>iDate;
	cout<<"\n\t\t\t|---------> FATHER NAME [First Name]: ";
	cin>>fNamef;
	cout<<"\n\t\t\t|---------> FATHER NAME [Last Name]: ";
	cin>>fNamel;
	cout<<"\n\t\t\t|---------> MOTHER NAME [First Name] : ";
	cin>>mNamef;
	
	cout<<"\n\t\t\t|---------> MOTHER NAME [last Name] : ";
	cin>>mNamel;
	cout<<"\n\t\t\t|---------> GRAND FATHER NAME [First Name] : ";
	cin>>gNamef;
	cout<<"\n\t\t\t|---------> GRAND FATHER NAME [Last Name] : ";
	cin>>gNamel;
	cout<<"\n\t\t\t|---------> ENTER HOW MUCH YOU WANT DEPOSIT : $";
	cin>>AB;


	if(!file){

		cout<<"|----------> FILE NOT FOUND ! <------------|";
	}
	file.open("USER-DETAILS.txt", ios::out | ios::app);
	file<<aNamef<<" "<<aNamel<<"  " <<AccountNo<<" "<<AB<<" "<<"  "<<aPhone<<"  "<<aDate<<"  "<<aAddress<<"  "<<cID<<"  "<<iOffice<<"  "<<iDate<<"  "<<fNamef<<" "<<fNamel<<" "<<mNamef<<" "<<mNamel<<"  "<<gNamef<<" "<<gNamel<<"\n";
	file.close();



system("CLS");

cout<<"ACCOUNT OPEN SUCCESSFULLY !";
getch();




}


void homeClass::deposit() {
    system("CLS");
  
	cout << "\n\t\t|========================> ENTER TODAYS DATE : ";
	cin>>tdate;
    cout << "\n\t\t|========================> ENTER DEPOSIT AMOUNT : ";
    cin >> damt;
    cout << "\n\t\t|========================> ACCOUNT NO : ";
    cin >> dAccount;
    cout << "\n\t\t|========================> ENTER DEPOSITOR NAME [FIRST NAME]: ";
    cin >> dNamef;
    cout << "\n\t\t|========================> ENTER DEPOSITOR NAME [LAST NAME]: ";
    cin >> dNamel;
    cout << "\n\t\t|========================> ENTER DEPOSITOR PHONE NO [+977-] : ";
    cin >> dPhone;

    fstream file;
    file.open("USER-DETAILS.txt", ios::in);

    if (!file) {
        cout << "\n\n|-----------------------------> RECORD DOES NOT FOUND !";
        return; 
    }

    fstream file1;
    file1.open("tempfile.txt", ios::app | ios::out);
	file >> aNamef >> aNamel >> AccountNo >> AB >> aPhone >> aDate >> aAddress >> cID >> iOffice >> iDate >> fNamef >> fNamel >> mNamef >> mNamel >> gNamef >> gNamel;


    while(!file.eof()) {
        if (AccountNo != dAccount) {
            file1 << aNamef << " " << aNamel << "  " << AccountNo << " " << AB << "  " << aPhone << "  " << aDate << "  " << aAddress << "  " << cID << "  " << iOffice << "  " << iDate << "  " << fNamef << " " << fNamel << " " << mNamef << " " << mNamel << "  " << gNamef << " " << gNamel << "\n";
        }
        else {
            AB += damt;
            file1 << aNamef << " " << aNamel << "  " << AccountNo << " " << AB << "  " << aPhone << "  " << aDate << "  " << aAddress << "  " << cID << "  " << iOffice << "  " << iDate << "  " << fNamef << " " << fNamel << " " << mNamef << " " << mNamel << "  " << gNamef << " " << gNamel << "\n";
			fstream history;
			history.open("HISTORY.txt", ios::out|ios::app);

			history<<AccountNo<<"  "<<tdate<<"  "<<dNamef<<" "<<dNamel<<"  "<<dPhone<<"  RECEIVED  ! \n";


            cout << "Account Deposit successfully !\n";
			getch();
			break;
        }
    }

    file1.close();
    file.close();
    remove("USER-DETAILS.txt");
    rename("tempfile.txt", "USER-DETAILS.txt");
}


void homeClass::balanceInquiry() {
    system("CLS");

    cout << "\n\t\t==========================< BALANCE INQUIRY >==========================" << endl;
   
    ifstream file("USER-DETAILS.txt");

    if (!file) {
        cout << "\n\t\tError opening File !" << endl;
        return;
    }

    long int inputAc;
    cout << "\n\t\t|----------------------------> Enter Account Number  : ";
    cin >> inputAc;

    bool found = false;

    string line;
    while (getline(file, line)) {
        istringstream iss(line);

        if (iss >> aNamef >> aNamel >> AB >> AccountNo >> aPhone) {
            if (AccountNo == inputAc) {
                found = true;
                cout << "\n\t\tName : " << aNamef << " " << aNamel << endl;
                cout << "\t\tContact No  : " << aPhone << endl;
                cout << "\t\tAccount No : " << AccountNo << endl;
                cout << "\t\tBalance  : " << AB << endl;
                break;
            }
        }
    }

    if (!found)
        cout << "\n\t\t|---------------------------> Account Record Not Found !" << endl;

    file.close();
}






void homeClass::issueAtmCard(){

		system("CLS");
	fstream file;


    cout<<"\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
  cout<<"\n\t\t===================================================< ISSUE ATM CARD >========================================================== "<<endl;Sleep(70);
	cout<<"\n\t\t\t|---------> ENTER YOUR ACCOUNT NUMBER : ";
cin>>accountForATM;




}
	
