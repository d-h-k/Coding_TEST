/*

a.txt 를 쓰기 형식으로 열어서 Hello, Psi 를 쓴 뒤, 다시 읽기 형식으로 열어서 그
내용을 읽어 출력한다.

*/
#include <stdio.h>
int main() {
  FILE *fp;
  char str[100];

  //fp = fopen("a.txt", "w");
  //fputs("Hello, Psi!!", fp);

  fp = freopen("random_input.txt", "r", fp);
  fgets(str, 99, fp);

  printf("%s", str);
  return 0;
}
