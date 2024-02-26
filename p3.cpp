//method signature,return type  ====>>>>same (overriding)

#include<iostream>

class parent{
    public:
    parent(){
        std::cout<<"parent constructor"<<std::endl;
    }
    virtual void getdata(int x){                             //no overriding
        std::cout<<"parent getdata"<<std::endl;
    }
     virtual void printdata(float x){                       //overriding                      
        std::cout<<"parent printdata"<<std::endl;
    }
};
class child:public parent{
    public:
    child(){
        std::cout<<"child constructor"<<std::endl;
    }
    void getdata(short int x){
        std::cout<<"child getdata"<<std::endl;
    }
    void printdata(float x){
        std::cout<<"child printdata"<<std::endl;
    }
};
int main(){
   parent *obj=new child();                //pointer
    //parent& obj1= new child();                     //refrence
    obj->getdata(10);
    obj->printdata(10.5f);
    return 0;
    
}