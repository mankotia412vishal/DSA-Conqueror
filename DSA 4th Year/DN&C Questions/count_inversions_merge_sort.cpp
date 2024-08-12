#include <bits/stdc++.h>
using namespace std;
long long merge(long long int *arr, long long int s, long long int e) {
    long long int c = 0;
    long long int mid = s + (e - s) / 2;

   long long int l1 = mid - s + 1;
   cout<<"l1 "<<l1<<"Mid "<<mid<<endl;
    long long int l2 = e - mid;

    long long int*left = new long long int[l1];
    long long int *right = new long long int[l2];

    long long int k = s;
    for (long long int i = 0; i < l1; i++) {
        left[i] = arr[k++];
    }
    k = mid + 1;
    for (long long int i = 0; i < l2; i++) {
        right[i] = arr[k++];
    }

    long long int i = 0, j = 0, mainIndex = s;
    while (i < l1 && j < l2) {
        if (left[i] <= right[j]) {
            arr[mainIndex++] = left[i++];
        } else {
            // c += mid - i+1;
            c += l1 - i;
            arr[mainIndex++] = right[j++];
        }
    }
    while (i < l1) {
        arr[mainIndex++] = left[i++];
    }
    while (j < l2) {
        arr[mainIndex++] = right[j++];
    }

    delete[] left;
    delete[] right;

    return c;
}

long long int mergeSortAndCount(long long int *arr, long long int s, long long int e) {
    if (s >= e)
        return 0;

    long long int c = 0;
    long long int mid = s + (e - s) / 2;

    c += mergeSortAndCount(arr, s, mid);
    c += mergeSortAndCount(arr, mid + 1, e);

    c += merge(arr, s, e);
    
    
    return c;
}
 
int main()
{

    // int arr[5] = {2, 4, 1, 3, 5};
    // int n = 5;
    // // mergeSort(arr, 0, n - 1);
    // cout<<"Inversions are "<<mergeSort(arr, 0, n - 1)<<endl;

    // 42
// 468 335 1 170 225 479 359 463 465 206 146 282 328 462 492 496 443 328 437 392 105 403 154 293 383 422 217 219 396 448 227 272 39 370 413 168 300 36 395 204 312 323
    //  int n=42;
    //     long long int arr[42]={468 ,335 ,1 ,170 ,225 ,479 ,359 ,463 ,465 ,206 ,146 ,282 ,328 ,462 ,492 ,496 ,443 ,328 ,437 ,392 ,105 ,403 ,154 ,293 ,383 ,422 ,217 ,219 ,396 ,448 ,227 ,272 ,39 ,370 ,413 ,168 ,300 ,36 ,395 ,204 ,312 ,323};
//     5
// 1 1 1 2 2
int n=5;
long long int arr[5]={2, 1, 3 ,1 ,2};
    cout << mergeSortAndCount(arr, 0, n - 1);

     

    return 0;
}