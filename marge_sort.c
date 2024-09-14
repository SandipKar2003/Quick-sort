#include<stdio.h>

void marge(int a[],int l, int m, int h){
    int i,j,k,b[50];
    i=l;j=m+1;k=l;
    while(i<=m && j<=h){
        if(a[i]<a[j]){
            b[k]=a[i];
            k++;
            i++;
        }
        else{
            b[k]=a[j];
            k++;j++;
        }
    }
    while(i<=m){
        b[k]=a[i];
        k++;i++;
    }
    while(j<=h)
    {
      b[k]=a[j];
      k++;j++;
    }
   for(i=l;i<=h;i++){
    a[i]=b[i];
   }
    
}

void margeShort(int *a,int l,int h){
     if(l<h){
        int m=(l+h)/2;
        margeShort(a,l,m);
        margeShort(a,m+1,h);
        marge(a,l,m,h);
     }
     
}
void printarray(int *a){
     for(int i=0;i<5;i++){
    printf("%d",a[i]);
    }
}

int main(){
    int l,h;
    int a[10],i,j,k,b[10];
    printf("enter the data: ");
    for(i=0;i<5;i++){
        scanf("%d\t",&a[i]);

    }
    margeShort(a,0,4);
    printarray(a);


}