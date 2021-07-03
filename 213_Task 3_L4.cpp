#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
  float len;
  float wid;
public:
    Rectangle(float len=1.0,float wid=1.0)
    {

    }
    float area()
    {
        return len*wid;
    }
    float perimeter()
    {
        return 2*(len+wid);
    }
    void setval()
    {
        cin>>len;
        cin>>wid;
        if(len>=1.0 && len<=20.0 && wid>=1 && wid<=20.0)
            cout<<"valid";
        else
        {
            cout<<"invalid";
            exit(0);
        }
         cout<<endl;
    }
    void getval()
    {
        cout<<len<<endl;
        cout<<wid<<endl;
        cout<<area()<<endl;
        cout<<perimeter()<<endl;
    }

};

int main()
{
    Rectangle rec;
    rec.setval();
    rec.getval();

    return 0;
}
