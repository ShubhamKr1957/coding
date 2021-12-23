/*Given a positive integer , do the following:

If 1>=n>=9, print the lowercase English word corresponding to the number (e.g., one for 1 , two for 2, etc.).
If number>9 ,print Greater than 9.*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
     string s[10]={ "Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout<<"enter the number"<<"\n";

    cin>>n;
    if(n>9)
    {
        cout<<s[0];
    }
    else 
    {
        cout<<s[n];
    }
    
}