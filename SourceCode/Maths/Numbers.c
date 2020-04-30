#include<stdio.h>
#include<math.h>

// Changes in master branch
int dif(int x,int y){
  return (x+y);
}
// Changes in master branch
int div(int x,int y){
	int res=1000;
	res=x/y;  
 if(y!=0) {
	return res;	
}
 return 10000;
}
//Function added in Testing Branch
int mul(int x,int y){
 return x*y;
}

int main(){
  printf(dif(3,2));
}
