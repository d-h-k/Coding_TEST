#include <iostream>
#include <string>
using namespace std;


int main() {
	string s1("he");
	string s2("he");
	string s3("he");
	string s4("he");
	string s5("he");
	string s6("he");
	string s7("he");
	string s8("he");
	string s9("he");
	string s10("he");

	string t("llo!");

	const char* p1 = "llo!";
	const char* p2 = p1 + 4;

	s1.append(t);
	s2.append(t, 0, 4);
	s3.append("llo");
	s4.append("llo", 4);
	s4.append(t.begin(), t.end());



}