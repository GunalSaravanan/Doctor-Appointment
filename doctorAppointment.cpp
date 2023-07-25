#include <iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
using namespace std;
class login{
    private:
string admin_mail= "admin@gmail.com";
string admin_pwd="1234@doc";
int admin_favno=4;
public:

//setting email id enterd by user
void setmail(string i){
admin_mail=i;
}

//getting email id from user to check
string getmail(){
    return admin_mail;
}

//setting pwd entered by user
void setpwd(string j){
admin_pwd=j;
}

//getting password from user to check
string getpwd(){
    return admin_pwd;
}

//setting favourite number entered by user
int setfavno(int n){
   admin_favno=n;
   return 0;
}

//getting favourite number from user to check
int getfavno(){
    return admin_favno;
}

string user_signin(string user_sign,string user_pwd){
    if(getmail()==user_sign){
        if(getpwd()==user_pwd){
            cout<<"\nSuccessful sign in!! :)";
        }
    }
    return user_sign;
}
};
class randomdate{
    public:
    int randomdays1357(){
        int N = 31,date,s1,s2,s3;
        s1=  rand() % N;
        s2=  rand() % N;
        s3=  rand() % N;
        cout << s1<< " "<< s2<< " "<< s3<< " ";
    cout<<"\nEnter date : ";
    cin>>date;
    if(date==s1||date==s2||date==s3){
        cout<<"\nsuccess";
    }
    return 0;
    }
    int randomdays246911(){
        int N = 30,date,s1,s2,s3;
        s1=  rand() % N;
        s2=  rand() % N;
        s3=  rand() % N;
        cout << s1<< " "<< s2<< " "<< s3<< " ";
    cout<<"\nEnter date : ";
    cin>>date;
    if(date==s1||date==s2||date==s3){
        cout<<"\nsuccess";
    }
    return 0;
    }
    int randomdaysfeb(){
        int N = 28,date,s1,s2,s3;
        s1=  rand() % N;
        s2=  rand() % N;
        s3=  rand() % N;
        cout << s1<< " "<< s2<< " "<< s3<< " ";
    cout<<"\nEnter date : ";
    cin>>date;
    if(date==s1||date==s2||date==s3){
        cout<<"\nsuccess";
    }
    return 0;
    }
};
class date : public randomdate{
    public:
    int calendar(){
     int month, year=2023;

    cout << "\nEnter month (1-12): ";
    cin >> month;

    // Print calendar header
    cout << "Mon Tue Wed Thu Fri Sat Sun" << endl;

    // Calculate number of days in month
    int numDays;
    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            numDays = 29;
        else
            numDays = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        numDays = 30;
    }
    else
    {
        numDays = 31;
    }

    // Calculate day of week for the first day of the month
    int firstDay = ((year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
    for (int i = 0; i < firstDay; i++)
    {
        cout << "    ";
    }

    // Print days of month
    for (int day = 1; day <= numDays; day++)
    {
        cout << setw(3) << day << " ";
        if ((firstDay + day) % 7 == 0)
        {
            cout << endl;
        }
    }
    cout<<"\nAvailable dates...\n";
    switch(month){
        case 1:{
            randomdays1357();
            break;
        }
        case 2:{
            randomdaysfeb();
            break;
        }
        case 3:{
            randomdays1357();
            break;
        }
        case 4:{
            randomdays246911();
            break;
        }
        case 5:{
            randomdays1357();
            break;
        }
        case 6:{
             randomdays246911();
            break;
        }
        case 7:{
            randomdays1357();
            break;
        }
        case 8:{
            randomdays1357();
            break;
        }
        case 9:{
             randomdays246911();
            break;
        }
        case 10:{
            randomdays1357();
            break;
        }
        case 11:{
             randomdays246911();
            break;
        }
        case 12:{
            randomdays1357();
            break;
        }
    }
    return 0;
    }



};
class otp{
    public:
    int otpfunction(){
    otpread:
    int P = 9999,otp,s1,s2,s3,otptry=0;
        s1=  rand() % P;
        s2=  rand() % P;
        s3=  rand() % P;
        cout << s1<< "\n " || cout<<s2<<"\n " || cout<<s3<<"\n ";
    cout<<"\nEnter OTP : ";
    ++otptry;
    cin>>otp;
    if(otp==s1){
        cout<<"\nVerification success!!";
    }
    else{
        ++otptry;
        cout<<"\nEnter OTP again...\n";
        cin>>otp;
    }
    if(otptry==2){
        cout<<"\nAnother OTP will be sent to your number\n";
        goto otpread;
    }
    return 0;
    }
};
class payment {
    public:
    int scheme_and_payment(){
    int scheme;
    cout<<"\nLet's proceed to payment now";
    cout<<"\nSelect your schemes before payment";
    scheme_plan:
    cout<<"\n1.Yearly scheme[300 per consultation]\n2.Monthly scheme[350 per consultation]\n3.No scheme[Rs.500]: ";
    cin>>scheme;
    if(scheme==1){
        cout<<"\nPayment of Rs.500 can be done through any payment app from your registered number to 9877023XXX";
    }
    else if(scheme==2){
        cout<<"\nPayment of Rs.350 can be done through any payment app from your registered number to 9877023XXX";
    }
    else if(scheme==3){
        cout<<"\nPayment of Rs.500 can be done through any payment app from your registered number to 9877023XXX";
    }
    else{
        cout<<"\nPlease enter correct option : ";
        goto scheme_plan;
    }
    return 0;
    }
};
class afterlogin : public date,public otp,public payment{
    public:
    randomdate function;
    void afterlog(){
    int choice_to_go,abtchoice,indexoption,doctor_choice,specs,age,getback;
    char goback,appnttime,smallailment,changeop;
    long phoneno;
    string ailment,medications,description,teletime,teledate;
    int days;
    long number;
  cout<<"\nWelcome!!";
  intro:
  cout<<"\n1.Home\n2.About\n3.Index";
  cout<<"\nWhere do you want to go? : ";
  cin>>choice_to_go;
  switch(choice_to_go){
      case 1:{
      cout<<"\n                     HOME";
      cout<<"\n\nLovelace Medical Center  is a leading, multi-speciality";
      cout<<"\nhospital offering best-in-class medical services";
      cout<<"\nfor nearly 2 decades. With paramount focus on";
      cout<<"\npatient care, patient safety and patient";
      cout<<"\nsatisfaction, we are committed to offer";
      cout<<"\nexemplary medical services going beyond the";
      cout<<"\nnorm of healthcare.";
      cout<<"\n\nDo you want to go back? 'y' for yes and 'n' for no : ";
      cin>>goback;
      if(goback=='y')
      goto intro;
      else if(goback=='n')
      cout<<"\nThank you for visiting..";
      break;
      }
      case 2:{
          cout<<"\n1.Overview\n2.Vision and Mission\n3.Our Management team\n4.Awards\n0.Go Back";
          cout<<"\nWhere do you want to go? : ";
          cin>>abtchoice;
          switch(abtchoice){
             case 0:
             goto intro;
             case 1 : {
      cout<<"\n\nLovelace Medical Center is a leading, multi-speciality";
      cout<<"\nhospital offering best-in-class medical services";
      cout<<"\nfor nearly 2 decades. With paramount focus on";
      cout<<"\npatient care, patient safety and patient";
      cout<<"\nsatisfaction, we are committed to offer";
      cout<<"\nexemplary medical services going beyond the";
      cout<<"\nnorm of healthcare.";
      cout<<"\n\nDo you want to go back? 'y' for yes and 'n' for no : ";
      cin>>goback;
      if(goback=='y')
      goto intro;
      else if(goback=='n')
      cout<<"\nThank you for visiting..";
      break;
             }
             case 2:{
                 cout<<"\n                  Our Vision";
                 cout<<"\nTo be the most respected and trusted healthcare provider";
                 cout<<"\n                  Our Mission";
                 cout<<"\nTo make great healthcare affordable";
                 cout<<"\n\nDo you want to go back? 'y' for yes and 'n' for no : ";
      cin>>goback;
      if(goback=='y')
      goto intro;
      else if(goback=='n')
      cout<<"\nThank you for visiting..";
      break;
             }
             case 3:{
                 cout<<"\nDr.Walter White, M.D.,PhD";
                 cout<<"\nFounder & Executive Chairman, Lovelace Medical Center";
                 cout<<"\nDr.Walter White is the Founder and Executive Chairman of Lovelace Medical Group";
                 cout<<"\nof Hospitals. A qualified and experienced anaesthesiologist and critical care specialist,";
                 cout<<"\nDr.White embarked on a mission to provide Great healthcare at affordable value for semi-urban and rural parts of Tamil Nadu.";

                 cout<<"\n\n\nDr.Jesse Pinkman, M.D., DnB";
                 cout<<"\nFounder and Managing Director, Lovelace Medical Center ";
                 cout<<"\nDr.Jesse Pinkman is the Founder and Managing Director of Lovelace";
                 cout<<"\nGroup of Hospitals. Dr.Pinkman is a trained anaesthesiologist and ex-Meth dealer. His vision of";
                 cout<<"\nmaking Great Healthcare affordable became reality in 1999, when he co-";
                 cout<<"\nfounded Lovelace Medical Center along with Dr.Walter White.";
                 cout<<"\n\nDo you want to go back? 'y' for yes and 'n' for no : ";
      cin>>goback;
      if(goback=='y')
      goto intro;
      else if(goback=='n')
      cout<<"\nThank you for visiting..";
      break;
             }
             case 4:{
                 cout<<"\nBest hospital in Chemotherapy by TN CII MedClave 22";
                 cout<<"\n14th Healthcare Excellence Award 2022 by FICCI";
                 cout<<"\n3rd in Times Health Survey Critical Care Ranking 2022";
                 cout<<"\n3rd in World's Best Hospitals 2022 - India";
                 cout<<"\n\nDo you want to go back? 'y' for yes and 'n' for no : ";
      cin>>goback;
      if(goback=='y')
      goto intro;
      else if(goback=='n')
      cout<<"\nThank you for visiting..";
      break;
             }

          }
      }
      case 3:{
          index:
          cout<<"\n1.Book Appointments";
          cout<<"\n2.Chat with Doc";
          cout<<"\n3.Teleconsulting";
          cout<<"\n0.Go back";
          cout<<"\nEnter your choice : ";
          cin>>indexoption;
          switch(indexoption){
              case 0:
              goto index;
              case 1: {
                  cout<<"\n1.Choose your Doctor based on specification";
                  cout<<"\n                 (OR)";
                  cout<<"\n2.Choose your Doctor based on patient age\nChoose your option : ";
                  cin>>specs;
                  switch(specs){
                      case 1:  {
                      goto doctorchoose;
                      break;
                      }
                      case 2: {
                          cout<<"\nEnter patient age : ";
                          cin>>age;
                          if(age<=15){
                              cout<<"\nThe patient's age is less than 16. So a pediatrician must be consulted";
                              cout<<"\nOur Pediatrician";
                              cout<<"\nDr.AKHILESH RAMKUMAR, M.D.(Pediatrics),DNB";
                              cout<<"\n\nEnter the date of the appointment below";
                      calendar();
                          }
                          else
                          cout<<"\nThe patient is not a child";
                          cout<<"\nThe patient can pick their own choice of Doctor";
                          goto doctorchoose;
                      }

                  }
                  doctorchoose:
                  cout<<"\n1.Dr.S.ABDUL SHAHID, M.S.(Cardiothoracic Surgery),FRCS";
                  cout<<"\n2.Dr.AKHILESH RAMKUMAR, M.D.(Pediatrics),DNB";
                  cout<<"\n3.Dr.V.DHINAKARAN, M.S.(Orthopedics),DNB";
                  cout<<"\n4.Dr.P.KOWSIK, M.S.(General Surgery),FRCS";
                  cout<<"\n0.Go back";
                  cout<<"\n\nChoose your Doctor : ";
                  cin>>doctor_choice;
                  switch(doctor_choice){
                      case 0:{
                          goto doctorchoose;
                      }
                  case 1: {
                      cout<<"\nDr.S.ABDUL SHAHID, M.S.(Cardiothoracic Surgery),FRCS";
                      goingback1:
                      cout<<"\nDo you wish to go back to change? 'y' for yes and 'n' for no : ";
                      cin>>changeop;
                      if(changeop=='y'){
                          goto movenext1;
                      }
                      else if(changeop=='n'){
                          goto index;
                      }
                      else{
                      cout<<"\nPlease enter the correct option";
                      goto goingback1;
                      }
                      movenext1:
                      cout<<"\n\nEnter the date of the appointment below\n";
                      calendar();
                      appointment1:
                      cout<<"\nYour can choose your Appointment slot on either morning or evening";
                      cout<<"\nChoose Time slot. 'm' for morning and 'e' for evening : ";
                      cin>>appnttime;
                      if(appnttime=='m' || appnttime=='M'){
                          cout<<"\nYou can walk in any time between 10 AM to 12 PM";
                      }
                      else if(appnttime=='e' || appnttime=='E'){
                          cout<<"\nYou can walk in any time between 4 PM to & PM";
                      }
                      else {
                          cout<<"\nPlease select the correct time slot";
                          goto appointment1;
                      }
                      cout<<"\n1.Do you want to go back?\n2.Proceed to payment : ";
                      cin>>getback;
                      if(getback==1){
                          goto doctorchoose;
                      }
                      else if(getback==2){
                      cout<<"Let's proceed to the payment process now";
                      cout<<"\nPlease enter your phone number to verify and proceed : ";
                      cin>>phoneno;
                      cout<<"\nAn OTP will be sent to your phone number.\nPlease enter it here to verify\n";
                      otpfunction();
                      scheme_and_payment();
                      }
                      break;
                  }
                  case 2:{
                      cout<<"\nDr.AKHILESH RAMKUMAR, M.D.(Emergency Medicine),DNB";
                      goingback2:
                      cout<<"\nDo you wish to go back to change? 'y' for yes and 'n' for no : ";
                      cin>>changeop;
                      if(changeop=='y'){
                          goto movenext2;
                      }
                      else if(changeop=='n'){
                          goto index;
                      }
                      else{
                      cout<<"\nPlease enter the correct option";
                      goto goingback2;
                      }
                      movenext2:
                      cout<<"\n\nEnter the date of the appointment below";
                      calendar();
                      appointment2:
                      cout<<"\nYour can choose your Appointment slot on either morning or evening";
                      cout<<"\nChoose Time slot. 'm' for morning and 'e' for evening : ";
                      cin>>appnttime;
                      if(appnttime=='m' || appnttime=='M'){
                          cout<<"\nYou can walk in any time between 10 AM to 12 PM";
                      }
                      else if(appnttime=='e' || appnttime=='E'){
                          cout<<"\nYou can walk in any time between 4 PM to & PM";
                      }
                      else {
                          cout<<"\nPlease select the correct time slot";
                          goto appointment2;
                      }
                      cout<<"\n1.Do you want to go back?\n2.Proceed to payment : ";
                      cin>>getback;
                      if(getback==1){
                          goto doctorchoose;
                      }
                      else if(getback==2){
                      cout<<"Let's proceed to the payment process now";
                      cout<<"\nPlease enter your phone number to verify and proceed : ";
                      cin>>phoneno;
                      cout<<"\nAn OTP will be sent to your phone number.\nPlease enter it here to verify\n";
                      otpfunction();
                      scheme_and_payment();
                      }
                      break;
                  }
                  case 3:{
                      cout<<"\nDr.V.DHINAKARAN, M.S.(Orthopedics),DNB";
                      goingback3:
                      cout<<"\nDo you wish to go back to change? 'y' for yes and 'n' for no : ";
                      cin>>changeop;
                      if(changeop=='y'){
                          goto movenext3;
                      }
                      else if(changeop=='n'){
                          goto index;
                      }
                      else{
                      cout<<"\nPlease enter the correct option";
                      goto goingback3;
                      }
                      movenext3:
                      cout<<"\n\nEnter the date of the appointment below";
                      calendar();
                      appointment3:
                      cout<<"\nYour can choose your Appointment slot on either morning or evening";
                      cout<<"\nChoose Time slot. 'm' for morning and 'e' for evening : ";
                      cin>>appnttime;
                      if(appnttime=='m' || appnttime=='M'){
                          cout<<"\nYou can walk in any time between 10 AM to 12 PM";
                      }
                      else if(appnttime=='e' || appnttime=='E'){
                          cout<<"\nYou can walk in any time between 4 PM to & PM";
                      }
                      else {
                          cout<<"\nPlease select the correct time slot";
                          goto appointment3;
                      }
                      cout<<"\n1.Do you want to go back?\n2.Proceed to payment : ";
                      cin>>getback;
                      if(getback==1){
                          goto doctorchoose;
                      }
                      else if(getback==2){
                      cout<<"Let's proceed to the payment process now";
                      cout<<"\nPlease enter your phone number to verify and proceed : ";
                      cin>>phoneno;
                      cout<<"\nAn OTP will be sent to your phone number.\nPlease enter it here to verify\n";
                      otpfunction();
                      scheme_and_payment();
                      }
                      break;
                  }
                  case 4:{
                      cout<<"\nDr.P.KOWSIK, M.S.(General Surgery),FRCS";
                      goingback4:
                      cout<<"\nDo you wish to go back to change? 'y' for yes and 'n' for no : ";
                      cin>>changeop;
                      if(changeop=='y'){
                          goto movenext4;
                      }
                      else if(changeop=='n'){
                          goto index;
                      }
                      else{
                      cout<<"\nPlease enter the correct option";
                      goto goingback4;
                      }
                      movenext4:
                      cout<<"\n\nEnter the date of the appointment below";
                      cout<<"\n\nEnter the date of the appointment below";
                      calendar();
                      appointment4:
                      cout<<"\nYour can choose your Appointment slot on either morning or evening";
                      cout<<"\nChoose Time slot. 'm' for morning and 'e' for evening : ";
                      cin>>appnttime;
                      if(appnttime=='m' || appnttime=='M'){
                          cout<<"\nYou can walk in any time between 10 AM to 12 PM";
                      }
                      else if(appnttime=='e' || appnttime=='E'){
                          cout<<"\nYou can walk in any time between 4 PM to & PM";
                      }
                      else {
                          cout<<"\nPlease select the correct time slot";
                          goto appointment4;
                      }
                      cout<<"\n1.Do you want to go back?\n2.Proceed to payment : ";
                      cin>>getback;
                      if(getback==1){
                          goto doctorchoose;
                      }
                      else if(getback==2){
                      cout<<"Let's proceed to the payment process now";
                      cout<<"\nPlease enter your phone number to verify and proceed : ";
                      cin>>phoneno;
                      cout<<"\nAn OTP will be sent to your phone number.\nPlease enter it here to verify\n";
                      otpfunction();
                      scheme_and_payment();
                      }
                      break;
                  }
                  defualt : {
                      cout<<"\nEnter correct option";
                      goto doctorchoose;
                  }
                  }
                  break;
                  }
              case 2:
              {
                  string ailment,days,medications,description,number;
                  cout<<"\nThis option is only for people with small ailments";
                  further:
                  cout<<"\nDo you wish to continue further? 'y' for yes and 'n' for no : ";
                  cin>>smallailment;
                  if(smallailment=='y'){
                    cout<<"\nEnter the ailment you are suffering from : ";
                    cin>>ailment;
                    cout<<"\nNumber of days you are suffering from this ailment : ";
                    cin>>days;
                    cout<<"\nMedications if any, you have been taking for this or took any : ";
                    cin>>medications;
                    cout<<"\nPlease give a small description about your difficulty : ";
                    cin>>description;
                    cout<<"\nPlease Enter your WhatsApp number : ";
                    cin>>number;
                    cout<<"\nOur Doctor will text you further to your number";
                    scheme_and_payment();
                  }
                  else if(smallailment=='n'){
                      goto index;
                  }
                  else
                  {
                      cout<<"\nPlease enter correct option...";
                      goto further;
                  }
              }
              case 3:
              {
                cout<<"\nEnter your phone number : ";
                cin>>number;
                cout<<"\nChoose date for tele-consultation [dd/mm]: ";
                cin>>teledate;
                cout<<"\nChoose your comfortable time for tele-consultation [time AM/PM] : ";
                cin>>teletime;
                cout<<"\nThank you for booking the slot";
                cout<<"\nOur Doctor will talk to you at your chosen time...";
                break;
                scheme_and_payment();
              }
          }
      }
  }
    }
};
int main()
{
login myobject;
afterlogin obj;
int usersign,logintry=0,fav_no;
string new_user_name,new_user_pwd,new_user_mail,confirm_pwd,fgtmail;
string user_sign,user_pwd;
string resetpwd,pwdresetagain;
cout<<"\nWelcome to"<<" Lovelace Medical Center by Dr.Walter White";
login1:
cout<<"\n\nSign up";
cout<<"\nChoose your option. 1 for yes and 2 for no : ";
cin>>usersign;
if(usersign==1){
    cout<<"\nRegisteration page";
    cout<<"\n\nEnter your name : ";
    cin>>new_user_name;
    cout<<"\nEnter your Email id : ";
    cin>>new_user_mail;
    myobject.setmail(new_user_mail);
    cout<<"\nEnter your favourite number : ";
    cin>>fav_no;
    passwordcheck:{
    cout<<"\nEnter your password : ";
    cin>>new_user_pwd;
    cout<<"\nConfirm password : ";
    cin>>confirm_pwd;
    myobject.setpwd(new_user_pwd);
    }
    if(new_user_pwd==confirm_pwd){
        cout<<"\nPassword set successfully";
        goto login2;
    }
    else{
    cout<<"\nPassowrds do no match";
    cout<<"\nConfirm your password again";
    goto passwordcheck;
    }

}
else if(usersign==2){
    cout<<"\nThank you for visiting...";
    cout<<"\nVisit again...";
    return 0;
}
    login2:
    cout<<"\nLog in page";
    cout<<"\nEnter Email id : ";
    cin>>user_sign;
    cout<<"\nEnter Password : ";
    cin>>user_pwd;
     myobject.user_signin(user_sign,user_pwd);
    if((user_pwd!=myobject.getpwd() || user_sign!=myobject.getmail() )&& logintry<2)
    {
        ++logintry;
        cout<<"\nThe password or Email maybe incorrect. Try again..";
        cout<<logintry;
        goto login2;
    }

    if(logintry==2){
        cout<<"\nForgot password? Press 'y' for yes and 'n' for no : ";
        char fgtpwd;
        int favno;
        cin>>fgtpwd;
        if(fgtpwd=='y'){
            fav_no_check:
            cout<<"\nEnter your fav number : ";
            cin>>favno;
            if(favno==myobject.getfavno()){
                cout<<"\nEnter Mail id : ";
                cin>>fgtmail;

                cout<<"\nEnter new password : ";
                cin>>resetpwd;
                cout<<"\nConfirm password : ";
                cin>>pwdresetagain;
                if(resetpwd==pwdresetagain){
                    cout<<"\nPassword successfully reset";
                    myobject.setpwd(resetpwd);
                    logintry=0;
                    goto login2;
                }
                else{
                    cout<<"\nThe password you have entered is wrong. Please enter again";
                    goto fav_no_check;
                }
            }
            else{
                cout<<"\nFavourite number entered is incorrect. Try again...";
                goto fav_no_check;
            }
        }
    }
   obj.afterlog();
   cout<<"\nThank you choosing us!! Dr.Walter White will always be grateful to you";
}


















