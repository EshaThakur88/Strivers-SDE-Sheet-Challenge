#include <iostream>
using namespace std; 

void give_subseq(string str, vector<string> &vec, string op, int i){
	if(i==str.length()) {
		if(op.length()>0)
			vec.push_back(op);
		return;
	}
	op.push_back(str[i]);
	give_subseq(str, vec, op, i+1);
	op.pop_back();
	give_subseq(str, vec, op, i+1);
	
}

vector<string> subsequences(string str){
	vector<string> vec;
	string op="";

	give_subseq(str, vec, op, 0);

	return vec;
	
}
