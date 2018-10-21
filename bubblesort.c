#include <stdio.h>
void sort(int a[],int y);
int main(){
	int size;
	printf("几个数？");
	scanf("%d",&size);//输入的数字个数 
	int number[size];
	
	printf("输入这几个数"); 
	for(int i=0;i<size ;i++)//录入size个数 
	scanf("%d",&number[i]);
	
	sort(number, size);//排序函数 
	
	for(int i=0;i<size;i++)//输出排序后的数 
	printf("%d ",number[i]);
	
	return 0;
	
	
} 
void sort(int a[],int y){
	int i,j,temp;
	for(j=0;j<y-1;j++)
	for(i=0;i<y-1-j;i++)
	{
	
	if(a[i]>a[i+1]){
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	
	}
}
