#include <iostream>
#include <string>
#include <conio.h>            
#include <Windows.h>

using namespace std;
int main();
struct regular_patient
{
    int size = 100;
    int rare = -1;
    int front = -1;

    string *arrcnic = new string[size];
    string *arrname = new string[size];
    int *arrage = new int[size];
    string *arrbloodgrp = new string[size];
    string *arrdisease = new string[size];
    string *arrcontact = new string[size];

    bool insertdata()
    {
        system("cls");
        int age;
        string name, cnic, bloodgrp, disease, contact;

        if (rare == size - 1)
        {
            cout << " OVERFLOW ";
            return false;
        }
        else if (rare == -1 && front == -1)
        {
            front = 0;
            rare = 0;

            cout << " Enter the Name of patient ";
            cin >> arrname[rare];
            cout << " Enter the CINC of patient ";
            cin >> arrcnic[rare];
            cout << " Enter the Age of patient ";
            cin >> arrage[rare];
            cout << " Enter the Blood Group  of patient ";
            cin >> arrbloodgrp[rare];
            cout << " Enter the Disease of patient ";
            cin >> arrdisease[rare];
            cout << " Enter the Contact  of patient ";
            cin >> arrcontact[rare];
            rare++;
            return true;
        }
        else
        {
            

            cout << " Enter the Name of patient ";
            cin >> name;
            arrname[rare] = name;
            cout << " Enter the CINC of patient ";
            cin >> cnic;
            arrcnic[rare] = cnic;
            cout << " Enter the Age of patient ";
            cin >> age;
            arrage[rare] = age;
            cout << " Enter the Blood Group  of patient ";
            cin >> bloodgrp;
            arrbloodgrp[rare] = bloodgrp;
            cout << " Enter the Disease of patient ";
            cin >> disease;
            arrdisease[rare] = disease;
            cout << " Enter the Contact  of patient ";
            cin >> contact;
            arrcontact[rare] = contact;

            rare++;
            return true;
   getche;     }
    }
    bool deletedata()
    {
        system("cls");
        int fr = front;
        if (fr == -1)
        {
            return false;
        }
        else
        {
            if (front == -1 && rare == -1)
            {
                cout << " UNDERFLOW ";
                return false;
            }
            else
            {
                
            
                string name = arrname[front];
            
              cout<<" Patient is ready of check up "<<endl;
                  cout << "Name Of patient  " << arrname[fr] << endl;
                cout << "CINC of patient " << arrcnic[fr] << endl;
                cout << " Age of patient is " << arrage[fr] << endl;
                cout << "Blood group of patient is " << arrbloodgrp[fr] << endl;
                cout << "Disease of patient is " << arrdisease[fr] << endl;
                cout << " Contact of patient is " << arrcontact[fr] << endl;
                cout << endl;
                front++;
                return true;
            }
        }
   getche;
    }
    void displaydata()
    {
    
        int fr = front;
        if (fr == -1)
        {
            cout << " >>>NO Record Entered" << endl;
            cout << endl;
        }
        else
        {
            while (fr != rare)
             {
                cout << "Name Of patient  " << arrname[fr] << endl;
                cout << "CINC of patient " << arrcnic[fr] << endl;
                cout << " Age of patient is " << arrage[fr] << endl;
                cout << "Blood group of patient is " << arrbloodgrp[fr] << endl;
                cout << "Disease of patient is " << arrdisease[fr] << endl;
                cout << " Contact of patient is " << arrcontact[fr] << endl;
                cout << endl;
                fr++;
            }
            cout << endl;
        }
   getche;
    }
    bool update()
    {
        int fr = front;
        if (fr == -1)
        {
            return false;
        }
        else
        {
            int newage;
             string oldName, newName, newcnic, oldcnic, newbloodgrp, newdisease, newcontact;
            cout << " Enter the Name of patient to update: ";
            cin >> oldName;

            cout << " Enter the new name of patient to update: ";
            cin >> newName;
            cout << " Enter the CNIC of patient to update: ";
            cin >> oldcnic;
            cout << " Enter the New CNIC of patient to update: ";
            cin >> newcnic;
            cout << " Enter the New age of patient to update: ";
            cin >> newage;
            cout << " Enter the New Blood Group of patient to update: ";
            cin >> newbloodgrp;
            cout << " Enter the New disease of patient to update: ";
            cin >> newdisease;
            cout << " Enter the New Contact of patient to update: ";
            cin >> newcontact;
            
            while (fr != rare)
            {
                if (arrname[fr] == oldName && arrcnic[fr] == oldcnic)
                {
                    arrname[fr] = newName;
                     arrcnic[fr] = newcnic;
                    arrage[fr] = newage;
                    arrbloodgrp[fr] = newbloodgrp;
                    arrdisease[fr] = newdisease;
                    arrcontact[fr] = newcontact;
                    break;
                }
                else
                {
                fr++;
                    cout << ">>>No record found!!" << endl;
                    cout << endl;
                  
                }
            }
            cout << endl;
            return true;
        }
    }
};
void regular_patients()
{


 
     system("cls");
    regular_patient s1;
    
    int choice;
    bool flag = true;

    while (flag)
    {
        system("cls");
        cout << "Press 1 for Enter data of Patient" << endl;
        cout << "Press 2 for Display data of Patient " << endl;
        cout << "Press 3 for Update data of Patient" << endl;
        cout << "Press 4 which Patient is ready for  check up   " << endl;
        cout << "Press 5 Go Back to  Main_Menu " << endl;
        cout << "\nEnter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (s1.insertdata())
            {
                cout << "\n>>>Data Inserted Successfully!!"<<endl << endl;
            }
            else
            {
                cout << "\n>>>Data couldn't insert Successfully " <<endl<< endl;
            }
            break;

        case 2:
            s1.displaydata();
            break;
        case 3:
            if (s1.update())
            {
                cout << "\n>>>Data Updated Successfully!!" <<endl<< endl;
            }
            else
            {
                cout << "\n>>>No Record found " <<endl<< endl;
            }
            break;
        case 4:
            if (s1.deletedata())
            {
               // cout << "\n>>>Data Deleted Successfully" <<endl<< endl;
                cout << endl;
            }
            else
            {
                cout << "\n>>>No Record Found!! " <<endl<< endl;
                cout << endl;
            }
            break;
        case 5:
            main();
            break;
        default:
            cout << " \n>>>Invalid Inputs Try again!!" << endl<<endl;
        }
    }

}

struct Emergence_case
{
    int size = 100;
    int rare = -1;
    int front = -1;

    string *arrcnic = new string[size];
    string *arrname = new string[size];
    int *arrage = new int[size];
    string *arrbloodgrp = new string[size];
    string *arrdisease = new string[size];
    string *arrcontact = new string[size];

    bool insertdata()
    {
        int age;
        string name, cnic, bloodgrp, disease, contact;

        if (rare == size - 1)
        {
            cout << " OVERFLOW ";
            return false;
        }
        else if (rare == -1 && front == -1)
        {
            front = 0;
            rare = 0;

            cout << " Enter the Name of patient ";
            cin >> arrname[rare];
            cout << " Enter the CINC of patient ";
            cin >> arrcnic[rare];
            cout << " Enter the age of patient ";
            cin >> arrage[rare];
            cout << " Enter the Blood Group  of patient ";
            cin >> arrbloodgrp[rare];
            cout << " Enter the Disease of patient ";
            cin >> arrdisease[rare];
            cout << " Enter the contact  of patient ";
            cin >> arrcontact[rare];
            rare++;
            return true;
        }
        else
        {

            cout << " Enter the Name of patient ";
            cin >> name;
            arrname[rare] = name;
            cout << " Enter the CINC of patient ";
            cin >> cnic;
            arrcnic[rare] = cnic;
            cout << " Enter the age of patient ";
            cin >> age;
            arrage[rare] = age;
            cout << " Enter the Blood Group  of patient ";
            cin >> bloodgrp;
            arrbloodgrp[rare] = bloodgrp;
            cout << " Enter the Disease of patient ";
            cin >> disease;
            arrdisease[rare] = disease;
            cout << " Enter the contact  of patient ";
            cin >> contact;
            arrcontact[rare] = contact;

            rare++;
            return true;
        }
    }
    bool deletedata()
    {
        int fr = front;
        if (fr == -1)
        {
            return false;
        }
        else
        {
            if (front == -1 && rare == -1)
            {
                cout << " UNDERFLOW ";
                return false;
            }
            else
            {
                string name = arrname[front];
                rare--;

                cout << " Patient is ready of check up " << endl;
                cout << "Name Of patient " << arrname[rare] << endl;
                cout << "CINC of patient " << arrcnic[rare] << endl;
                cout << " Age of patient is " << arrage[rare] << endl;
                cout << "Blood group of patient is " << arrbloodgrp[rare] << endl;
                cout << "Disease of patient is " << arrdisease[rare] << endl;
                cout << " Contact of patient is " << arrcontact[rare] << endl;
                cout << endl;

                return true;
            }
        }
    }
    void displaydata()
    {
        int fr = front;
        if (fr == -1)
        {
            cout << " NO Record enter" << endl;
            cout << endl;
        }
        else
        {
            while (fr != rare)
            {
                // cout<<" Patient is ready of check up "<<endl;
                cout << "Name Of patient " << arrname[fr] << endl;
                cout << "CINC of patient " << arrcnic[fr] << endl;
                cout << " Age of patient is " << arrage[fr] << endl;
                cout << "Blood group of patient is " << arrbloodgrp[fr] << endl;
                cout << "Disease of patient is " << arrdisease[fr] << endl;
                cout << " Contact of patient is " << arrcontact[fr] << endl;
                cout << endl;

                fr++;
            }
            cout << endl;
        }
    }
    bool update()
    {
        int fr = front;
        if (fr == -1)
        {
            return false;
        }
        else
        {
            int newage;
            string oldName, newName, newcnic, oldcnic, newbloodgrp, newdisease, newcontact;
            cout << " Enter the Name of patient to update: ";
            cin >> oldName;

            cout << " Enter the new name of patient to update: ";
            cin >> newName;
            cout << " Enter the CNIC of patient to update: ";
            cin >> oldcnic;
            cout << " Enter the New CNIC of patient to update: ";
            cin >> newcnic;
            cout << " Enter the New age of patient to update: ";
            cin >> newage;
            cout << " Enter the New Blood Group of patient to update: ";
            cin >> newbloodgrp;
            cout << " Enter the New disease of patient to update: ";
            cin >> newdisease;
            cout << " Enter the New Contact of patient to update: ";
            cin >> newcontact;
            int fr = front;
            while (fr != rare)
            {
                if (arrname[fr] == oldName && arrcnic[fr] == oldcnic)
                {
                    arrname[fr] = newName;
                    arrcnic[fr] = newcnic;
                    arrage[fr] = newage;
                    arrbloodgrp[fr] = newbloodgrp;
                    arrdisease[fr] = newdisease;
                    arrcontact[fr] = newcontact;
                    break;
                }
                else
                {
                fr++;
                    cout << "No record found!!" << endl;
                    cout << endl;
                    
                }
            }
            cout << endl;
    
        }
    }
};
void emergency_case()
{


 
     system("cls");
    Emergence_case s2;
    
    int choice;
    bool flag = true;

    while (flag)
    {
        cout << "Press 1 for Enter data of Patient" << endl;
        cout << "Press 2 for Display data of Patient " << endl;
        cout << "Press 3 for Update data of Patient" << endl;
        cout << "Press 4 which Patient is ready for  check up   " << endl;
        cout << "Press 5 Go  Back to Main_Menu" << endl;
        cout << "\nEnter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (s2.insertdata())
            {
                cout << "\n>>>Data Inserted Successfully!!"<<endl << endl;
            }
            else
            {
                cout << "\n>>>Data couldn't insert Successfully " <<endl<< endl;
            }
            break;

        case 2:
            s2.displaydata();
            break;
        case 3:
            if (s2.update())
            {
                cout << "\n>>>Data Updated Successfully!!" <<endl<< endl;
            }
            else
            {
                cout << "\n>>>No Record found " <<endl<< endl;
            }
            break;
        case 4:
            if (s2.deletedata())
            {
               // cout << "\n>>>Data Deleted Successfully" <<endl<< endl;
                cout << endl;
            }
            else
            {
                cout << "\n>>>No Record Found!! " <<endl<< endl;
                cout << endl;
            }
            break;
        case 5:
            main();
        default:
            cout << " \n>>>Invalid Inputs Try again!!" << endl<<endl;
        }
    }

}
struct old_patient 
{
    int size = 100;
    int rare = -1;
    int front = -1;

    string *arrcnic = new string[size];
    string *arrname = new string[size];
    int *arrage = new int[size];
    string *arrbloodgrp = new string[size];
    string *arrdisease = new string[size];
    string *arrcontact = new string[size];

    bool insertdata()
    {
        int age;
        string name, cnic, bloodgrp, disease, contact;

        if (rare == size - 1)
        {
            cout << " OVERFLOW ";
            return false;
        }
        else if (rare == -1 && front == -1)
        {
            front = 0;
            rare = 0;

            cout << " Enter the Name of patient ";
            cin >> arrname[rare];
            cout << " Enter the CINC of patient ";
            cin >> arrcnic[rare];
            cout << " Enter the age of patient ";
            cin >> arrage[rare];
            cout << " Enter the Blood Group  of patient ";
            cin >> arrbloodgrp[rare];
            cout << " Enter the Disease of patient ";
            cin >> arrdisease[rare];
            cout << " Enter the contact  of patient ";
            cin >> arrcontact[rare];
            rare++;
            return true;
        }
        else
        {

            cout << " Enter the Name of patient ";
            cin >> name;
            arrname[rare] = name;
            cout << " Enter the CINC of patient ";
            cin >> cnic;
            arrcnic[rare] = cnic;
            cout << " Enter the age of patient ";
            cin >> age;
            arrage[rare] = age;
            cout << " Enter the Blood Group  of patient ";
            cin >> bloodgrp;
            arrbloodgrp[rare] = bloodgrp;
            cout << " Enter the Disease of patient ";
            cin >> disease;
            arrdisease[rare] = disease;
            cout << " Enter the contact  of patient ";
            cin >> contact;
            arrcontact[rare] = contact;

            rare++;
            return true;
        }
    }

   bool deletedata()
    {
        if (rare != front)
        {
            int fr = front;
            int max = 0;
            int maxAgeIndex;
            while (fr != rare)
            {
                if (arrage[fr] > max)
                {
                    max = arrage[fr];
                    maxAgeIndex = fr;
                }
                fr++;
            }

            int     age = arrage[maxAgeIndex];
            string name = arrname[maxAgeIndex];
            string cnic = arrcnic[maxAgeIndex];
            string blood = arrbloodgrp[maxAgeIndex];
            string diesase = arrdisease[maxAgeIndex];
            string contact = arrcontact[maxAgeIndex];

            max = front + 1;
            cout << " Patient is ready of check up.... " << endl;
            cout << "Name Of patient " << name << endl;
            cout << "CINC of patient " << cnic << endl;
            cout << " Age of patient is " << age << endl;
            cout << "Blood group of patient is " << blood << endl;
            cout << "Disease of patient is " << diesase << endl;
            cout << " Contact of patient is " << contact << endl;
            cout << endl;
            
            arrage[maxAgeIndex]=0;
            arrname[maxAgeIndex]=" ";
            arrcnic[maxAgeIndex]="";
            arrbloodgrp[maxAgeIndex]="";
            arrdisease[maxAgeIndex]="";
            arrcontact[maxAgeIndex]="";
            return true;

        
        }
        else

        {

            cout << "\nYou have not ordered anything! Order First" << endl;
        }
    }
 void displaydata()
{
    int fr = front;
    if (fr == -1)
    {
        cout << " NO Record enter" << endl;
        cout << endl;
    }
    else
    {
        while (fr != rare)
        {
            // cout<<" Patient is ready of check up "<<endl;
            cout << "Name Of patient " << arrname[fr] << endl;
            cout << "CINC of patient " << arrcnic[fr] << endl;
            cout << " Age of patient is " << arrage[fr] << endl;
            cout << "Blood group of patient is " << arrbloodgrp[fr] << endl;
            cout << "Disease of patient is " << arrdisease[fr] << endl;
            cout << " Contact of patient is " << arrcontact[fr] << endl;
            cout << endl;

            fr++;
        }
        cout << endl;
    }
}
bool update()
{
    int fr = front;
    if (fr == -1)
    {
        return false;
    }
    else
    {
        int newage;
        string oldName, newName, newcnic, oldcnic, newbloodgrp, newdisease, newcontact;
        cout << " Enter the Name of patient to update: ";
        cin >> oldName;

        cout << " Enter the new name of patient to update: ";
        cin >> newName;
        cout << " Enter the CNIC of patient to update: ";
        cin >> oldcnic;
        cout << " Enter the New CNIC of patient to update: ";
        cin >> newcnic;
        cout << " Enter the New age of patient to update: ";
        cin >> newage;
        cout << " Enter the New Blood Group of patient to update: ";
        cin >> newbloodgrp;
        cout << " Enter the New disease of patient to update: ";
        cin >> newdisease;
        cout << " Enter the New Contact of patient to update: ";
        cin >> newcontact;
        int fr = front;
        while (fr != rare)
        {
            if (arrname[fr] == oldName && arrcnic[fr] == oldcnic)
            {
                arrname[fr] = newName;
                arrcnic[fr] = newcnic;
                arrage[fr] = newage;
                arrbloodgrp[fr] = newbloodgrp;
                arrdisease[fr] = newdisease;
                arrcontact[fr] = newcontact;
                return true;
            }
            else
            {
                cout << "No record found!!" << endl;
                cout << endl;
                return false;
            }
            fr++;
        }
        cout << endl;
        return true;
    }
}
};

void old_patients()
{
    system("cls");
    old_patient s1;
    int choice;
    bool flag = true;

    while (flag)
    {
        cout << "Press 1 for Enter data" << endl;
        cout << "Press 2 for Display  data" << endl;
        cout << "Press 3 for Update data" << endl;
        cout << "Press 4 Which Patient  is ready for check up " << endl;
        cout << "Press 5 Go Back to Menu " << endl;
        cout << "\nEnter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (s1.insertdata())
            {
                cout << "\n>>>Data Inserted Successfully!!" << endl
                     << endl;
            }
            else
            {
                cout << "\n>>>Data couldn't insert Successfully " << endl
                     << endl;
            }
            break;

        case 2:
            s1.displaydata();
            break;
        case 3:
            if (s1.update())
            {
                cout << "\n>>>Data Updated Successfully!!" << endl
                     << endl;
            }
            else
            {
                cout << "\n>>>No Record found " << endl
                     << endl;
            }
            break;
        case 4:
           s1.deletedata();
            break;
        case 5:
            flag == false;
            main();
            break;
        default:
            cout << " \n>>>Invalid Inputs Try again!!" << endl
                 << endl;
        }
    }
}
void login(){
    system("cls");

    Sleep(500);
    cout << "\t********************************\n\t*   HOSPITAL MANGEMENT SYSTEM   *\n\t********************************";

    cout << " \nPlease Login your account ";
    int ch;
start:

    string user, pass;

    cout << "\n\n\n               Username: ";
    cin >> user;
    cout << "\n\n               Password: ";
    ch = getch();

    while (ch != 13)

    {
        pass.push_back(ch);
        cout << '*';
        ch = getch();
    }
    Sleep(500);
    cout << "\n\n \n + + + + + + + + + + + + + + + + + + + + + \n\n\n ";

    if (user == "Arbab" && pass == "1234")
    {
        system("cls");
        Sleep(500);
        cout << "\n\n               Welcome Arbab!\n";
        cout << "\n>>>Thank you for logging in.\n"
             << endl
             << endl;
    }
    else if (user == "Warda" && pass == "1234")
    {
        system("cls");
        Sleep(500);
        cout << "\n\n               Welcome Warda!\n";
        cout << "\nThank you for logging in.\n"
             << endl
             << endl;
    }
    else if (user == "Rohail" && pass == "1234")
    {
        system("cls");
        Sleep(500);
        cout << "\n\n               Welcome Rohail!\n";
        cout << "\nThank you for logging in.\n"
             << endl
             << endl;
    }
    else
    {
        system("cls");
        Sleep(1000);
        cout << "\n\n\n         Invalid login attempt. Please try again.        \n"
             << '\n';
        goto start;
    }
}
int i=0;
int main()
{
          
          while (i != 1)
          {
              login();
              i++;
          }
          system("cls");
    {
        int ch1;
        bool flag=true;
        while (flag)
        {
            
        
        
        cout<<"Press 1 for Regular Patient Using FIFO  "<<endl;
        cout<<"Press 2 for Emergency  Patient Using LIFO "<<endl;
        cout<<"Press 3 for Old Patient Using Priorty Queue "<<endl;
        cout<<"Press 4 for Exit "<<endl;
         
        cout<<" Enter your choice ";
        cin>>ch1;
        switch (ch1)
        {
        case 1:
        regular_patients();
            break;
        case 2:
        emergency_case();
        break;
        case 3:
        old_patients();
        break;
        case 4:
        exit(0);
        break;
        default:
            cout<<"Wrong Input !! try  Again....   ";
            break;
        
        }

       }
          } 
}
