#include<iostream>
using namespace std;//step one ///
class ClsStudent//////// bass class or Super class//
{
    struct STstudent
    {
        int _Id=0;
        string _Firstname="";
        string _Lastname ="";
        string _Email ="";
        string _Phone ="";  
    };
    STstudent student;
    public:
    ClsStudent(int id  , string firstname  , string lastname , string Email , string Phone )
    {
        student._Id = id;
        student._Firstname =firstname;
        student._Lastname = lastname;
        student._Email =Email;
        student._Phone =Phone; 
    }
    int ID()
    {
        return student._Id;
    }
    void SetFirstname(string Firstname )
    {
      student._Firstname =Firstname;
    }
    string GetFristname()
    {
        return student._Firstname;
    }

    void SetLastname(string Lastname)
    {
     student._Lastname =Lastname;
    }
    string GetLastnaem()
    {  
        return student._Lastname;
    }
    string Fullname()
    {
        return GetFristname()+ ' '+ GetLastnaem();
    }     
    void SetEmail(string Email)
    {
        student._Email =Email;
    }
    string GetEmail()
    {
        return student._Email;
    }
    void SetPhone(string Phone)
    {
        student._Phone = Phone;
    }
    string GetPhone()
    {
        return student._Phone;
    }
    
   void sendemail(string subject, string body)
    {
        cout << "Sending email to " << student._Email << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }
    void sendSMS(string message)
    {
        cout << "Sending SMS to " << student._Phone << endl;
        cout << "Message: " << message << endl;
    }

    void Print()
     {
        cout<<"=============Cart================="<<endl;
        cout<<"Seating number:" <<ID()<<endl;
        cout<<"Firstname     : "<<GetFristname()<<endl;
        cout<<"Lastname      : "<<GetLastnaem()<<endl;
        cout<<"Fullname      : "<<Fullname()<<endl;
        cout<<"Email         : "<<GetEmail()<<endl;
        cout<<"Phone         : "<<GetPhone()<<endl; 
        cout<<"=================================="<<endl;
        
     }
};
/// Step Two// Inheritance // this is Subclass Or DerivedClass //
class Thechildrenslineage :public ClsStudent
{
    struct Stchildrens
    {
        string _NameMomther ="";
        string _NameFather ="";
        string _PhoneMother = "";
        string _PhoneFather ="";
    };
     Stchildrens childrens;
     public:
     Thechildrenslineage(int id  , string firstname  , string lastname , string Email , string Phone ,string NameMomther  , string namefather , string Phonemonrher , string PhoneFather )
     :ClsStudent(id , firstname , lastname , Email , Phone)
     {
        childrens._NameFather =namefather ;
        childrens._NameMomther =NameMomther;
        childrens._PhoneFather=PhoneFather ;
        childrens._PhoneMother =Phonemonrher;
     }
     void Setnamefather(string Name)
     {
        childrens._NameFather = Name;
     }
     string Getnamefater()
     {
        return childrens._NameFather;
     }
     void SetPhoneFather(string Phone)
     {
        childrens._PhoneFather =Phone;
     }
     string Getphonefather()
     {
        return childrens._PhoneFather;
     }
     void SetPhoneMother(string Phone)
     {
    childrens._PhoneMother =Phone;
     }
     string Getphonemother()
     {
        return childrens._PhoneMother;
     }

      void SetnameMother(string Phone)
     {
    childrens._NameMomther =Phone;
     }
     string Getnameemother()
     {
        return childrens._NameMomther;
     }
     
     string Fullname()
     {
        return GetFristname()+ ' '+ Getnamefater() + ' ' +  GetLastnaem() ;
     }   
      void Print()
     {
        cout<<"=============[CartStudant]================="<<endl;
        cout<<"Seating number:" <<ID()<<endl;
        cout<<"Firstname     : "<<GetFristname()<<endl;
        cout<<"Lastname      : "<<GetLastnaem()<<endl;
        cout<<"NameFather    : "<<Getnamefater()<<endl;
        cout<<"Namemother    : "<<Getnameemother()<<endl;
        cout<<"Fullname      : "<<Fullname()<<endl;
        cout<<"Email         : "<<GetEmail()<<endl;
        cout<<"PhoneStudant  : "<<GetPhone()<<endl; 
        cout<<"PhoneMother   : "<<Getnameemother()<<endl;
        cout<<"PhoneFather   : "<<Getphonefather()<<endl;
        cout<<"==========================================="<<endl;
        
     }
};

int main()
{
    Thechildrenslineage childrenslineage(244 , "samy" , "dnadna" , "samy@gmail.com" , "02441545454" , "Hmna" , "there" , "00478548" , "185484");
  childrenslineage.Print();
      system("pause>0"); 
    return 0;
}