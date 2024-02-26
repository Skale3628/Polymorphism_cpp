//Interface

#include<iostream>

class parent{
    public:
        virtual void marry()=0; //abstract (no address mappedd)

        virtual void property(){
            std::cout<<"flat,car,gold"<<std::endl;
        }
   //virtual  void marry(){
       // std::cout<<"kriti sanon"<<std::endl;
   // }
};
void parent::marry(){
    std::cout<<"kirti"<<std::endl;
}
class child:public parent{
    public:
    void marry(){
         //std::cout<<"disha patni"<<std::endl;
         parent::marry();
    }
};
int main(){
   parent *obj=new child();
    obj->marry();
   obj->property();
    return 0;
}