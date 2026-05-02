#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int smallest = arr[0];
    int second = INT_MAX;

    for(int i = 1; i < n; i++){
        if(arr[i] < smallest){
            second = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < second){
            second = arr[i];
        }
    }

    if(second == INT_MAX)
        cout << "No second smallest";
    else
        cout << second;
}
