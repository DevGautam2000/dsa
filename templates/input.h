
namespace input{
	
	template<typename FUNCTION>
	void loop(int n, FUNCTION f) {
	  for (int i = 0; i < n; ++i) {
	    f(i);
	  }
	}

	template<typename FUNCTION>
	void floop(vector<int> &n, FUNCTION f) {
	  for (auto &i: n) {
	    f(i);
	  }
	}
}