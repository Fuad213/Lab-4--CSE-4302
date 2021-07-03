#include<bits/stdc++.h>
using namespace std;

class calculator
{
    private:
        int val;
public:
    calculator()
    {
        val=0;
    }
    calculator(int v)
    {
        val=v;
    }
    int getValue()
    {
        return val;
    }
    int setvalue(int n)
    {
        val=n;
    }
    void add(int value)
    {
        val+=value;
    }
    void subtract(int value)
    {
        val-=value;
    }
    void multiply(int value)
    {
        val*=value;
    }
    void divideby(int value)
    {
        if(value==0)
            cout<<"divide by 0 is undefined "<<endl;
        else
            val/=value;
    }
    void clear()
    {
        val=0;
    }
    void display()
    {
        cout<<"Calculator display: "<<val<<endl;
    }
    ~calculator()
    {
        cout<<"Calculator object is destroyed "<<endl;
    }
};

int main()
{
    int val;
    string str;
    calculator calc;
    while(1)
    {
        cin>>str;
        if(str=="add")
        {
            cin>>val;
            calc.add(val);
        }
        else if(str=="subtract")
        {
            cin>>val;
            calc.subtract(val);
        }
        else if(str=="multiply")
        {
            cin>>val;
            calc.multiply(val);
        }
        else if(str=="divide")
        {
            cin>>val;
            calc.divideby(val);
        }
        else if(str=="clear")
        {
            calc.display();
            break;
        }
        calc.display();
    }

    retrun 0;
}
