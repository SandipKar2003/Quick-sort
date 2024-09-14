# Quick-sort
#include<stdio.h>
int partit(int *a,int p,int r){
    int pivot=a[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(a[j]<pivot){
            i++;
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
        int temp=a[i+1];
        a[i+1]=a[r];
        a[r]=temp;
    
}
void quicksort(int a[],int p,int r){
    if(p<r){
        int q=partit(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}

void print(int a[],int n){
    int i;
    printf("the sorting element are: ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
int main(){
    int a[50],n,p,r,i;
    printf("enter the value of n ");
    scanf("%d",&n);
    printf("enter the value of arrray ");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    p=1;
    r=n;
    quicksort(a,p,r);
    print(a,n);
}
