#ifndef JOBSCHEDULINGPROBLEM_H
#define JOBSCHEDULINGPROBLEM_H
#include <algorithm>
class Job{
public:
    char id;
    int deadline;
    int profit;
    Job(char a, int b, int c);
};

Job::Job(char a, int b, int c){
    id = a; deadline = b; profit = c;
}

bool comparison(Job j1, Job j2){
    return (j1.profit>j2.profit);
}

void printJobScheduling(Job job[], int n){
    std::sort(job, job+n, comparison);
    bool busy[n+1];
    for(int i=0; i<=n; i++)busy[i]=false;
    for(int i=0; i<n; i++){
        for(int j=1; j<=std::min(job[i].deadline, n-1); j++)
        if(!busy[j]){
            busy[j]=true;
            std::cout<<job[i].id<<" ";
            break;
        }
    }
    std::cout<<std::endl;
}

#endif /* JOBSCHEDULINGPROBLEM_H */

