/*

a.txt �� ���� �������� ��� Hello, Psi �� �� ��, �ٽ� �б� �������� ��� ��
������ �о� ����Ѵ�.

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
