#include <bits/stdc++.h>

#define Max 2000000

using namespace std;

int status[(Max / 32) + 2];

bool Check(int N, int pos) {
    return (bool)( N & (1 << pos) );
}
int Set(int N, int pos) {
    return N = N | (1 << pos);
}

long long sum = 0;

void RSieve(int N) {
    int i, j, sqrtN;
    sqrtN = int( sqrt( N ) );
    for( i = 3; i <= sqrtN; i += 2) {
        if( !Check( status[i >> 5], i & 31 ) ) {
            for( j = i*i; j <= N; j += (i << 1) ) {
                status[j >> 5] = Set(status[j >> 5], j & 31);
            }
        }
    }
    sum += 2;
    for(i=3; i < N; i += 2)
        if( !Check( status[i >> 5], i & 31 ) )
            sum += i;
}

int main() {
    RSieve(Max);
    cout << sum << endl;
    return 0;
}
