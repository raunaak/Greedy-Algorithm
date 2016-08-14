#ifndef ACTIVITYSELECTIONPROBLEM_H
#define ACTIVITYSELECTIONPROBLEM_H

void activitySelection(int start[], int finish[], int n){
    int ftime = 0; // last finish time activity
    for(int i=0; i<n; i++){
        if(start[i]>=ftime){ //do this activity
            std::cout<<i<<" "; 
            ftime = finish[i];
        }
    }
    std::cout<<std::endl;
}

#endif /* ACTIVITYSELECTIONPROBLEM_H */

