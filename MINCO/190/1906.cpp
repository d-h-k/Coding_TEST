#include <cstdio>
#include <cstring>

using namespace std;


struct a1906
{
    int win = 0;
    char name[100];
    /* data */
}typedef cell;

cell arr[7];

/*
cell arr[7] = {
    {15,"summer"},
    {33,"cloe"},
    {24,"summer"},
    {28,"niki"},
    {32,"jenny"},
    {20,"summer"},
    {40,"coco"}
};
*/
void cinit() {
    int dft[] = { 15,33,24,28,32,20,40 };
    const char * dnm[7] = { "summer", "cloe", "suma", "nika", "jeny", "summer", "coco" };
    for (int i = 0; i < 7; i++) {
        arr[i].win = dft[i];
        strcpy(arr[i].name, dnm[i]);
    }
    

}

int _strstr(char* s1, char* s2) {
    unsigned int i = 0;
    while ((s1[i] == s2[i])) {
        if (s1[i] == '\0' && s2[i] == '\0') {
            return 1;//1=sam
        }
        i++;
    }
    return 0;
};

int main() {
    // 1) 나이와 이름을 입력받아 구조체에 저장
    // 2) strcmp 함수를 만들어서 이름 검색
    // 3) 첫사랑을 찾으면 출력하고 종료
    cinit();

    cell mylove;
    scanf(" %s", mylove.name);
    scanf(" %d", &mylove.win);
    
    bool is_find = false;
    int where = -1;

    for (int i = 0; i < 7; i++) {
        if (mylove.win == arr[i].win) {
            if ( _strstr(mylove.name, arr[i].name) == 1) {
                where = i;
                is_find = true;
                break;
            }
        }
    }

    printf("%d", where);

    return 0;
}