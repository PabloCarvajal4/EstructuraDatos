#include <stdio.h>

int Insert_Search(int *num,int cnt,int target)
{
    int first=0,last=cnt-1,mid;
    int counter = 0;
    while(first <= last)
    {
        counter ++;
        mid = first+(target-num[first])*(last-first)/(num[last]+num[first]);    
        if(num[mid] > target)
        {
            last = mid-1; 
        }
        else if(num[mid] < target)
        {
            first = mid+1;
        }   
        else 
        {
            printf("Encuentra:%d\n",counter);
            return 1;
        }

    }
    printf("Encuentra:%d\n",counter);
    return 0;
}

int main(void)
{
    int flag = 0,target;
    int num[10] = {1,2,3,4,5,6,7,8,70,100};
    while(1)
    {
        printf("Ingrese el numero que busca: \ n");
        scanf("%d",&target);
        flag = Insert_Search(num,10,target);
        if(flag) printf("Se ha encontrado el numero \ N");
        else printf("No se encontro el numero \ N");
    }
}
