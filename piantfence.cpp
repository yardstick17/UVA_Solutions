#include<bits/stdc++.h>

using namespace std ;
int a[100002][2] ;
int main()
{
int t,i,j,k,n,m,pre;
char prevcol,temp ;
char s[2] ;
long long int col ;
cin >> t ;
while(t--) {
    cin >> n  ;
    cin >> m ;
    //cout << n << " " << m << endl;
    if(m == 1) {
        scanf("%s",s);
        a[0][0] = s[0] ;
        scanf("%d",&a[0][1]) ;
        //printf("%c %d\n",a[0][0],a[0][1]);
        printf("1\n");
        continue ;
        }
    else {
            col = 1 ;
        for(i=0;i<m;i++) {
            scanf("%s",s);
            a[i][0] = s[0] ;
            scanf("%d",&a[i][1]) ;
            }
        pre = a[0][1] ;
        prevcol = a[0][0] ;
        for(i=1;i<m;i++) {
            if(prevcol != a[i][0]) {
                col = (col*(a[i][1] - pre))%1000000009 ;
                pre = a[i][1] ;
                prevcol = a[i][0] ;
                }
            pre = a[i][1] ;
            prevcol = a[i][0] ;
            }
        printf("%lld\n",col) ;
        }
    }
return 0;
}
