#include<iostream>
class parent{
    public:
   //void* _vptr;               //it will initialize under constructor 
    virtual void getdata(){
        std::cout<<"parent getdata"<<std::endl;
    }
};
class child:public parent{
    public:
    void getdata(){
        std::cout<<"child getdata"<<std::endl;
    }
};
int main(){
    //parent *obj=new child();
    //obj->getdata();
    child obj;
    std::cout<<_vptr<<std::endl;
    return 0;

}