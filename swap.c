void swap_max(int a[],int count,int n)
{
for(int i=0;i<count-1;i++)
{int x=a[i];
for(int j=0;i<=j&&j<=count-1;j++)
{

if(x<a[j])
{
x=a[j];

a[i]=x;
a[j]=a[i];}


}
}
}
void ssort(int b[],int m)
{
for(int z=0;z<m-1;z++)
{
 swap_max(b,m-1,z);
}}
