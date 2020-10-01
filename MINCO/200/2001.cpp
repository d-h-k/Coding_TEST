#include <cstring>
#include <cstdio>

int bbq(int i) {
	if(i >=4 ){
		return i;
	}
	else {
		bbq(i+1);
	}

}

int main() {

	int a = bbq(0);

	return 0;
}

