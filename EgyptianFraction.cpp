#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
void Egyptian(int num,int den)
{
    if(num==0 || den==0)
    {
        return;
    }
    if(den%num==0)
    {
        cout<<"1/"<<den/num;
        return;
    }
    if(num%den==0)
    {
        cout<<num/den;
        return;
    }
    if(num>den)
    {
        cout<<num/den<<"+";
        Egyptian(num%den,den);
        return;
    }
    int n=ceil((float)den/(float)num);
    cout<<"1/"<<n<<"+";
    Egyptian(num*n-den,n*den);
}
int main()
{
    int num;
    int den;
    cout<<"Enter the numerator and denominator of number:\n";
    cin>>num;
    cin>>den;
    cout<<"Egyptian Fraction Representation of "<<num<<"/"<<den<<" is \n";
    Egyptian(num,den);
}
