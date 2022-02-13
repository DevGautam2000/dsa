#include "io/io.h"

class Solution{
	int bad=4;
	bool isBadVersion(int version){
		return bad<=version; 
	}
public:

 int firstBadVersion(int n) {
        int lo = 1, hi = n, mid;
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            if (isBadVersion(mid)) hi = mid;
            else lo = mid+1;
        }
        return lo;
    }  
} s;

int main(){
    io();
    int n=5;
    cout << " Solution: " <<  s.firstBadVersion(n) << endl;

    return 0;
}

