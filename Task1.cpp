#include<iostream>
using namespace std;
class clsperson
{
private:
    int _ID = 0;
    string _FirstName = "";
    string _LastName = "";
    string _Email = "";
    string _Phone = "";

public:
    clsperson()
    {

    }
    clsperson(int id, string FirstName, string  LastName, string Email, string Phone)
    {
        _ID = id;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }
    int id()
    {
        return _ID;
    }
    void Setfirstname(string FristName)
    {
        _FirstName = FristName;
    }

    string Getfirstname()
    {
        return _FirstName;
    }

    void SetLastname(string LAstname)
    {
        _LastName = LAstname;
    }

    string GetLastname()
    {
        return _LastName;
    }

    void Setphone(string phone)
    {
        _Phone = phone;
    }

    string Getphone()
    {
        return _Phone;
    }

    void setemail(string email)
    {
        _Email = email;
    }

    string Getemail()
    {
        return _Email;
    }

    string fullname()
    {
        return _FirstName + " " + _LastName;
    }
    void Print()
    {
    cout<< "Person Details:" << endl;
    cout << "----------------" << endl;
    cout << "ID: " << _ID << endl;
    cout << "First Name: " << _FirstName << endl;
    cout << "Last Name: " << _LastName << endl;
    cout <<"Full Name : "<< fullname() << endl;
    cout << "Email: " << _Email << endl;
    cout << "Phone: " << _Phone << endl;
    cout << "----------------" << endl;
    }

    void sendemail(string subject, string body)
    {
        cout << "Sending email to " << _Email << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }
    void sendSMS(string message)
    {
        cout << "Sending SMS to " << _Phone << endl;
        cout << "Message: " << message << endl;
    }

};
class Cls_Emplyee : public clsperson
{
    string _Title ="";
    string _Department ="";
     float _Salary =0;
    public:
    Cls_Emplyee(int id1, string FirstName1, string  LastName1, string Email1, string Phone1  , string Tile  ,  string Department , float salary )
    :clsperson(id1 , FirstName1, LastName1 ,Email1 , Phone1 )
    {
        _Title =Tile;
        _Department = Department ;
        _Salary =salary;
    }
    void setTitle(string Title)
    {
        _Title = Title;
    }

    string GetTitle()
    {
        return _Title;
    }
    void setDepartment (string Department)
    {
        _Department = Department;
    }

    string GetDepartment()
    {
        return _Department;
    }
    void setSalary(float Salary)
    {
        _Salary = Salary;
    }

    float GetSalary()
    {
        return _Salary;
    }

     void Print()
    {
    cout<<  "\tPerson Details:" << endl;
    cout << "============Info============" << endl;
    cout << "ID        : " << id() << endl;
    cout << "FirstName : " << Getfirstname() << endl;
    cout << "LastName  : " << GetLastname() << endl;
    cout << "Full Name : "<< fullname() << endl;
    cout << "Email     : " << Getemail() << endl;
    cout << "Phone     : " << Getphone() << endl;
    cout<<  "Title     : "<<GetTitle()<<endl;
    cout<<  "Department: "<<GetDepartment()<<endl;
    cout<<  "Salary    : "<<GetSalary()<<endl;
    cout << "============================" << endl;
    } 
};
/**/


class clsProgrammingLanguage : public Cls_Emplyee
{
    string _MainProgrammingLanguage ="";
    public:
    clsProgrammingLanguage(int id1, string FirstName1, string  LastName1, string Email1, string Phone1  , string Tile  ,  string Department , float salary , string MainProgrammingLanguage)
    :Cls_Emplyee(id1 , FirstName1 , LastName1 , Email1 , Phone1 , Tile , Department , salary)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }
    void SetMainProgrammingLanguage (string MainProgrammingLanguage )
    {
        _MainProgrammingLanguage = MainProgrammingLanguage ;
    }
    string GetMainProgrammingLanguage ()
    {
        return _MainProgrammingLanguage ;
    }
     void Print()
    {
    cout<<  "\tPerson Details:" << endl;
    cout << "============Info============" << endl;
    cout << "ID        : " << id() << endl;
    cout << "FirstName : " << Getfirstname() << endl;
    cout << "LastName  : " << GetLastname() << endl;
    cout << "Full Name : "<< fullname() << endl;
    cout << "Email     : " << Getemail() << endl;
    cout << "Phone     : " << Getphone() << endl;
    cout<<  "Title     : "<<GetTitle()<<endl;
    cout<<  "Department: "<<GetDepartment()<<endl;
    cout<<  "Salary    : "<<GetSalary()<<endl;
    cout<<  "MainProgrammingLanguage "<<GetMainProgrammingLanguage()<<endl;
    cout << "============================" << endl;
    } 

};

int main()

{

clsProgrammingLanguage Object( 454,"samy" , "dandan" , "Example@f.com" , "01257484" , "Software" , "dsfsaf" ,  23.4 , "sadoj9rg");
Object.Print();
// Object1.Setfirstname("samy");
// Object1.SetLastname("dandan");
// Object1.fullname();
// Object1.Print();

//     // clsperson person1(1, "John", "Doe", "sd" , "sdf");
//     // person1.Print();
//     // person1.sendemail("Welcome", "Hello John, welcome to our service!");
//     // person1.sendSMS("Your verification code is 123456.");
//     // //
    system("pause>0");
    return 0;

}
/*
First name adderss or Binary or hexadecimal "��\017�\201\000\000\000E\215D$\001@��\017��\000\000\000�Cp\000\000\000 u}A��H��$\230\000\000\000H�PA_A^A]A\\_^]�eH�\004%`\000\000\000H�H\030H�Q\020H\215\r�\016\000H�XA���H�UXH\215\rf\024\017\000L��.���D9&t\025�G\n2G\t2G\b\210G\v��\210\000\000\0001G\b�����L9eP\017�j\002\000\0002�3E�L\215�P\001\000\000f�U@M�4$\017�M;\017��\000\000\000H\215s|I\215~L��9"...

*/