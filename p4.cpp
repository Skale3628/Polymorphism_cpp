//method signature,return type  ====>>>>same (overriding)
//two ways to overriding using pointers
//object refrence and pointer in overriding


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

    //--------- two was to override using pointers --------//

//first way-->>  this type should be used in polymorphism
   // parent *obj=new child();                //pointer
   /* parent& obj1=new child();                     //refrence      -->heap section 
    obj1.getdata(10);
    obj1.printdata(10.5f);*/
    
    //second way-->>
   /* child obj1;             //stack section
    parent *obj2=&obj1;     //stack section
    obj2->getdata(10);
    obj2->printdata(10.5f);  */

    //third way-->>
    child obj1;
    parent obj2=obj1;       //data assign
    obj2.getdata(10);
    obj2.printdata(10.5f);
    
    return 0;
    
}