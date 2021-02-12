#include<sys/types.h>
#include<sys/socket.h>
#include<netdb.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(int argc, char *argv[]){
  struct addrinfo hints, *res, *res0;
  struct sockaddr_storage ss;
  struct sockaddr *sa;
  socklen_t sa_len;
  
  int len, error;
  int s = -1;
  
  int sc;
  
  char buf[4096], hbuf[NI_MAXHOST];
  
 /*if (argc != 2) {
   fprintf(stderr, "Specify a hostname.\n");
   return (1);
   }
 */
  
  sa = (struct sockaddr *)&ss;
  memset(&hints, 0, sizeof(hints));
  hints.ai_family = AF_INET;
  hints.ai_socktype = SOCK_STREAM;
  //error = getaddrinfo(argv[1], "80", &hints, &res0);
  error = getaddrinfo(NULL, "443", &hints, &res0);
  
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
      
      /*if (connect(s, res->ai_addr, res->ai_addrlen) < 0) {
	fprintf(stderr, "error: connect\n");
	return (1);
	}
      */
      
      if (bind(s, res->ai_addr, res->ai_addrlen) < 0) {
	fprintf(stderr, "error: bind\n");
	return (1);
      }
      if (listen(s, 10)) {
	fprintf(stderr, "error: listen\n");
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
  /*
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
  */
  
  
  printf("wait\n");
  while ((sc = accept(s, sa, &sa_len)) > 0) {
    printf("connected\n");
    write(sc, "Hello\n", 6);
    close(sc);
    printf("wait\n");
  }
  close(s); 
  return (0);
}
