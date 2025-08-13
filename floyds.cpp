// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<< "Enter No of rows for Floyd's Triangle: ";
    cin >> n ;
    if (n!=0)
    {
        for(int i=0;i<n;i++)
        {
            for (int j=1;j<=i+1;j++)
            {
                cout <<j<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
