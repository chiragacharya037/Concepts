# include <bits/stdc++.h>
using namespace std;
int i,X,result, Left, Right, mid,n,nrQueries;
int A[100005];
int main ()
{
	printf("Enter size of array and queries you will enter:\n");
    scanf ("%d%d", &n, &nrQueries);
	printf("Enter all array elements\n");
    for (i=0; i<n; ++i)
        scanf ("%d", &A[i]);
	printf("Time to enter queries\n");
    // let's take each query
    for (i=1; i<=nrQueries; ++i) {
        scanf ("%d", &X); //read the number we are searching

        result=-1;
        Left=0; Right=n-1;

        while (Left <= Right) {
            mid=(Left+Right)/2;
            if (A[mid]==X) result=mid, Right=mid-1;
                else if (X < A[mid]) Right=mid-1;
                                else Left=mid+1;
        }
        printf("Your element is at pos:%d\n", result);
    }

    return 0;
}
