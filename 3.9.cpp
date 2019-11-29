#include<iostream>
using namespace std;
class Bank{
  
private:
    int a,b,c;
public:
    
    void Input_Amount(){
    cout<<"Enter the Deposite Amount:";
    cin>>a;
    }
    void Output_Amount(){
        cout<<"Enter the Withdraw Amount:";
        cin>>b;
    }
   void condition(){
    if(b>a)
    {
        cout<<"Error "<<endl;
        cout<<"Withdrawal amount exceeded %Account% Balance$"<<endl<<endl;
        cout<<"You Enter the Correct Amount!"<<endl<<endl;
        cout<<"Your Remaining Amount is:"<<a<<endl<<endl<<endl;
    }
    else
        c=a-b;
        cout<<"\nYour Remaining Amount is "<<c<<endl<<endl;
        cout<<"Thanks for using Our Bank"<<endl<<endl;
        }
};
int main()
{
    cout<<"Welcome the Student Bank!"<<endl<<endl;//Bank
    Bank b;
    b.Input_Amount();
    b.Output_Amount();
    b.condition();
    
    return 0;
}
