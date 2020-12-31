#include<iostream>
#include<string>
#include<vector>
using namespace std;
int len=-1;
string clearspace(string s){
int i,temp;
for(i=0;i<s.size();i++){
    temp=i;
    if(s[i]==' '&&s[i+1]==' '){
        int count=0;
        for(int j=i+1;j<s.size();j++){
            if(s[j]==' '){
                count++;
            }else
            {
                break;
            }
            
        }

        s.erase(i,count);
    }
}
if(s[s.size()-1]==' ')s.erase(s.size()-1,s.size()-1);
if(s[0]==' ')s.erase(0,1);
i=s.size();
if(len<i)len=i;
return s;

}
int main(){
vector<string> s;
string temp;
int t;
bool falg=false;
while (cin>>t)
{
    if(t!=0&&falg)cout<<endl;
    s.clear();
    if(t==0)break;
    temp.clear();
   getchar();
   int i=0;
   len=0;
while(t>i){
    getline(cin,temp);
    s.push_back(clearspace(temp));
    i++;
}
i=0;
while (t>i)
{
   string tm=s[i];
   int x=tm.size();
   if(x<len){
       for(int j=0;j<len-x;j++)cout<<" ";
   }
   cout<<s[i]<<endl;
   i++;
}
falg=true;
}


return 0;
}

