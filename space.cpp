
#include<iostream>
using namespace std;
int main()
{
        string s;
        int len,i,count=0;
      getline(cin,s);
 
        len=s.size();
 
        for(i=0;i<len;i++)
       {
                if(s[i]==' ')
                {
                        count++;
                }
       }
 
        cout<<count;
 
        return 0;
}
