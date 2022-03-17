/* Operating system (HomeWork)
 * 00757146 許詠晴
 * Banker' s Algorithm
 * /////////////////////////////////////////
 * total system resource are:
 *      A  B  C  D
 *      6  5  7  6
 * -----------------------------------------
 * there are 3 processes P1, P2, P3.
 * -----------------------------------------
 * Process current allocated resources:
 *      A  B  C  D
 *  P1  1  2  2  1
 *  P2  1  0  3  3
 *  P3  1  2  1  0
 * -----------------------------------------
 * Processes (Maximim resorces):
 *      A  B  C  D
 *  P1  3  3  2  2
 *  P2  1  2  3  4
 *  P3  1  3  5  0
 * -----------------------------------------
 */

#include <iostream>

using namespace std;

int main(){

    int i, j, f = 0; // the number of finished process
    int order[3] = {0}; // the order of completed processes 
    bool find;

    // Claim the data structure of Banker' s Algo
    int n = 3, m = 4; // n is the number of processes. m is the number of type of resources  
    int Sys_resource[4] = {6, 5, 7, 6};
    int Allocation[3][4] = {{1, 2, 2, 1},
                            {1, 0, 3, 3},
                            {1, 2, 1, 0}};
    int Max[3][4] = {{3, 3, 2, 2},
                     {1, 2, 3, 4},
                     {1, 3, 5, 0}};        
    int Need[3][4];  // Need = Max - Allocation
    int Available[4]; // Available = Sys_resource - Allocation(sum columns)
    
    bool Finish[3] = {false, false, false}; // if a process is finished


    //initializes Need[][] and Available[]
    for(j = 0; j < m; j++){
        Available[j] = Sys_resource[j];
        for(i = 0; i < n; i++){
            Need[i][j] = Max[i][j] - Allocation[i][j];           
            Available[j] = Available[j] - Allocation[i][j];
        }
    }

    /*
    whether a process(which is unfinished and its need is less and equal than available) 
    is found out in one circuit(that' s "for(i=0;i<n;i++)"). 
    if not, jump out the while-loop and return unsafe. 
    Otherwise, return safe and print out the order of completed processes.
    */
    while(f < n){
        find = false;
        for(i = 0; i < n; i++){
            if(Finish[i] != true){
                for(j = 0; j < m; j++){
                    if(Need[i][j] > Available[j])
                        break;
                }
                if(j == m){
                    find = true;
                    Finish[i] = true;
                    order[f] = i+1;
                    f++;
                    for(j = 0; j < m; j++){
                        Available[j] = Available[j] + Allocation[i][j];
                    }
                }
            }
        }
        // if there is no process found, return unsafe.
        if(find != true){ 
            cout << "unsafe.\n";
            break;
        }
    }
    // all processes can be arranged in safe state.
    if(find == true){
        cout << "safe.  order is:\n";
        for(i = 0; i < n; i++){
            cout << "P" << order[i] << "  ";
        }
    }
    
    return 0;
}