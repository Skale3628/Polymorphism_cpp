//late / dynamic binding 

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

    void (*funptr)(int,int)=NULL;

    switch(ch){
        case 1:
        funptr=add;
        break;
        case 2:
        funptr=sub;
        break;
        case 3:
        funptr=mul;
            break;

    }
    funptr(10,20);               //late binding   
                                 //its not a function call  its an expression which returns the address of the function and we are calling that returned value as a function (run time )
    return 0;
}