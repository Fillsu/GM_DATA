#include "RFID_View.h"

RFID_View::RFID_View()
{

}

RFID_View::~RFID_View()
{

}

void RFID_View::updateView(std::string rfidstr)
{

    if(rfidstr=="CARDCHECK")
    {       
            // std::cout<<" "<<std::endl;
            // for(int i=0;i<5;i++)
            // {  
                
                
            //    // printf("ddd %d",a);
            //     printf(" %x ",*(RFIDData+i));

            // }
    for(const auto ndata:data->number)
      {
    
    std::cout<<ndata<<" ";
       }

    std::cout<<std::endl;
        
    }
}