#include <bits/stdc++.h>
#define _ ios_base:sync_with_stdio(0);cin.tie(0);
using namespace std;
/*** typedef ***/
#define MEMSET_INF 127
#define MEMSET_HALF_INF 63
#define stream istringstream
#define rep(i,n) for(__typeof(n) i=0; i<(n); i++)
#define repl(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define FOR(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define INF (1<<30)
#define PI acos(-1.0)
#define pb push_back
#define ppb pop_back
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define memsp(x) mem(x,MEMSET_INF)
#define memdp(x) mem(x,-1)
#define memca(x) mem(x,0)
#define eps 1e-9
#define pii pair<int,int>
#define pmp make_pair
#define ft first
#define sd second
#define vi vector<int>
#define vpii vector<pii>
#define si set<int>
#define msi map<string , int >
#define mis map<int , string >
typedef long long i64;
typedef unsigned long long ui64;
/** function **/
#define SDi(x) sf("%d",&x)
#define SDl(x) sf("%lld",&x)
#define SDs(x) sf("%s",x)
#define SD2(x,y) sf("%d%d",&x,&y)
#define SD3(x,y,z) sf("%d%d%d",&x,&y,&z)
#define pf printf
#define print(x) pf("%d ", x)
#define println(x) pf("%d\n", x)
#define sf scanf
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

#define Max 10001

int main() {
#ifndef ONLINE_JUDGE
    READ("input.txt");
#endif
    int n;
    char input[Max];
    int freq[Max];
    SDi(n);
    getchar();
    while(n--) {
        gets(input);
        int len = strlen(input), indx = 0;
        mem(freq, 0);
        char current, previous;
        previous = input[0];
        freq[0] = 1;
        for (int i = 1; i < len - 1; i++) {
            current = input[i];
            if (current == previous) freq[indx]++;
            else previous = current, freq[++indx]++;
        }
        if (input[len - 1] == previous) freq[indx]++;
        else freq[++indx]++;
        freq[indx]++;
        if (freq[0] == 1) {
            for (int i = len - 1; i >= 0; i--) {
                // will solve later
            }
        }
    }
    return 0;
}
