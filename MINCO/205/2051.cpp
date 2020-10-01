#include <cstdio>

int BBQ(int dep){
	if(dep==3) {
		return 0;
	}
	else {
		BBQ(dep+1);
	}
	return 0;
}


int main() {

	BBQ(0);	


	return 0;
}

