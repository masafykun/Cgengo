#include<sys/types.h>
#include<sys/socket.h>
#include<netdb.h>
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
  struct addrinfo hints, *res, *res0;
  int error;
  char hbuf[NI_MAXHOST];

  if (argc != 2) {
    fprintf(stderr, "Specify a hostname.\n");
    return (1);
  }
  
  memset(&hints, 0, sizeof(hints));
  hints.ai_family = AF_INET;
  hints.ai_socktype = SOCK_STREAM;
  error = getaddrinfo(argv[1], NULL, &hints, &res0);

  if (error) {
    fprintf(stderr, "error: %s\n", gai_strerror(error));
    return (1);

  }
  for (res = res0; res; res = res->ai_next) {
    if (res->ai_family == AF_INET) {
      getnameinfo(res->ai_addr, res->ai_addrlen, hbuf,
		  sizeof(hbuf), NULL, 0, NI_NUMERICHOST);
      printf("%s\n", hbuf);
    }
  }

  freeaddrinfo(res0);
  return (0);
}
