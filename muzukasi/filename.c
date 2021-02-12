#include <stdio.h>
int main(int argc, char *argv[]){
  FILE *in, *out;
  char line[1024];
  
  if (argc != 3) {
    printf("Specify two filenames\n");
    return (1);
  }
  
  in = fopen(argv[1], "r");
  
  out = fopen(argv[2], "w");
  if (in == NULL || out == NULL) {
    printf("%s -> %s cannot open\n", argv[1], argv[2]);
  }
  while (fgets(line, sizeof(line), in) != NULL)
    fputs(line, out);
  fclose(in);
  fclose(out);
  return (0); 
}
