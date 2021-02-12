#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ptoc(int p){ //1をoに10をxに変換
    if(p==1)
      return ('o');
    else if(p==10)
      return ('x');
    else
      return ('.');
}

void printboard(int board[3][3]){ //基盤の表示
  int i;
  for(i=0;i<3;i++){ //i,nを用意して文の簡略化
    printf("%c%c%c\n",
	   ptoc(board[i][0]),
	   ptoc(board[i][1]),
	   ptoc(board[i][2]));
  }
}

int checkboard(int board[3][3]){ //勝敗判定　
  int i,s;
  int d=0;
  
  for(i=0;i<3;i++){ //i,nの簡略化
    s=board[i][0]
      +board[i][1]
      +board[i][2];
    if(s==3) //oの勝ち
      return 1;
    else if(s==30)
      return 10; //xの勝ち
    
    /*引き分け判定*/
    s=board[i][0]
      *board[i][1]
      *board[i][2];
    if(s>0)
      d++;
    /*~~~~~~~*/
  }
  if(d==3)
    return 999; //引き分け判定
  return 0;
}

void cpu(int board[3][3]){ //cpu判定
    int i,j,s;
  for(i=0;i<3;i++){
    s=board[i][0]
      +board[i][1]
      +board[i][2];
    if(s==2){
      for(j=0;j<3;j++){
	if(board[i][j]==0){
	  board[i][j]=10;
	  return ; //処理の高速化 
	}
      }
    }
  }
}

int main(){
  int board[3][3];
  int s,n,x,y;
  char *c,buf[1024];

  memset(&board[0][0],0,sizeof(board));
  
  for(;;){
    printboard(board);
    s=checkboard(board);
    if(s>0){
      printf("win: %d\n",s);
      break;
    }
    
    /*入力処理*/
    printf("You (x-y):");
    c=fgets(&buf[0],sizeof(buf),stdin);
    if(c==NULL)
      continue;
    n=sscanf(&buf[0],"%d-%d",&x,&y);
    if(n!=2||x<1||x>3||y<1||y>3)
      continue;
    if(board[x-1][y-1]>0)
      continue;
    board[x-1][y-1]=1;
    /*入力処理終わり*/

    printboard(board);
    cpu(board);
  }
}
