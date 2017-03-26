//
//  insertion.h
//  Sorting
//
//  Created by Satyajit Ghana on 13/12/16.
//  Copyright © 2016 Satyajit Ghana. All rights reserved.
//

#ifndef insertion_h
#define insertion_h
#include <limits.h>
void insertion(int a[],int n) {
    int tmp,j;
    a[0]=INT_MIN;
    for (int i=1;i<n;i++) {
        tmp=a[i];
        j=i-1;
        while (tmp<a[j]) { a[i]=a[j]; j--;}
        a[j+1]=tmp;
    }
    
}

#endif /* insertion_h */
