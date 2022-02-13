#include "io/io.h"


class student{

	string name;
	vector<int> marks;
public:
	student(string name, vector<int> marks){
		this->name=name;
		this->marks=marks;
	}

	string getname(){
		return this->name;
	}

	vector<int> getmarks(){
		return this->marks;
	}

	int calcMarks(){
		return accumulate(marks.begin(),marks.end(),0);
	}
	
};


class Report{

	vector<student> report;
	public:

    Report(vector<student> &report){
    	this->report=report;
    }
	
	static bool predicate(student s1,student s2){
			return s1.calcMarks() < s2.calcMarks();
	}
	
	void sortedMarks(){
			sort(report.begin(),report.end(),predicate);
	}	

	void display(){
		for(auto s:report)
			cout<<s.getname()<<" "<<s.calcMarks()<<endl;
	}

};
	

int main(){
	io();
	
	vector<student> report={
		student("Rishabh",{30,40,50}),
		student("Adittya",{20,70,80}),
		student("Gautam",{60,40,10}),
	};

	Report r1 = Report(report);
	r1.sortedMarks();
	r1.display();
	

	return 0;
}