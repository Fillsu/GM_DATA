#ifndef MEMBERENTITY_H
#define MEMBERENTITY_H

#pragma once
#include "MemberInfo.h"
#include <vector>
#include <iostream>
class MemberEntity
{
public:
    MemberEntity();
    ~MemberEntity();
    
    void Loadinfo();
    void prinfInfo(int index);
    void Addinfo();
    void DeleteInfo();
    
    MemberInfo memberInfo;
    std::vector<MemberInfo> InfoList;


    FILE *fpData;
private:
    
};

#endif