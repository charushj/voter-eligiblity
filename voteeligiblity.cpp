#include <iostream>
using namespace std;
int main()
{
 int age;
 cout<< "age of the person:";
 cin>>age;
 if(age>=18)
 {
     cout<<"\n you are elegible to vote";
 }
     else 
     {   
     cout<<"\n you are not eligble to vote";
     cout<<"\n Wait for "<< 18-age <<" years to vote in democratic elections";
     }
     return 0;
}