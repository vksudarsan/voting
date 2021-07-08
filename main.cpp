#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"enter age:";
    cin>>a;
    if(a<18)
    {
        cout<<"you are not eligible to vote";
    }
    else{
         cout<<"you are eligible to vote";
    }

    return 0;
}
