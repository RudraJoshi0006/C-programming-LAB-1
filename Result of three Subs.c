#include<stdio.h>
void main(){
float a,b,c,d,e;
printf("Enter the marks in Sub 1:");
scanf("%f",&a);
printf("Enter the marks in Sub 2:");
scanf("%f",&b);
printf("Enter the marks in Sub 3:");
scanf("%f",&c);
d=a+b+c;
e=d/3;
printf("Total:%.2f\n",d);
printf("Average:%.2f\n",e);
if(a<35||b<35||c<35){
printf("Result:Fail\n");
}else{ if(e>=70){
printf("Result:Distinction");
}else if(e>=60){
printf("Result:First Class");
}else if(e>=50){
printf("Result:Second Class");
}else if(e>=35){
printf("Result:Third Class");
}
}

}
