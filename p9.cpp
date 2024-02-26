//late binding 
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

    void (*funptr[3])(int,int)={add,sub,mul};
    for(int i=0;i<=3;i++){
        funptr[i](10,20);
    }
     return 0;
    }
  
