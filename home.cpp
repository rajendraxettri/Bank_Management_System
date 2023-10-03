#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class homeClass{
public:

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);


void welcome(){
    cout<<"\t\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t\t=============   ==========    ==========     ==        ==       =========           ==           ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t\t     ==         ==            ==             ==        ==       ==       ==        =  =          == =         ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t\t     ==         ==            ==             ==        ==       ==       ==       =    =         ==   =       ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t\t     ==         =======       ==             ============       =========        ========        ==     =     ==    ===         "<<endl;Sleep(70);
    cout<<"\t\t\t     ==         ==            ==             ==        ==       ==       ==     =        =       ==       =   ==    ==  =       "<<endl;Sleep(70);
    cout<<"\t\t\t     ==         ==            ==             ==        ==       ==       ==    =          =      ==         = ==    ==    =     "<<endl;Sleep(70);
    cout<<"\t\t\t     ==         ==========    ==========     ==        ==       ==========    =            =     ==           ==    ==      =   "<<endl;Sleep(70);
    cout<<"\t\t\t=============================================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t\t\t\t\t\t\t\t               =         "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t\t             =====       "<<endl;Sleep(70);    
    cout<<"\t\t\t\t\t\t\t\t\t           =========     "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t\t         =============   "<<endl;Sleep(70);    
    cout<<"\t\t\t\t\t\t\t\t\t       ================= "<<endl;Sleep(70);      
    cout<<"\t\t\t\t\t\t\t\t\t         =============   "<<endl;Sleep(70);    
    cout<<"\t\t\t\t\t\t\t\t\t         ==  == ==  ==   "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t\t         ==  == ==  ==   "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t\t         ==  == ==  ==   "<<endl;Sleep(70);  
    cout<<"\t\t\t\t\t\t\t\t\t       =================  "<<endl;Sleep(70);   
    cout<<"\t\t\t\t\t\t\t\t\t       =================  "<<endl;Sleep(70);  
    SetConsoleTextAttribute(h,4);
	cout<<"\n\n\t\t\t\t\t\t\t\t\t";
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

};


int main()
{
    homeClass home;
    home.welcome();



return 0;
}//@rajendra_chimala