//design patern
//Adapter class
//This is the adapter that will connect our server to our database. It's responsible for creating a connection with the database and handling any errors that may occur during this process. for the database
//This class is used to adapt the data source to the view

#include<iostream>

class idemo{
    public:
    virtual void fun1()=0;    //pure virtual function, must be implemented by derived classes.
    virtual void fun2()=0;      //pure virtual
};
//Adapter class
class adapter : public idemo{
    public:
    void fun1(){

    }
    void fun2(){

    }
};
class demochild1 : public adapter {
    public:
    void fun1(){
        std::cout<<"demochild1"<<std::endl;
    }
};
class demochild2 : public adapter{
    public:
    void fun2(){
        std::cout<<"demochild2"<<std::endl;
    }
};
int main(){
    demochild1 obj1;
    demochild2 obj2;

    return 0;
}