#include "io/io.h"


class Solution{

typedef vector<int> vi;
typedef set<int> si;
typedef map<int,int> mii;
typedef unordered_map<int,int> umii;

public:
 
 vi unionArr(vi nums1, vi nums2){  
   //* m=nums1.size() and n=nums2.size()
   //* TC: O(m * log(m) + n * log(n)), SC: O(m+n) as insert in set takes O(logn)

 	si s(nums1.begin(),nums1.end());

 	for(auto i: nums2)
 		s.insert(i);

 	return vi(s.begin(),s.end());
 } 

 vi unionArrUsingMap(vi nums1, vi nums2){
  //* m=nums1.size() and n=nums2.size()
  //* TC: O(m+n), SC: O(m+n). as inserting element into map is O(1)

  mii mp;

  int j=0;
  for(auto i :nums1)
    mp[i] = j++;

  j=0;
  for(auto i :nums2)
    mp[i] = j++;

  vi ans;
  for(auto it: mp)
    ans.push_back(it.first);

  return ans;
 }  

 vi intersection(vi nums1, vi nums2){
  //* m=nums1.size() and n=nums2.size()
  //* TC: O(m * log(m) + n * log(n)), SC: O(m+n) as emplace in set takes O(logn)

    si s(nums1.begin(),nums1.end());
    vi ans;
    for(auto i : nums2)
      if(!s.emplace(i).second)
        ans.push_back(i);

    return ans;
 }

  vi intersectionUsingMap(vi nums1, vi nums2){
  
  //* m=nums1.size() and n=nums2.size()
  //* TC: O(m+n), SC: O(m+n). as inserting element into map is O(1)

  umii mp;

  int j=0;
  for(auto i :nums1)
    mp[i] = j++;

  j=0;
  vi ans;
  for(auto i :nums2)
   if(mp.count(i))
    ans.push_back(i);

  return ans;
 }
}s;

int main(){
  io();
  cout << " Solution: " << endl;
  auto nums1 = vi(1,3,4,8,6);
	auto nums2 = vi(3, 8, 6, 20, 90);

  //* union
	auto res = s.unionArr(nums1,nums2);
	console::display(res);
  
  res = s.unionArrUsingMap(nums1,nums2);
  console::display(res);


  //* intersection
  res = s.intersection(nums1,nums2);
  console::display(res);

  res = s.intersectionUsingMap(nums1,nums2);
  console::display(res);

    return 0;
}
