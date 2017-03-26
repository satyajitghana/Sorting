//
//  main.cpp
//  Sorting
//
//  Created by Satyajit Ghana on 13/12/16.
//  Copyright © 2016 Satyajit Ghana. All rights reserved.
//

#include <iostream>
#include "selection.h"
#include "bubble.h"
#include "insertion.h"
using namespace std;

void readarr(int a[], int n) {
    cout<<"Enter "<<n<<" elements : ";
    for (int i=0;i<n;i++) {
        cin>>a[i]; }
}

void printarr(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<" "; }
}

int main() {
    int n,a[20];
    cout<<"\nEnter the array size : ";
    cin>>n;
    readarr(a,n);
    /*
    //Selection Sort
    selection(a,n);
    cout<<"\nSelection Sorted : ";
    printarr(a,n);*/
    /*
    //Bubble Sort
    bubble(a,n);
    printarr(a,n); */
    //Insertion Sort
    insertion(a,n);
    printarr(a,n);
    return 0;
}
