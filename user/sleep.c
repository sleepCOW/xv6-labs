#include "kernel/types.h"
#include "user/user.h"

// std in file descriptor
#define CIN 0
// std out file descriptor
#define COUT 1

const char* error = "No arguments provided!\n";

int
main(int argc, char *argv[])
{
  if (argc < 2)
  {
    write(COUT, error, strlen(error));
    exit(1);
  }

  int sleeptime = atoi(argv[1]);
  sleep(sleeptime);
  exit(0);
}
