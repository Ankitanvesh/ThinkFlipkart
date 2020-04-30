#include<stdio.h>
#include<math.h>

int dif(int x,int y){
  return x+y;
}
int div(int x,int y){
   if(y!=0) {
	return x/y;	
}
 return 10000;
}
int main(){
  printf(dif(3,2));
}
