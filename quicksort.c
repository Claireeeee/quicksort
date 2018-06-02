//
//  main.c
//  快速排序
//
//  Created by Claire on 2018/6/2.
//  Copyright © 2018年 Claire. All rights reserved.
//一遍过的快排，我要上天

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int *rarray(int range,int length);                 //随机数组
int *quicksort(int *str,int start,int end);        //快排


int main(void){
    int *str=rarray(100,25);
    quicksort(str,0,25-1);
    for (int i=0; i<25; i++) {
        printf("%d   ",str[i]);
    }
}

int *rarray(int range,int length){
    int *str=malloc(sizeof(int)*length);
    srand((unsigned int)time(0));
    for (int i=0;i<range;i++) {
        str[i]=rand()%range;
    };
    return str;
}

int *quicksort(int *str,int start,int end){
    if (start==end) {
    }
    else{
        int left=start;
        int right=end;
        int mark=str[left];
        while (left!=right){
            for (; right>left&&str[right]>=mark;right--){
            }
            str[left]=str[right];
            for (;left<right&&str[left]<=mark;left++){
            }
            str[right]=str[left];
        }
        str[left]=mark;
        if (start!=left) {
            quicksort(str,start,left-1);
        }
        if (right!=end) {
            quicksort(str,right+1,end);
        }
    }
    return str;
}



