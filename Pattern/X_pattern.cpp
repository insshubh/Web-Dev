#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
     
    for(int i=0;i<n;i++)
    {
       
        for(int j=0;j<n;j++)
        {
            if(i==j || i+j==4 && i!=j)
            {
                cout<<"*";
                
            }
           
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}