#include <iostream>

using namespace std;
int search_arry(int arr[],int x);

int main()
{
    int search1[10]={10,25,60,80,55,130,58,97,5,80};
    int x=58;

    int result = search_arry(search1,x);

    if(result==-1){
        cout << "Element is not present in the array" << endl;
    }else{
        cout << "Element is present at index " << result;
    }

    return 0;
}

int search_arry(int arr[],int x){
    int result=0;

    for(int i=0;i<10;i++){
        if(arr[i]==x){
            result=i;
            break;
        }else{
            result=-1;
        }
    }
    return result;
}
