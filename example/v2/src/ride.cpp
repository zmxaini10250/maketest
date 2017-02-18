#include <iostream>

#include "ride.h"

CRide::CRide(std::string sName, std::string sType):m_Name(sName),m_Type(sType)
{
}

void CRide::ShowInfo()
{
    std::cout<<"姓名："<<this->m_Name<<std::endl;
    std::cout<<"类型："<<this->m_Type<<std::endl;
}
