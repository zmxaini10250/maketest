#ifndef __RIDE_H__
#define __RIDE_H__

#include <iostream>

class CRide
{
    public:
        CRide(std::string sName, std::string sType);
        void ShowInfo();
    private:
        std::string m_Name;
        std::string m_Type;
};

#endif

