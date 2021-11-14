#include<iostream>
#include<string>
using namespace std;
bool rep(string x, char ch)
{
    for(int i = 0 ; i < x.size(); i++)
    {
        if(x[i] == ch)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    cout<<"enter a string"<<endl;
    string s{};string k{}; string l{""}; 
    cin>>s;
    k = s[0];int len{(int)k.size()}; int maxlen{(int)k.size()};
    for(int i = 0 ; i <(s.size()-1); i++)
    {
        k=s[i];
        for(int j = i+1; j<(s.size()); j++)
        {
            if(rep(k,s[j])==true)
            {
                k+=s[j];
                len = k.size();
            }
            else
            {  
                if(len>maxlen)
                maxlen = len;
                break;               
            }
        }
        if(len>maxlen)
            maxlen = len;
    }cout<<maxlen;
}
