#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        int c=0,si=0,e=0,m=0,h=0;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s=="cakewalk")
            c++;
            else if(s=="simple")
            si++;
            else if(s=="easy")
            e++;
            else if(s=="easy-medium" || s=="medium")
            m++;
            else if(s=="medium-hard" || s=="hard")
            h++;
            else i++;
        }
        if(c!=0 && si!=0 && e!=0 && m!=0 && h!=0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}
