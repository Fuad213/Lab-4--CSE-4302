#include<bits/stdc++.h>
using namespace std;

class plane
{
private:
        int flight_number;
        string destination;
        float distance,Maxfuelcapacity;
        float Calfuel()
        {
            float val;
            if(distance<=1000)
                val= 500;
            if(distance>1000&& distance <=2000)
                val= 1100;
            if(distance>2000)
                val= 2200;
            if(val>Maxfuelcapacity){
                cout<<"Insufficient Fuel Capacity "<<endl;
                val=-1;
            }
            return val;
        }
    public:
    void FeedInfo()
    {
        cout<<"Enter Flight Number:\n";
        cin>>flight_number;
        cout<<"Enter Destination:\n";
        cin>>destination;
        cout<<"Enter Distance:\n";
        cin>>distance;
        cout<<"Enter MAxFuelCapacity:\n";
        cin>>Maxfuelcapacity;
    }
    void ShowInfo()
    {
        cout<<"Flight Number:\n"<<flight_number<<endl;
        cout<<"Destination:\n"<<destination<<endl;
        cout<<"Distance:\n"<<distance<<endl;
        cout<<"Required fuel:\n"<<Calfuel()<<endl;
    }
};
int main()
{
    int n;
    plane f;
    f.FeedInfo();
    f.ShowInfo();
}

