#include "io/io.h"

class Solution{
public:

 void fixedPoint(vector<int> &arr){   
 	 //* TC: O(), SC: O() 

 	//using linear search
 	auto linear = [&](){
 		int index=0;
 		for(auto i:arr){
 			if(index++ == i)
 				return i;
 		}

 		return -1;
 	};

 	// //using binary search
 	auto binary = [&](){

 		int lo=0;
 		int hi=arr.size()-1;

 		while(lo<=hi){

 			int mid = lo + (hi-lo)/2;

 			if(arr[mid] > mid)
 				hi=mid-1;
 			else if(arr[mid]<mid)
 				lo=mid+1;
 			else return  mid;

 		}

 		return -1;
 	};


 	clog(linear());
 	clog(binary());

 }   
} s;

int main(){
    io();
    vector<int> arr = {-10, -5, 0, 3, 7};
    cout << " Solution: " << endl;
    s.fixedPoint(arr);

    return 0;
}

