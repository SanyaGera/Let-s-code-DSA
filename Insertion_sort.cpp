#include <iostream>
#include <conio.h>
#include <time.h>
#include <direct.h>
#include <stdlib.h>
#include<windows.h>
using namespace std;
void insertsort(int arr[], int n){
    int i, j, key;
    for(j=1; j<n; j++){
        key = arr[j];
        i = j-1;
        // delay(0.1);
        Sleep(0.1);
        while(i>=0 && arr[i]>key){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
}
int main(){
    // clrscr();
    int arr[30000], choice, n;
    float time;
    clock_t start, ending;
    char ch ='y';
    while(ch=='y'){
        cout<<"Enter your choice \n1. Best Case \n2.Average Case \n3.Worst Case\n";
        cin>>choice;
        switch(choice){
            case 1: cout<<"\nBEST CASE\n";
                    cout<<"Enter size of array: \n";
                    cin>>n;
                    for(int i = 0; i<n ; i++)
                        arr[i] = i;
                    start = clock();
                    insertsort(arr, n);
                    ending = clock();
                    time = (ending-start)/CLOCKS_PER_SEC;
                    cout<<"Time for best case: "<<time<<endl;
                    for(int i=0; i<n; i++)
                        cout<<arr[i]<<"\t";
                    break;
            case 2: cout<<"\nAVERAGE CASE\n";
                    cout<<"Enter size of array: ";
                    cin>>n;
                    rand();
                    for(int i=0; i<n; i++)
                        arr[i] = rand();
                    start = clock();
                    insertsort(arr,n);
                    ending = clock();
                    time = (ending-start)/CLOCKS_PER_SEC;
                    cout<<"Time for Average Case: "<<time<<endl;
                    break;
            case 3: cout<<"\nWORST CASE\n";
                    cout<<"Enter size of array: ";
                    cin>>n;
                    for(int i=0; i<n; i++)
                        arr[i] = n-i+1;
                    start = clock();
                    insertsort(arr,n);
                    ending = (ending-start)/CLOCKS_PER_SEC;
                    cout<<"Time for worst case: "<<time<<endl;
                    break;
        }
        cout<<"Want to enter again?: ";
        cin>>ch;
    }
    // getch();
    return 0;
}
