#include<sys/types.h>
#include<sys/socket.h>
#include<netdb.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(int argc, char *argv[]){
  struct addrinfo hints, *res, *res0;
  int len, error;
  int s = -1;
  char buf[4096], hbuf[NI_MAXHOST];
  
  if (argc != 2) {
    fprintf(stderr, "Specify a hostname.\n");
    return (1);
  }
  
  memset(&hints, 0, sizeof(hints));
  hints.ai_family = AF_INET;
  hints.ai_socktype = SOCK_STREAM;
  error = getaddrinfo(argv[1], "80", &hints, &res0);

  if (error) {
    fprintf(stderr, "error: %s\n", gai_strerror(error));
    return (1);
  }
  
  for (res = res0; res != NULL; res = res->ai_next) {
    if (res->ai_family == AF_INET) {
      s = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
      if (s < 0) {
	fprintf(stderr, "error: socket\n");
	return (1);
      }
      if (connect(s, res->ai_addr, res->ai_addrlen) < 0) {
	fprintf(stderr, "error: connect\n");
	return (1);
      }
      break;
    }
  }
  
  freeaddrinfo(res0);

  if (s < 0) {
    fprintf(stderr, "error: socket\n");
    return (1);
  }
  
  strncpy(&buf[0], "GET / HTTP/1.0\r\n\r\n", sizeof(buf));
  write(s, &buf[0], strlen(&buf[0]));
  
  for (;;) {
    len = read(s, &buf[0], sizeof(buf));
    if (len <= 0)
      break;
    buf[len] = '\0';
    printf("%s", &buf[0]);
  }

  close(s);
  return (0);
}
