#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    pid_t pid;

    int n;
    printf("Enter number to find factorial :");
    scanf("%d",&n);

    pid=fork();

    if ( pid<0 )
    {
        printf("failed to create child\n");
        exit(0);
    }

    else if ( pid==0 )
    {
        //Child Process
        int ans = 0, i, j, k = 2;

        int arr[n],sum[n];

        arr[0] = 1;

        // generating factorial series
        for (i=1 ; i<n; i++)
        {
            arr[i] = arr[i-1]*k;
            k++;
        }

        // printing and sum of each sub-series
        for (j=0; j<n; j++)
        {
            sum[j] = 0;
            for (i=0; i<=j; i++)
            {
                printf(" %d ",arr[i]);
                sum[j]+=arr[i];
            }
            printf("\n");
        }
        
        for (i=0; i<n; i++)
        {
            if ((sum[i]%2) == 0)
                sum[i] = -1;
        }

        printf("After deletion sum\n");
        for (i=0; i<n; i++)
        {
            if (sum[i] > 0)
                printf(" %d ", sum[i]);
        }
        exit(0);
    }

    // parent process
    else
    {
        wait(NULL);

        // waiting for child process to end
        printf("Done\n");
    }
}