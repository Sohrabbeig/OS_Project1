#include "types.h"
#include "user.h"
#include "date.h"


int
main(int argc, char *argv[])
{




    int id;
    int i=0;
    for(i=0; i<10; i++){
        id=fork();
        if(id==0){
            int j=0;
            for(j=0; j<10; j++){
                printf(2, "Child %d prints for the %d time.\n", getpid(), j);

            }

            exit();
        }
    }


    int wt[10];
    int rt[10];
    int cid[10];
    for(i=0; i<10; i++){

        cid[i] = getPerformanceData(&wt[i],&rt[i]);
    }

    for(i=0; i<10; i++) {
        printf(2, "Child %d =>running time:%d, wateTime:%d, turnaround time:%d.\n", cid[i], rt[i], wt[i], rt[i] + wt[i]);
    }

  exit();
}
