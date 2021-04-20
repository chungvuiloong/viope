#include<iostream>
using namespace std;
int main()
{
    int n,rem,count=0,count1=0,rem1;
    cin>>n;
    if(n==4 || n==7)
        cout<<"NO";
    else{
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        count++;
    }
    while(temp>0)
    {
        rem1=temp%10;
        if(rem1==4 || rem1==7)
            count1++;
        temp=temp/10;
    }
    if(count==count1 )
        cout<<"YES";
    else
        cout<<"NO";

}    return 0;
}
