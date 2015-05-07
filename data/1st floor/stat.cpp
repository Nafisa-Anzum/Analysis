#include<bits/stdc++.h>
#define mx 1517
#define pb push_back
#define ll long long
using namespace std;
struct node
{
    char ssid[100];
    int level;
    ll tp;
    node(char x[],int y,ll z)
    {
        strcpy(ssid,x);level=y,tp=z;
    }
    bool operator<(const node t)const
    {
        return (strcmp(ssid,t.ssid)<0)||((strcmp(ssid,t.ssid)==0) && tp<t.tp);
    }
};
vector<node>data;
int main()
{
    map<string,int>m;

    freopen("in.txt","r",stdin);
    freopen("107-G09level.txt","w",stdout);
    ll mn=10000000000000LL;
    ll mnx=10000000000000LL;
    for(int i=1;i<=mx;i++)
    {
        int id,lev;
        ll tmp;
        char ssid[100],loc[100];

        scanf("%d %s %d %lld %s",&id,ssid,&lev,&tmp,loc);
        if(mnx>tmp)mnx=tmp;

        if(strcmp(loc,"cse107")==0 &&strcmp(ssid,"CSE-G09")==0 )
        {

            data.pb(node(ssid,lev,tmp));
        }
    }
    sort(data.begin(),data.end());
    //printf("%lld\n",mnx);
    //for(int i=0;i<data.size();i++){mn=min(mn,data[i].tp);}
    //printf("%lld\n",mn);
    for(int i=0;i<data.size();i++)
    {
        data[i].tp=data[i].tp-mnx;
       //printf("%s %d %lld\n",data[i].ssid,data[i].level,data[i].tp);
        //printf("%lld %d\n",data[i].tp,data[i].level);
        printf("%d\n",data[i].level);
    }



}
