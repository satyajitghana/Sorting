//
//  selection.h
//  Sorting
//
//  Created by Satyajit Ghana on 13/12/16.
//  Copyright © 2016 Satyajit Ghana. All rights reserved.
//

#ifndef selection_h
#define selection_h

#include "swap.h"

void selection(int a[],int n) {
    int small;
    for (int i=0;i<n;i++) {
        small=i;
        for (int j=i+1;j<n;j++) {
            if (a[j]<a[small]) small=j;
        }
        swap(a[i],a[small]);
    }
}

#endif /* selection_h */
