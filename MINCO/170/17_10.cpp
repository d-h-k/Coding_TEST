#include <cstdio>

int arr[] = {3,4,1,1,2,6,8,7,8,9,10};

int get_sum(int index) {
    int temp=0;
    //int *pi;
    for(int i=index ; i < index+5 ; i++) {
        temp += arr[i];
    }
    return temp;
}

int main() {
    int a;
    scanf("%d",&a);

    int sum = get_sum(a);
    printf("%d",sum);
    return 0;
}