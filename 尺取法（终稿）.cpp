#include<stdio.h>
int main()
{
	int N,S,i,j=0,k=0,t,m,n=0,sum=0,a[1000],b[10]; 
	printf("test cases:");
	scanf("%d",&t);
	int T = t;
	
	while(T>0)
		{
			T--;
			
			printf("N=");
			scanf("%d",&N);
			printf("S=");
			scanf("%d",&S);
			
			int num = N+1;
			
			printf("N numbers:");
			for(i=0;i<N;i++)
				scanf("%d",&a[i]);
			
			while(1) //��ȡ������1 
				{
				 	while(j<N && sum<S)
				 		{
							sum+=a[j++];
				 		}
				 		
				 	if(sum<S)
						break;
				 	
				 	if(num>j-k)
				 		num = j-k;
				 		
				 	sum-=a[k++];
		
			    }
			    
			    
		    if(num==N+1)//��ȡ������2 
		    	b[n]=0;//������Ԫ��ֱ�Ӹ�ֵ 
			else
				b[n]=num;
		    n++;
	}
	
	printf("result:\n");
	for(m=0;m<n;m++)//Ҳ���Բ���t��ֱ����ǰ���n
		{
			printf("%d\n",b[m]);
		}
	return 0;

	
}
 
