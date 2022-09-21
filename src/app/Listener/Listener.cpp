#include "Listener.h"

Listener::Listener(CardReader *cardread,Control*cont)//:rfid(rfid)
{
//this->rfid=rfid;
this->cont=cont;
this->cardread=cardread;
//this->rfid_viewer=rfid_viewer;
//this->rfid_viewer->data=&(this->cardread->data);
//a=RFIDData;
}

Listener::~Listener()
{

}


// void Listener::checkEvent()
// {
//     uint8_t byte;
// std::cout<<"fdsaf"<<std::endl;
// if((byte=rfid->mfrc522_request(PICC_REQALL,RFIDData)) == CARD_FOUND )
// {

// rfid->mfrc522_get_card_serial(RFIDData);
// for(int i=0;i<5;i++)
// {

//     printf("%02x ",RFIDData[i]);

// }
// }
    
// }



void Listener::checkEvent()
{
    

if(cardread->IsCard()==1 )
{
cont->updateRFID("CARDCHECK");
 //cardread->getCardNumber();
// rfid_viewer->updateView("CARDCHECK");
}
}

bool  Listener::checkRFID()
{
    uint8_t byte;

if((byte=rfid->mfrc522_request(PICC_REQALL,RFIDData)) == CARD_FOUND )
{

rfid->mfrc522_get_card_serial(RFIDData);
return TRUE;
}
return FALSE;


}