/*enum: 枚举和类相似，能够定义一种新的数据类型。不同的是，枚举是将一组整型常量组织在一起*/

#include<iostream>


//不限定作用域的枚举,指定基础类型为int
enum color1:int{
    RED,
    GREEN,
    BLUE
};

//限定作用域的枚举，在enum后面添加class或者struct
enum class color2:int{
    RED,
    GREEN,
    BLUE
};


int main(){
    // color1 c1=RED;      //正确，无作用作用域限制的枚举类型
    // color2 c2=RED;      //错误，默认使用color1中的RED

    color1 c1=color1::RED;  //不限定作用域的枚举也可以使用作用域
    color2 c2=color2::RED;

    std::cout<<static_cast<int>(c2)<<std::endl;
    return 0;
}
