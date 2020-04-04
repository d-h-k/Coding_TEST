#pragma warning(disable: 4996)

#include <cstdio>
#include <string>

#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	FILE * fp;
	int test_case;
	fflush(stdin);
	fp = freopen("1204_input.txt", "r", stdin);
	int arr[101] = { 0 };
	int temp;
	int max=0;
	int maxidx = 0;
	int curtc = 0;
	scanf("%d", &test_case);
	for (int i = 0; i < test_case; i++) {

		memset(arr, 0, sizeof(arr));
		max = 0;
		
		scanf("%d", &curtc);
		//printf("curtc:%d\n" ,curtc);
		for (int j = 0; j < 1000; j++) {
			scanf("%d", &temp);
			
			if (j % 100 == 3) {
			//	printf("temp : %d\n", temp);
			}
			arr[temp] = arr[temp]+1;
		}
		for (int i = 1; i < 101; i++) {
			if (max <= arr[i]) {
				//printf("max:%d, arr[%d]:%d\n",max,i,arr[i]);
				max = arr[i];
				maxidx = i;
			}
		}

		printf("#T%d %d\n", i + 1, maxidx);
		
	}





	fclose(fp);
	return 0;
}