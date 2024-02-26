//singleton design pattern

#include<iostream>

class demo{
    private:
    demo(){
        std::cout<<"in constructor"<<std::endl;
    }
    public:
    static demo* obj;
    static demo* getobject(){
        return obj;
    }
    void getdata(){
        std::cout<<"this="<<this<<std::endl;
    }
};
demo* demo::obj=new demo();

int main(){
    demo* ptr1=demo::getobject();
    demo* ptr2=demo::getobject();
    demo* ptr3=demo::getobject();

    std::cout<<ptr1<<std::endl;
    std::cout<<ptr2<<std::endl;
    std::cout<<ptr3<<std::endl;

    ptr1->getdata();
    ptr2->getdata();
    ptr3->getdata();

    return 0;
}