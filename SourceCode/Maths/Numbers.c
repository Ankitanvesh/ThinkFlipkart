#include<stdio.h>
#include<math.h>

int dif(int x,int y){
  return x+y;
}
<<<<<<< HEAD
int div(int x,int y){
   if(y!=0) {
	return x/y;	
}
 return 10000;
}
=======
//Function added in Testing Branch
int mul(int x,int y){
 return x*y;
}

>>>>>>> testing
int main(){
  printf(dif(3,2));
}
