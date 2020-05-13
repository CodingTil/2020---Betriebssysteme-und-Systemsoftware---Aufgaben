#include <stdio.h>
#include <unistd.h>

void child_A_proc()
{
  while (1)
  {
    fprintf(stdout, "%s", "A");
    fflush(stdout);
  }
}

void child_B_proc()
{
  while (1)
  {
    fprintf(stdout, "%s", "C");
    fflush(stdout);
  }
}

void parent_proc()
{
  while (1)
  {
    write(1, "B", 1);
  }
}

int main(void)
{
  if (fork() == 0)
    child_A_proc();
  else {
    if (fork() == 0) {
      child_B_proc();
    } else {
      parent_proc();
    }
  }

  return 0;
}
