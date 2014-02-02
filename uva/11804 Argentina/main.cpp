#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <iomanip>
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

#define Max 10

struct player {
    char name[25];
    int attack, defend;
    bool operator <(const player& a) const {
        return (attack > a.attack) || (attack == a.attack && defend < a.defend) ||
               (attack == a.attack && defend == a.defend && strcmp(name, a.name) < 0);
    }
} p[Max + 5];

bool sortName(const player y, const player x) {
    return strcmp(y.name, x.name) < 0;
}

int main() {
#ifndef ONLINE_JUDGE
    READ("input.txt");
#endif
    int tcase, caseNo = 0;

    SDi(tcase);
    while(tcase--) {
        rep(i, 10) {
            scanf("%s %d %d", &p[i].name, &p[i].attack, &p[i].defend);
        }
        sort(p, p + 10);
        sort(p, p + 5, sortName);
        sort(p + 5, p + 10, sortName);
        pf("Case %d:\n", ++caseNo);
        pf("(%s, %s, %s, %s, %s)\n", p[0].name, p[1].name, p[2].name, p[3].name, p[4].name);
        pf("(%s, %s, %s, %s, %s)\n", p[5].name, p[6].name, p[7].name, p[8].name, p[9].name);
    }
    return 0;
}
