//
//  bubble.h
//  Sorting
//
//  Created by Satyajit Ghana on 13/12/16.
//  Copyright © 2016 Satyajit Ghana. All rights reserved.
//

#ifndef bubble_h
#define bubble_h

#include "swap.h"

void bubble(int a[],int n) {
    for (int i=0;i<n;i++)
        for (int j=0;j<n-1;j++)
            if (a[j]>a[j+1]) swap(a[j],a[j+1]);
}

#endif /* bubble_h */
