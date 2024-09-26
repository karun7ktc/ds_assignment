#include <stdio.h>
define N 5;

int s1[N],s2[N];
int top1=-1,top2=-1;
int count=0;

void enqueue(int x){
	push1(x);
	count++;
}

void push1(int data){
	if (top1=N-1)
		{printf("Queue is full");}
	else {
		top1++;
		s1[top1]=data;}

void push2(int data){
	if (top2=N-1)
		{printf("Queue is full");}
	else {
		top2++;
		s2[top2]=data;}


void dequeue(){
	int i,a,b;
	if (top1==-1 && top2=-1)
		{printf(" Queue is empty ");}
	else{
		for(i=0,i<count,i++)
		{a=pop1();
		push2(a);}
	b=pop2();
	printf("Popped element is %d",b);
	count--;
	for(i=0,i<count,i++){
		a=pop2()
		push1(a)}
	}


int pop1(){
	return s1[top1];
	top--;}

int pop2(){
	return s2[top2];
	top--;}

void display(){
	int i;
	for (i=0,i<=top1,i++){
		printf("%d",s[i]);}
	}



int main() {

    int x;
    int n=0;
   
    while(1){
    
    printf(" 1.Enqueue | 2.Dequeue | 3.Display | 4.Exit\n\n");
    printf("Select operation (select from 1-4:");
    scanf("%d",&n);
   
    switch(n){
        case 1:
	    printf(" Enter Value to be Enqueued \n");
	    scanf("%d",&x);
            enqueue(x);
            printf("\n");
            break;
           
        case 2:
            dequeue();
            printf("\n");
            break;
         
        case 3:
            display();
            printf("\n");
            break;
           
        case 4:
            return 0;

        default:
            printf("INVALID INPUT\n");
            break;
          
    }
    }
    
    return 0;
}