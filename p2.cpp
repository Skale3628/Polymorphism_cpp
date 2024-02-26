//method signture in overriding
//method signature should be same for overriding child and parent class method.

#include<iostream>

class parent{
    public:
    parent(){
        std::cout<<"parent constructor"<<std::endl;
    }
   // virtual void getdata(int x){  
    virtual void getdata(){                             //with virtual keyword it will call child getdata  ==>> implicitely virtual
        std::cout<<"parent getdata"<<std::endl;
    }
};
class child:public parent{
    public:
    child(){
        std::cout<<"child constructor"<<std::endl;
    }
    //void getdata(short int x){                            //overriding is not possible as method signature is not same as parent class 
    void getdata(){
        std::cout<<"child getdata"<<std::endl;
    }
};
int main(){
    parent *obj1=new child();
    obj1->getdata();
    return 0;
    
}