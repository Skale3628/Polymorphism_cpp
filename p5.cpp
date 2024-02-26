//Early binding 
//compiler already giving addresses  to the variables while compiling.


#include<iostream>
void add(int x,int y){
    std::cout<<x+y<<std::endl;
}
void sub(int x,int y){
    std::cout<<x-y<<std::endl;
}
void mul(int x,int y){
    std::cout<<x*y<<std::endl;
}
int main(){
    std::cout<<"1.add"<<std::endl;
    std::cout<<"2.sub"<<std::endl;
    std::cout<<"3.mul"<<std::endl;

    int ch;
    std::cout<<"enter choice"<<std::endl;
    std::cin >> ch;

    switch(ch){
        case 1:
        add(10,20);
        break;
        case 2:
        sub(3,8);
        break;
        case 3:
        mul(5,7);
            break;

    }
    return 0;
}