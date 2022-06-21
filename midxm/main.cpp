#include <iostream>

using namespace std;

int main()
{
    string arr;
    cout<<"Enter an Equation: ";
    cin>>arr;

    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]=='+'||arr[i]=='-'||arr[i]=='*'||arr[i]=='/'||arr[i]=='=')
        {
            cout<<"' "<<arr[i]<<" '"<<" is an Operator\n";
        }
    }

    for(int i=0; i<arr.size(); i++)
    {
        if(isdigit(arr[i]))
        {
            cout<<"' "<<arr[i]<<" '"<<" is a Constant Number\n";
        }
    }
}
