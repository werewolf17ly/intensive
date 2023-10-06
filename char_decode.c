#include <stdio.h>
int main ()
{
  int c;
  while ((c = getchar ()) != EOF) {
    printf ("%3d%s", c, (c == '\n' ? "\n" : ""));
  }

  return 0;
}
