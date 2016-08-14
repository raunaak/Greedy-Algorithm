#include <iostream>
#include "ActivitySelectionProblem.h"
#include "JobSchedulingProblem.h"
using namespace std;

int main(){
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};
    printJobScheduling(arr, 5);
    
    /* Select activities to finish maximum tasks
    int start[]  =  {1, 3, 0, 5, 8, 5};
    int finish[] =  {2, 4, 6, 7, 9, 9};
    activitySelection(start, finish, 6);*/
    return 0;
}

