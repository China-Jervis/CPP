/*
二级指针
指针是指针变量的简称，也是变量，是变量就有地址
指针用于存放普通变量的地址，二级指针用于存放指针变量的地址
声明二级指针：数据类型** 指针名
使用指针的两个目的：1.传递地址；2.存放动态分配的内存的地址
普通变量的地址传入函数后，可以在函数中修改变量的值；把指针的地址传入函数后，可以在函数中修改指针的值
*/

#include<iostream>

int main(){

    int i=8;
    std::cout<<"i="<<i<<",i的地址:"<<&i<<std::endl;
    int* pi=&i;
    std::cout<<"pi="<<pi<<",pi的地址:"<<&pi<<std::endl;
    int** ppi=&pi;
    std::cout<<"ppi="<<ppi<<",ppi的地址:"<<&ppi<<std::endl;
    std::cout<<"ppi="<<**ppi<<std::endl;
    return 0;
}