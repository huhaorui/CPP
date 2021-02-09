#include <iostream>
using namespace std;
void min_max_mean(float a[], int n, float *max_val, float *min_val, float *mean_val)
{
	int max=a[0],min=a[0];
	float sum=0,mean;
	for (int x=0;x<n;x++)
	{
		if (a[x]>max) max=a[x];
		if (a[x]<min) min=a[x];
		sum+=a[x];
	}
	mean=sum/n;
	*max_val=max;
	*min_val=min;
	*mean_val=mean;
}
int main()
{
	float n,num[100],max,min,mean;
	float *p_max=NULL,*p_min=NULL,*p_mean=NULL;
	cin>>n;
	for (int x=0;x<n;x++)
	{
		cin>>num[x];
	}
	min_max_mean(num,n,&max,&min,&mean);
	cout<<max<<' '<<min<<' '<<mean<<endl;
	return 0;
}
