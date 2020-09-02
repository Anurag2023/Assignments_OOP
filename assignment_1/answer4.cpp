//Find out whether a given string is palindrome or not.
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   char string[1000];
   cin>>string;
   int n = strlen(string);
   int count = 0;
   for(int i=0;i<n/2;i++)
   {
       if(string[i]==string[n-i-1])
       {
           count++;
       }

   }
   if(count == n/2)
   {
       cout<<"String is palindrome";
   }else{
       cout<<"String is not a palindrome";
   }
    return 0;
}
