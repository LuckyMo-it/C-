#include<cstdio>
#include<stdexcept>
struct Filelogger{
    void log_transfer(long from,long to,double amount)
    {
        printf("[file] %ld,%ld,%lf\n",from,to,amount);
    }
};
struct Consolelogger{
    void log_transfer(long from,long to,double amount)
    {
        printf("[cons] %ld->%ld:%f\n",from,to ,amount );

    }
};
enum class LoggerType{
    console,file
};
struct bank{
    bank():type{LoggerType::console}{}
    void set_logger(LoggerType new_type)
    {
        type=new_type;
    }
    void make_transfer(long from,long to,double amount)
    {
        switch(type){
            case LoggerType::console:{
                consolelogger.log_transfer(from,to,amount);
                break;
            }
            case LoggerType::file:{
                filelogger.log_transfer(from ,to,amount);
                break;
            }
            default:
                throw std::logic_error{"pls choose console or file"};

        }
    }
    LoggerType type;
    Consolelogger consolelogger;
    Filelogger filelogger;
};
int main()
{
    bank b;
    b.make_transfer(1000,2000,90000.0);
    b.make_transfer(2000,3000,8000.0);
    
    b.set_logger(LoggerType::file);
    b.make_transfer(3000,2000,87777.0);
    b.make_transfer(2000,3000,99999.0);
    
}