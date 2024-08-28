#include <iostream>

using namespace std;


class Calc{
private:
int user_choice;
double num1;
double num2;
public:

void Calculator(){

operators_Menu();

}

void operators_Menu(){

cout<<"WHAT YOU WANT TO FIND: "<<endl;
cout<<"Press '1' for Power: "<<endl;
cout<<"Press '2' for Sin: "<<endl; 
cout<<"Press '3' for Square: "<<endl; 
cout<<"Press '4' for Cos: "<<endl; 
cout<<"Press '5' for Tan: "<<endl;
cout<<"Press '6' for Log: "<<endl;
 cout<<"------------------------------"<<endl;
cout << "Enter: ";
cin >> user_choice;

 
switch(user_choice){

    case 1:
    

    cout << "Enter main #: ";
    cin>> num1;

    cout<<"Enter pow num ^*: ";
    cin >> num2;

    cout << num1<<"^"<<num2<<" = "<< pow(num1,num2)<<endl;

    break;

    case 2:
    cout << "Enter num : ";
    cin>> num1;

    cout <<"Sin( "<<num1<<")"<<" = "<< sin(num1)<<endl;

    break;

    case 3:
    cout << "Square # : ";
    cin >> num1;

    cout << "Square of "<<num1<<" = " << num1*num1<<endl;

    break; 

    case 4:
    cout << "Enter num : ";
    cin>> num1;

    cout <<"Cos( "<<num1<<")"<<" = "<< cos(num1)<<endl;


    break; 

    case 5:
    cout << "Enter num : ";
    cin>> num1;

    cout <<"Tan( "<<num1<<")"<<" = "<< tan(num1)<<endl;
    break; 

    case 6:
    cout << "Enter num : ";
    cin>> num1;
    cout <<"Log( "<<num1<<")"<<" = "<< log(num1)<<endl;

    break;


}

     
}



};





int main(){

Calc start;

start.Calculator();



}
