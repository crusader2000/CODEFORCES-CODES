#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int j=0,i=0,temp=0;
    int arr[100];
    while(s[j]!='\0')
        j++;
   while(temp<j)
    {
        arr[i]=s[temp]-48;
        i++;
        temp+=2;
    }
    int len=i;
    for(i=1;i<len;i++)
        {
              int  key=arr[i];
        j=i-1;
                while(j>=0 && arr[j]>key)
                {
                arr[j+1]=arr[j];
                j--;
                }
        arr[j+1]=key;
    }
    i=0;
    while(i<(len-1))
    {
        cout<<arr[i]<<"+";
        i++;
    }
    cout<<arr[len-1];
}
