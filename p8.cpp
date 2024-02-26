


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
   void (*funptr[3])(int,int)={add,sub,mul};
   for(int i=0;i<=3;i++){
    funptr[i](10,20);
   }
   return 0;
  
}