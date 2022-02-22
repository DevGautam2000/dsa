#pragma once
#include <bits/stdc++.h>

#define vi(...) vector<int>{__VA_ARGS__}
#define vc(...) vector<char>{__VA_ARGS__}

namespace var{


	template<class T,typename... Args>
	vector<T> listOf(Args... args) {
		return vector<T>{args...};
	}

	template<class T,typename... Args>
	set<T> setOf(Args... args) {
		return set<T>{args...};
	}

	template<class T,typename... Args>
	unordered_set<T> unsetOf(Args... args) {
		return unordered_set<T>{args...};
	}
}

namespace type{
	
	namespace Int{
		typedef vector<int> vec;
		typedef set<int> set;
		typedef unordered_set<int> unset;
		typedef map<int,int> map;
		typedef unordered_map<int,int> unmap;
	}

	namespace Char{

	typedef vector<char> vec;
	typedef set<char> set;
	typedef unordered_set<char> unset;
	typedef map<char,char> map;
	typedef unordered_map<char,char> unmap;

	}

}