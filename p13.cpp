//static functions in overriding

#include<iostream>

class demo{
    public:
    //virtual static void getdata()     //error
    static void getdata(){
        std::cout<<"demo::getdata"<<std::endl;
    }
};
class demochild:public demo{
    public:
    static void getdata(){
        std::cout<<"demochild::getdata"<<std::endl;
    }
};
int main(){
    demo *obj=new demochild();
    obj->getdata();
    return 0;

}