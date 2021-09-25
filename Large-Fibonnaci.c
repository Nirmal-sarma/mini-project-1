#include <stdio.h>
#include <stdlib.h>

int arr[20001][1000];

void  fibonacci(int n){
  
  for(int i=1;i<n;i++){
      int carry=0;
          for(int j=1000;j>=0;j--){
             int value=arr[i][j]+arr[i-1][j]+carry;
             carry=value/10;
             value=value%10;
             arr[i+1][j]=value;
          }
}

int k=0;
while(arr[n][k] == 0 && k<1000){
    k++;
}

while(k<1000){
printf("%d",arr[n][k]);
k++;
}

printf("\n");

}


int main(){

    int n;
    scanf("%d",&n);
   
    arr[1][999]=1;
    fibonacci(n);

    return 0;
}