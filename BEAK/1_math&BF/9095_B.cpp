/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;
int i[11];
int sum(int first, int last);
int main(int argc, char** argv)
{
	int N,ans=0;
	scanf("%d",&N);

	for(i[1]=1 ; i[1]<=3 ; i[1]++) {
		if(N == i[1]) { ans++; }
	for(i[2]=1 ; i[2]<=3 ; i[2]++) {
		if(N == sum(1,2)) { ans++; }
	for(i[3]=1 ; i[3]<=3 ; i[3]++) {
		if(N == sum(1,3)) { ans++; }
	for(i[4]=1 ; i[4]<=3 ; i[4]++) {
		if(N == sum(1,4)) { ans++; }
	for(i[5]=1 ; i[5]<=3 ; i[5]++) {
		if(N == sum(1,5)) { ans++; }
	for(i[6]=1 ; i[6]<=3 ; i[6]++) {
		if(N == sum(1,6)) { ans++; }
	for(i[7]=1 ; i[7]<=3 ; i[7]++) {
		if(N == sum(1,7)) { ans++; }
	for(i[8]=1 ; i[8]<=3 ; i[8]++) {
		if(N == sum(1,8)) { ans++; }
	for(i[9]=1 ; i[9]<=3 ; i[9]++) {
		if(N == sum(1,9)) { ans++; }
	for(i[10]=1 ; i[10]<=3 ; i[10]++) {
		if(N == sum(1,10)) { ans++; }
	}}}}}}}}}}

	printf("%d\n",ans);
	return 0;//
}

int sum(int first, int last) {
	int num = (last-first)+1;
	int sum = 0;
	for(int a=0 ; a<num ; a++) {
		sum += i[a];
	}
	//printf("num:%d",num);

	return sum;
}
