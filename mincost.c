#include<stdio.h>
#include<stdlib.h>

int a[10][10],n,i,j,e=1,x,y,p,q;
 int visited[10]={0},min,mincost=0;
 int main()
 {
    printf("enter limit of vertex");
    scanf("%d",&n);
    printf("enter graph in marix form:");
    for(i=1;i<+n;i++)
     for (j=0;j<=n;j++)
     {
      scanf("%d",&a[i][j]);
      if(a[i][j]==0)
      a[i][j]=100;
     }
       visited[1]=1;
       printf("\n");
       for(e=1;e<=n;e++)
       {
         for(i=1,min=100;i<n;i++)
         
         for(j=1;j<=n;j++)
     
              if(a[i][j]<min && visited[i]==0)
              {
                min=a[i][j];
                p=x=i;
                q=y=j;
              }
                if(visited[x]==0 || visited[y]==0)
                {
                     printf("\n edge:(%d->%d)cost=%d",e++,x,y,min);
                     mincost=mincost+min;
                     visited[y]=1;
                }
                a[p][q]=a[p][q]=100;
          }
          
          printf("\n minimum cost=%d",mincost);
  }
