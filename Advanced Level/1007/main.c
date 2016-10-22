#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    int *data;
    int i;
    
    int start, end, sum, temp, tempi, tempj;
    
    while(scanf("%d", &k) != EOF)
    {
        data = (int *)malloc(k * sizeof(int));
        for(i = 0; i < k; i ++)
        {
            scanf("%d", &data[i]);
        }
        sum = 0;
        start = 0;
        end = k - 1;
        temp = 0;
        tempi = 0;
        tempj = 0;
        for(i = 0; i < k; i ++)
        {
            if(temp >= 0)
            {
                temp += data[i];
                tempj = i;
            }
            else
            {
                temp = data[i];
                tempi = i;
                tempj = i;
            }
            if(temp > sum || (temp == 0 && end == k - 1))            {
                sum = temp;
                start = tempi;
                end = tempj;
            }
        }
        printf("%d %d %d\n", sum, data[start], data[end]);
    }
    return 0;
}