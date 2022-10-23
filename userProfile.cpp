#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void login();
void registr();

main()
{
        int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"               Public Transportation Passenger Page                      \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOG IN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.EXIT"<<endl;
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
						cout<<"Have a good journey!\n\n";
                        break;
        }
        
}

void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"Please enter the following informations"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;
        
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
        
                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nWelcome "<<user<<"\n";
                cin.get();
                cin.get();
                main();
        }
        else
        {
                cout<<"Please check your username and password\n";
                main();
        }
}

void registr()
{
        
        string reguser,regpass;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nCreate a password :";
        cin>>regpass;
        
        
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful. ";
        main();
        
        
}


