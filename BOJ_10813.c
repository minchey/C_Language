int main(){
    int n,m,i,j;
    int basket[100] = {0,};
    scanf("%d %d",&n,&m);
    for(int k=1;k<=n;k++){
        basket[k-1] = k;
    }
    for(int k =0;k<m;k++){
        int temp;
        scanf("%d %d",&i,&j);
        temp = basket[i-1];
        basket[i-1] = basket[j-1];
        basket[j-1] = temp;
    }
    for(int k =0;k<n;k++){
        printf("%d ",basket[k]);
    }
    return 0;
}
