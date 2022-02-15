#pragma once
#include<iostream>

namespace algo{
	template<typename T>
	void srt(vector<T> &n) {
	  sort(n.begin(),n.end());
	}

	template<typename T>
	void rsrt(vector<T> &n) {
	  sort(n.rbegin(),n.rend());
	}

	template<typename T>
	void srt(vector<T> &n,int start,int end) {
	  sort(n.begin()+start,n.begin()+end);
	}

}