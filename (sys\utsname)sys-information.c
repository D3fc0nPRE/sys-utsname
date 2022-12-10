 #include <stdio.h>
 #include <stdlib.h>
 #include <errno.h>
 #include <sys\utsname.h>
  int main(void) {
  struct utsname buffer;
        errno = 0;
        if (uname(&buffer) < 0) {
   perror("uname");
   exit(EXIT_FAILURE);
  }
      printf("system name  = %s\n" , buffer.sysname);
      printf("Nodename     = %s\n" , buffer.nodename);
      printf("Release      = %s\n" , buffer.release);
      printf("Machine      = %s\n" , buffer.machine);
      printf("version      = %s\n" , buffer.version);
      printf("Domainname   = %s\n" , buffer.domainname);
      return 0;
 }
  
