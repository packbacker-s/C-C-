#include <iostream>
#include <stack>

using namespace std;
typedef long long ll;
int n,p,q,m;
unsigned int SA,SB,SC;

ll ans;
stack<ll> s;

unsigned int rng61(){
    SA ^= SA << 16;
    SA ^= SA >> 5;
    SA ^= SA << 1;
    unsigned int t = SA;
    SA = SB;
    SB = SC;
    SC ^= t ^ SA;
    return SC;
}

void gen(){
    cin >> n >> p >> q >> m >> SA >> SB >> SC;
    for(int i = 1; i <= n; i++){
        if(rng61() % (p + q) < p){
            int x = rng61() % m + 1;

            if(!s.size())
                s.push(x);
            else if(x > s.top())
                s.push(x);
            else
                s.push(s.top());
        }
        else{
            if(s.size()) s.pop();
            else continue;
        }
        if(s.size()) ans^=i*s.top();
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++){
        while(s.size())
            s.pop();
        ans = 0;
        gen();
        printf("Case #%d: %lld\n",i,ans);
    }

    return 0;
}
