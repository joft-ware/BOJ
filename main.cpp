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


#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#define M 1000002
#define MM 1102
#define ull unsigned long long
#define ll long long
#define ld long double

#define foi(a) for(i=1;i<=a;i++)
#define foj(a) for(j=1;j<=a;j++)
#define fok(a) for(k=1;k<=a;k++)
#define fori for(i=1;i<=n;i++)
#define forj for(j=1;j<=m;j++)
#define fork for(k=1;k<=l;k++)
#define foriw for(i=1;;i++)

#define scann scanf("%lld",&n)
#define scanm scanf("%lld",&m)
#define scant scanf("%lld",&t)
#define scanx scanf("%lld",&x)
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
#define scanb fori scanf("%d",&b[i]);
#define scanaa fori for(ll j=1;j<=m;j++) scanf("%lld",&aa[i][j]);
#define scanbb fori for(ll j=1;j<=m;j++) scanf("%lld",&bb[i][j]);
#define scanstr getline(cin,str); slen=str.length();for(int i=slen;i>=1;i--) str[i]=str[i-1]; str[0]=0;



#define printsum printf("%lld",sum);
#define printcase printf("Case %lld: ",++casenum);
#define printcases printf("Case #%lld: ",++casenum);
#define prints printf("%s",&s[1]);
#define printc printf("%c",c);
#define printmax printf("%lld",maxi);
#define printa fori {printf("%lld ",a[i]); }printf("\n");
#define printb fori {printf("%lld ",b[i]); }printf("\n");
#define printaa fori {for(ll j=1;j<=m;j++) {printf("%3d ",aa[i][j]);} printf("\n");}printf("\n");
#define printbb fori {for(ll j=1;j<=m;j++) {printf("%3d ",bb[i][j]);} printf("\n");}printf("\n");

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

#define prcnt pr(cnt)
#define prno pr("no")
#define pryes pr("yes")
#define prmaxi pr(maxi)
#define prmax pr(maxi)
#define prnum pr(num)
#define prsum printsum
#define prstr for(ll wq=1;wq<=slen;wq++) pr(str[wq]);

using namespace std;
ll i, j, ii, jj, n, zz, yyy, xxx, bre, cnt, ans, slen, casenum, nn, hab, count, t, now, one, two, yy, m, yes, cntt, x1, x2, x3, Y1, y2, y3, temp, i1, i2, J1, j2, i3, j3, len1, len2, low, mid, left, right, high, ok, tx, ty, k, start, num, xx, qq, w, e, no, r, sum, x, y, z, l, len, mini = INF, maxi = -INF, x11, x22, x33, y11, y22, y33;
ll dx[5] = { 0,-1,0,1,0 };
ll dy[5] = { 0,0,-1,0,1 };
ll ddx[9] = { 0,-1,-1,-1,0,0,1,1,1 };
ll ddy[9] = { 0,-1,0,1,-1,1,-1,0,1 };
ld ld1, ld2, ld3, ld4, ld5, ld6, ld7;
ll a[M], a1[M], a2[M], a3[M], a4[M], a5[M], bb[MM][MM], habtree[M], mintree[M], maxtree[M];
ll b[M], dp[10][M];
ll d[M], dist[M], aa[MM][MM], d1[M], d2[M], tempa[M];
bool check[M], visit[M], treecheck[M];
char s1[M], s2[M], ss[MM][MM];
char s[M];
char c1, c2, c, c3, c4;
ld ldmax, ldmin, ldmax1, ldmax2, ldmin1, ldmin2, ldd[M];

string str, str1;
ull u1, u2, u3, u4;
queue<int> q;
queue<int> qx, qy;
priority_queue<int> pq;
stack<int> st;
pair<int, int> p[M];
deque<int> dq;

bool boo[10000001];


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

int find(int x)
{
    if (d[x] == x)
        return x;
    return find(d[x]);
}

void un(int x, int y)
{
    int q = find(x);
    int w = find(y);
    if (q < w)
        d[w] = q;
    else
        d[q] = w;
}

bool bound(int x, int y)
{
    if (x > 0 && y > 0 && x <= n && y <= m)
        return true;
    return false;
}

bool same(int x, int y)
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


bool zzz(int x, int y, int z)
{
    if (x == 0 && y == 0 && z == 0)
        return true;
    return false;
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

ll maketree_min(int left, int right, int node)
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

ll query_min(int node, int left, int right, int start, int end)
{
    if (right < start || end < left)
        return 9876543210; // 겹치지 않는 경우(영향이 없는 값을 반환)
    if (start <= left && right <= end) return mintree[node]; // 모두 겹치는 경우
    int mid = (left + right) / 2; // 일부만 겹치는 경우
    return smaller(query_min(node * 2, left, mid, start, end), query_min(node * 2 + 1, mid + 1, right, start, end));
}

ll maketree_max(int left, int right, int node)
{
    if (left == right)
        return maxtree[node] = a[left];
    else
    {
        int mid = (left + right) / 2;
        maxtree[node] = bigger(maketree_max(left, mid, node * 2), maketree_max(mid + 1, right, node * 2 + 1)); //작은거
        return maxtree[node];
    }
}

ll query_max(int node, int left, int right, int start, int end)
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


void update(ll node, ll left, ll right, ll idx)
{
    if (idx<left || idx>right)
        return;
    if (left == right)
    {
        habtree[node] = 1;
        return;
    }
    ll mid = (left + right) / 2;
    update(node * 2, left, mid, idx);
    update(node * 2 + 1, mid + 1, right, idx);
    habtree[node] = habtree[node * 2] + habtree[node * 2 + 1];
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

ll ar[20][20][4];
void f(int w)
{

}


int main(void)
{
    scann;
    scana;
    fori
    {
        x=a[i];
        x -= i;
        x++;
        pq.push(x);
        b[i]=pq.top();
        pq.push(x);
        pq.pop();
    }
    for(i=n-1;i>=1;i--)
        b[i]=min(b[i],b[i+1]);
    fori
        pr1l(b[i]+(i-1));
}