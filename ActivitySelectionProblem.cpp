#include<iostream>
#include<algorithm>
using namespace std;
class activity
{
public:
    int start;
    int finish;
    activity()
    {
        this->start=0;
        this->finish=0;
    }
    activity(int start,int finish)
    {
        this->start=start;
        this->finish=finish;
    }
};
bool compare(activity f1,activity f2)
{
    return f1.finish<f2.finish;
}
int main()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    activity *ar=new activity[n];
    cout<<"Enter the starting and ending time:\n";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].start;
        cin>>ar[i].finish;
        cout<<endl;
    }
    sort(ar,ar+n,compare);
    int c=0;
    int last_finish=-1;
    for(int i=0;i<n;i++)
    {
        if(ar[i].start>=last_finish)
        {
            c++;
            last_finish=ar[i].finish;
        }
    }
    cout<<"The person can perform at most "<<c<<" activities";
}
