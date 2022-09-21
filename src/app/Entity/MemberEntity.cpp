#include "MemberEntity.h"

MemberEntity::MemberEntity()
{
//fpData=fopen("memberLists.bin","r+");
Loadinfo();
}

MemberEntity::~MemberEntity()
{

}

void MemberEntity::Loadinfo()
{   
    fpData=fopen("memberLists.bin","r+");
    if(fpData==NULL)
    {
        fprintf(stderr,"FILE open error");
     //std::cout<<"FILE open error"<<std::endl;
     return;
    }
    while(fread(&memberInfo,sizeof(MemberInfo),1,fpData))
    { 
    InfoList.push_back(memberInfo);
    }
    //전부 로딩후 닫아주겠다.
    fclose(fpData);
}
    
    void MemberEntity::prinfInfo(int index)
    {  
    // std::cout<< InfoList[1000].id <<std::endl;
    // std::cout<<InfoList[1000].address<<std::endl;
    // std::cout<< InfoList[1000].name<<std::endl;
    // std::cout<< InfoList[1000].cardNum<<std::endl;
        printf("%04d, %s, %s, %s, %0x-%0x-%0x-%0x-%0x\n",
        InfoList[index].id,
        InfoList[index].name,
        InfoList[index].address,
        InfoList[index].phoneNumber,
        InfoList[index].cardNum[0],
        InfoList[index].cardNum[1],
        InfoList[index].cardNum[2],
        InfoList[index].cardNum[3],
        InfoList[index].cardNum[4]
        );

    }
// void MemberEntity:: Addinfo(){};
// void MemberEntity::DeleteInfo(){};
    