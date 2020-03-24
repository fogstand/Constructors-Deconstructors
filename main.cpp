#include<iostream>
#include <string>
using namespace std;
 class Cars{
 private:
     string company_name;
     string model_name;
     string fuel_type;
     double mileage;
     double price;
 public:
     //default constructors
     Cars(){
         cout<<"Default constructor called"<<endl;
         company_name= "Audi";
         model_name= "Xanax";
         fuel_type= "Red";
         mileage =15.5;
         price=150000;

     }
     // parameterized constructors
     Cars(string mname,string ftype, float m, float p)
     {
         cout<<"Parameterized constructor called"<<endl;
         model_name= mname;
         fuel_type= ftype;
         mileage =m;
         price=p;
     }
     Cars(Cars &obj)
     {
         cout<<"Copy constructor called"<<endl;
         company_name= obj.company_name;
         model_name= obj.model_name;
         fuel_type= obj.fuel_type;
         mileage =obj.mileage;
         price=obj.price;
     }
     void setData(string cname,string mname,string ftype, float m, double p)
     {
         company_name= cname;
         model_name= mname;
         fuel_type= ftype;
         mileage =m;
         price=p;

     }
     void displayData()
     {
         cout<<"Car properties:"<<endl;
         cout<<"Car Company name:"<<company_name<<endl;
         cout<<"Car Company model:"<<model_name<<endl;
         cout<<"Car Fuel Type:"<<fuel_type<<endl;
         cout<<"Car Mileage:"<<mileage<<endl;
         cout<<"Car price:"<<price<<endl;




     }
 };
int main()
{
    //There are two ways to set data one by constructors and second bt .setdata method
    Cars car1,car2("fortuner","diesel",10,35000);// objects are nothing but variable of type class
 car1.setData("toyota", "atlas", "petrol",15.6,1500);
 car1.displayData();
 //car2.setData("BMW","450","GAS",14.9,98000);
 car2.displayData();
 Cars car3=car1;// copy constructor is called
 car3.displayData();
 return 0;
    }
