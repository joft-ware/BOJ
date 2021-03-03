# pragma GCC optimize ("O3")
# pragma GCC optimize ("Ofast")
# pragma GCC optimize ("unroll-loops")
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <stack>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <deque>
#include <map>
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#ifdef __CLANG___
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wshadow"
#endif

#define M 12
#define MM 11
long long mod = 1e9+7;

#define ll long long
#define ull unsigned ll
#define ld long double
#define Yes "Yes"
#define No "No"
#define YES "YES"
#define NO "NO"
#define mn m=n;


#define foi(a) for(ll i=1;i<=a;i++)
#define foj(a) for(ll j=1;j<=a;j++)
#define fok(a) for(ll k=1;k<=a;k++)
#define fori for(ll i=1;i<=n;i++)
#define forj for(ll j=1;j<=m;j++)
#define fork for(ll k=1;k<=l;k++)
#define foriw for(ll i=1;;i++)

#define scann scanf("%lld",&n)
#define scanm scanf("%lld",&m)
#define scant scanf("%lld",&t)
#define scanx scanf("%lld",&x)
#define scany scanf("%lld",&y)
#define scanc scanf("%c",&c)
#define scanxy scanf("%lld %lld",&x,&y)
#define scanyx scanf("%lld %lld",&y,&x)
#define scanwe scanf("%lld %lld",&w,&e)
#define scannm scanf("%lld %lld",&n,&m)
#define scanmn scanf("%lld %lld",&m,&n)
#define scannml scanf("%lld %lld %lld",&n,&m,&l)
#define scanxyz scanf("%lld %lld %lld",&x,&y,&z)
#define scanxyzr scanf("%lld %lld %lld %lld",&x,&y,&z,&r)
#define scans frees; scanf("%s", &s[1]); len = strlen(&s[1]);
#define scansn frees; scanf("%s", &s[1]); len = strlen(&s[1]); n=len;
#define scansm frees; scanf("%s", &s[1]); len = strlen(&s[1]); m=len;
#define scans1 scanf("%s", &s1[1]); len1 = strlen(&s1[1]);
#define scans2 scanf("%s", &s2[1]); len2 = strlen(&s2[1]);
#define scana freea; fori scanf("%lld",&a[i]);
#define scanna scann; fori scanf("%lld",&a[i]);
#define scana1d fori scanf("%1d",&a[i]);
#define scanb1d fori scanf("%1d",&b[i]);
#define scanb fori scanf("%lld",&b[i]);
#define scand fori scanf("%lld",&d[i]);
#define scanaa fori for(ll j=1;j<=m;j++) scanf("%lld",&aa[i][j]);
#define scanbb fori for(ll j=1;j<=m;j++) scanf("%lld",&bb[i][j]);
#define scanstr getline(cin,str); slen=str.length();for(int i=slen;i>=1;i--) str[i]=str[i-1]; str[0]=0;


#define printsum printf("%lld",sum);
#define printcase printf("Case %lld: ",++casenum);
#define printcases printf("Case #%lld: ",++casenum);
#define prints printf("%s",&s[1]);
#define printc printf("%c",c);
#define printmax printf("%lld",maxi);
#define printmin printf("%lld",mini);
#define printmini printf("%lld",mini);
#define printa fori {printf("%lld ",a[i]); }printf("\n");
#define printb fori {printf("%lld ",b[i]); }printf("\n");
#define printd fori {printf("%lld ",d[i]); }printf("\n");
#define printaa fori {for(ll j=1;j<=m;j++) {printf("%3d ",aa[i][j]);} printf("\n");}printf("\n");
#define printbb fori {for(ll j=1;j<=m;j++) {printf("%3d ",bb[i][j]);} printf("\n");}printf("\n");
#define printgg pr1l("gg");
#define prinnt

#define frees for(ll i=0;i<=len+n;i++) s[i]=0;
#define freea for(ll i=0;i<=n;i++) a[i]=0;
#define cleana for(ll i=0;i<=n;i++) a[i]=0;
#define cleanb for(ll i=0;i<=n;i++) b[i]=0;
#define sorta sort(a+1,a+n+1);
#define sortb sort(b+1,b+n+1);
#define suma sum=0; fori sum+=a[i];
#define infa fori a[i]=INF;
#define reversea fori tempa[i]=a[n+1-i]; fori a[i]=tempa[i];
#define findmax maxi=a[1]; fori if(a[i]>maxi) maxi=a[i];
#define findmaxn maxi=a[1]; fori if(a[i]>maxi) {maxi=a[i]; num=i;}
#define findmin mini=a[1]; fori if(a[i]<mini) mini=a[i];
#define issmall(a)      ((a>='a')&&(a<='z'))
#define isbig(a)      ((a>='A')&&(a<='Z'))

#define lens len = strlen(s);
#define test printf("TEST!");
#define wt while(t--)
#define w1 while(1)
#define INF 0x7f7f7f7f
#define br break
#define braek break
#define bk break
#define nbreak if(n==0) break;
#define boundcheck(tx,ty) if(tx>=1&&ty>=1&&tx<=n&&ty<=m)
#define strint fori a[i] = s[i] - '0';

#define X first
#define Y second
#define fo(i,a,b) for(i = a; i <= b; i++)
#define pb push_back
#define mp make_pair
#define vsort(v) sort(v.begin(),v.end());
#define sc(a) cin >> a
#define sc1(a) cin >> a
#define sc2(a,b) cin >> a >> b
#define sc3(a,b,c) cin >> a >> b >> c
#define sc4(a,b,c,d) cin >> a >> b >> c >> d
#define sc5(a,b,c,d,e) cin >> a >> b >> c >> d >> e
#define sc6(a,b,c,d,e,f) cin >> a >> b >> c >> d >> e >> f

#define pr(a) cout << (a)
#define prl cout << '\n'
#define pr1(a) cout << (a) << ' '
#define pr2(a,b) cout << (a) << ' ' << (b) << ' '
#define pr3(a,b,c) cout << (a) << ' ' << (b) << ' '<< (c) << ' '
#define pr4(a,b,c,d) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '
#define pr5(a,b,c,d,e) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' '
#define pr6(a,b,c,d,e,f) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' ' << (f) << ' '
#define pr0l cout << '\n';
#define pr1l(a) cout << (a) << '\n'
#define pr2l(a,b) cout << (a) << ' ' << (b) << '\n'
#define pr3l(a,b,c) cout << (a) << ' ' << (b) << ' '<< (c) << '\n'
#define pr4l(a,b,c,d) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << '\n'
#define pr5l(a,b,c,d,e) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << '\n'
#define pr6l(a,b,c,d,e,f) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' ' << (f) << '\n'
#define pr7l(a,b,c,d,e,f, g) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' ' << (f) << ' ' << (g) << '\n'

#define prcnt pr1l(cnt)
#define prno pr1l("no")
#define pryes pr1l("yes")
#define prNO pr1l("NO")
#define prYES pr1l("YES")
#define prmaxi pr1l(maxi)
#define prmax pr1l(maxi)
#define prnum pr1l(num)
#define prsum printsum
#define prstr for(ll wq=1;wq<=slen;wq++) pr(str[wq]);

using namespace std;
ll i, j, ii, jj, n, zz, yyy, xxx, bre, cnt, ans, slen, casenum, nn, hab, count, t, now, one, two, yy, m, yes, cntt, x1, x2, x3, Y1, y2, y3, temp, i1, i2, J1, j2, i3, j3, len1, len2, low, mid, left, right, high, ok, tx, ty, k, start, num, xx, qq, w, e, no, r, sum, x, y, z, l, len, mini = INF, maxi = -INF, x11, x22, x33, y11, y22, y33;
ll dx[5] = { 0,-1,0,1,0 };
ll dy[5] = { 0,0,-1,0,1 };
ll ddx[9] = { 0,-1,-1,-1,0,0,1,1,1 };
ll ddy[9] = { 0,-1,0,1,-1,1,-1,0,1 };
ld ld1, ld2, ld3, ld4, ld5, ld6, ld7;
ll a[5001], a1[800001], a2[800001], a3[M], a4[M], a5[M], bb[MM][MM], habtree[M], mintree[M], maxtree[M], minindextree[M];
ll b[800001], dp[M][10], dd[MM][MM][4];
ll d[800001], dist[M], aa[MM][MM], d1[M], d2[M], tempa[M];
ll qry[M][4];
bool check[M], visit[M], treecheck[M];
char s1[M], s2[M], ss[MM][MM];
char s[M];
char c1, c2, c, c3, c4;
ld ldmax, ldmin, ldmax1, ldmax2, ldmin1, ldmin2, ldd[M];

string str[M];
ull u1, u2, u3, u4;
queue<ll> q;
queue<ll> qx, qy;
priority_queue<ll> pq;
stack<ll> st;
deque<ll> dq;
map<string, ll> msi;
map<ll, string> mis;
vector<ll> v[M];
bool boo[M];
typedef pair<ll,ll> ppair;


ll zegob(ll x, ll y)
{
    ll k = 1;
    for (int i = 1; i <= y; i++)
        k *= x;
    return k;
}

bool da(char c)
{
    if (c >= 'A' && c <= 'Z')
        return true;
    return false;
}
bool so(char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}

bool vowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}

bool bound(int x, int y)
{
    if (x > 0 && y > 0 && x <= n && y <= m)
        return true;
    return false;
}

ll find(ll x)
{
    if (d[x] == x)
        return x;
    d[x]=find(d[x]);
    return d[x];
}

void un(ll x, ll y)
{
    ll q = find(x);
    ll w= find(y);
    if(q>w)
        d[q]=find(w);
    else
        d[q]=find(w);
}


bool same(ll x, ll y)
{
    return (find(x) == find(y));
}

ll gcd(ll x, ll y)
{
    if (x < y)
        swap(x, y);
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

ll bigger(ll x, ll y)
{
    if (x > y)
        return x;
    return y;
}

ll smaller(ll x, ll y)
{
    if (x < y)
        return x;
    return y;
}

bool descend(const pair<int, int> & a, const pair<int, int> & b)
{
    //If the first number is same
    if (a.first == b.first)
        return a.second > b.second; //The second number in Descending order
    return a.first > b.first; //The first number of bigger numbers to move forward -> Descending order
}

bool ascend(const pair<int, int> & a, const pair<int, int> & b)
{
    //If the first number is same
    if (a.first == b.first)
        return a.second < b.second; //The second number in Descending order
    return a.first > b.first; //The first number of bigger numbers to move forward -> Descending order
}

ll find_max(long long* a, ll n)
{
    findmax;
    return maxi;
}


void clean(long long* a, int n)
{
    fori
        a[i] = 0;
}

ll zari(ll n)
{
    k = 10;
    foriw
    {
        if (k > n)
            return i;
        k *= 10;
    }
}


ll biggest(int x, int y, int z)
{
    ll a[4];
    a[1] = x;
    a[2] = y;
    a[3] = z;
    sort(a + 1, a + 4);
    return a[3];
}

ll smallest(int x, int y, int z)
{
    ll a[4];
    a[1] = x;
    a[2] = y;
    a[3] = z;
    sort(a + 1, a + 4);
    return a[1];
}

ll minindex(ll x, ll y){
    if(a[x]==a[y]) return (smaller(x,y));
    return (a[x] < a[y]) ? x:y;
}

ll maketree_minindex(ll left, ll right, ll node)
{
    if (left >= right)
        return minindextree[node] = left;
    else
    {
        ll mid = (left + right) / 2;
        ll leftnode = maketree_minindex(left, mid, node * 2);
        ll rightnode = maketree_minindex(mid + 1, right, node * 2 + 1);
        return minindextree[node] = minindex(leftnode, rightnode);
    }
}

ll query_minindex(ll node, ll left, ll right, ll start, ll end)
{
    if (right < start || end < left)
        return 0; // 겹치지 않는 경우(영향이 없는 값을 반환)
    if (start <= left && right <= end) return minindextree[node]; // 모두 겹치는 경우
    int mid = (left + right) / 2; // 일부만 겹치는 경우
    ll leftnode = query_minindex(node * 2, left, mid, start, end);
    ll rightnode = query_minindex(node * 2 + 1, mid + 1, right, start, end);
    return minindex(leftnode, rightnode);
}


ll maketree_min(ll left, ll right, ll node)
{
    if (left == right)
        return mintree[node] = a[left];
    else
    {
        int mid = (left + right) / 2;
        mintree[node] = smaller(maketree_min(left, mid, node * 2), maketree_min(mid + 1, right, node * 2 + 1)); //작은거
        return mintree[node];
    }
}

ll query_min(ll node, ll left, ll right, ll start, ll end)
{
    if (right < start || end < left)
        return INF; // 겹치지 않는 경우(영향이 없는 값을 반환)
    if (start <= left && right <= end) return mintree[node]; // 모두 겹치는 경우
    int mid = (left + right) / 2; // 일부만 겹치는 경우
    return smaller(query_min(node * 2, left, mid, start, end), query_min(node * 2 + 1, mid + 1, right, start, end));
}

ll maketree_max(ll left, ll right, ll node)
{
    if (left == right)
        return maxtree[node] = a[left];
    else
    {
        ll mid = (left + right) / 2;
        maxtree[node] = bigger(maketree_max(left, mid, node * 2), maketree_max(mid + 1, right, node * 2 + 1)); //작은거
        return maxtree[node];
    }
}

ll query_max(ll node, ll left, ll right, ll start, ll end)
{
    if (right < start || end < left)
        return -1; // 겹치지 않는 경우(영향이 없는 값을 반환)
    if (start <= left && right <= end) return maxtree[node]; // 모두 겹치는 경우
    int mid = (left + right) / 2; // 일부만 겹치는 경우
    return bigger(query_max(node * 2, left, mid, start, end), query_max(node * 2 + 1, mid + 1, right, start, end));
}

ll maketree_hab(ll left, ll right, ll node)
{
    treecheck[node] = 1;
    if (left == right)
    {
        d[left] = node;
        habtree[left] = a[left];
        return habtree[node];
    }
    else
    {
        ll mid = (left + right) / 2;
        habtree[node] = (maketree_hab(left, mid, node * 2) + maketree_hab(mid + 1, right, node * 2 + 1) % 1000000007) % 1000000007;
        return habtree[node];
    }
}

ll query_hab(ll node, ll left, ll right, ll start, ll end)
{
    if (right < start || end < left)
        return 0; // 겹치지 않는 경우(영향이 없는 값을 반환)
    if (start <= left && right <= end)
        return habtree[node]; // 모두 겹치는 경우
    ll mid = (left + right) / 2; // 일부만 겹치는 경우
    return (query_hab(node * 2, left, mid, start, end)) + (query_hab(node * 2 + 1, mid + 1, right, start, end));
}

ll update_min(ll node, ll left, ll right, ll idx) ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
{
    if (idx<left || idx>right) // update 필요없음
        return mintree[node];
    if(left==right)
        return mintree[node] = a[left];

    ll mid = (left + right) / 2;
    ll leftnode = update_min(node*2,left,mid,idx);
    ll rightnode = update_min(node*2+1,mid+1,right,idx);
    mintree[node]=min(leftnode, rightnode);
    return mintree[node];
}

ll fact(ll n)
{
    k = 1;
    fori
        k *= i;
    return k;
}

long long dfs(long long now, long long visit)
{
    pr2l(now, visit);
    if (visit == ((1 << n) - 1))
    {
        dp[now][visit] = ((aa[now][1] == 0) ? INF : aa[now][1]);
        return dp[now][visit];
    }
    if (dp[now][visit] != INF)
        return dp[now][visit];
    mini = INF;
    for (long long i = 1; i <= n; i++)
    {

        if ((visit & (1 << (i - 1))) == 0 && aa[now][i] > 0)
        {
            dp[now][visit] = smaller(mini, aa[now][i] + dfs(i, (visit | (1 << (i - 1)))));
            return dp[now][visit];
        }
    }
}



void re(int x, int lev)
{
    a[lev] = x;
    if (lev == m)
    {
        for (int i = 1; i <= m; i++)
            printf("%d ", b[a[i]]);
        printf("\n");
        return;
    }
    fori
    {
        if (i != x)
        {
            check[i] = 1;
            re(i, lev + 1);
            check[i] = 0;
        }
    }
}

ll reverse(ll x)
{
    ll sum = 0;
    ll t = x;
    ll z = zari(x);
    foi(z)
    {
        sum += (t % 10) * zegob(10, z - i);
        t /= 10;
    }
    return sum;
}

ll ds(char c)
{
    ll x;
    if(so(c))
        x = (c-'a'+1);
    else
        x = (c-'A'+27);
    return x;
}

ld ccw(ld x1, ld x2, ld x3, ld y1, ld y2, ld y3) {
    ld x = (x1*y2+x2*y3+x3*y1);
    x+= (-y1*x2-y2*x3-y3*x1);
    return x/2;
}

ll f(ll x, ll y){
    if(!y) return 1;
    if(y&1) return (x*f(x,y-1)%mod)%mod;
    return f((x*x)%mod,y/2)%mod;
}

int main(void) {
    scanmn;
    scana;
    fori
        b[a[i]]=1;
    fori{
        fo(j,i+1,n){
            x=a[i];
            y=a[j];
            d[x+y]++;
            a1[x+y]=x;
            a2[x+y]=y;
        }
    }

    forj{
        if(d[j]&&d[m-j]){
            w=d[j]+d[m-j];
            if(w>3){
                yes=1;
                break;
            }
            if(w==3){
                if(d[j]==1){
                    x=a1[j];
                    y=a2[j];
                    if(m-j-x>0&&m-j-y>0) {
                        if (b[(m - j) - x] && b[(m - j) - y]) {
                        } else {
                            yes = 1;
                            break;
                        }
                    }
                    else {
                        yes=1;
                        break;
                    }
                }
                else{
                    x=a1[m-j];
                    y=a2[m-j];
                    if(j-x>0&&j-y>0) {
                        if (b[j - x] && b[j - y]) {
                        }
                        else{
                            yes=1;
                            break;
                        }
                    }
                    else {
                        yes=1;
                        break;
                    }
                }
            }
            else
            {
                x=a1[j];
                y=a2[j];
                z=a1[m-j];
                r=a2[m-j];
                if((x-y)*(x-z)*(x-r)*(y-z)*(y-r)*(z*r))
                {
                    yes=1;
                    break;
                }
            }
        }
    }
    if(yes)
        prYES;
    else
        prNO;

};