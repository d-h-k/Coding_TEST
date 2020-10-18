#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char buf[20000];

    fgets(buf,20000,stdin);
    int slen  = strlen(buf);
    //
    slen = 1;
    for(int i=0 ; i<slen ; i++) {
        if(buf[i] == '<') {
            cout << "정상"<<endl;        
        }
        else if(buf[i] == '>') {
            cout << "비정상"<<endl;
        }
        //else if() {}
        else {

        }
    }
    

    return 0;
}


/*

#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char str[20];
	cin >> str;
	int check = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '<')
			check++;
		if (str[i] == '>')
			check--;
		if (check < 0)
			break;
	}
	if (check == 0)
		cout << "정상";
	else
		cout << "비정상";

	return 0;
}


*/