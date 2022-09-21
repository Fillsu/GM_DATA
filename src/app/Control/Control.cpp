#include "Control.h"
#include "Service.h"
#include "Device_Data.h"

Control::Control(RFID_View *rfidview,CardReader *cardread)
{
this->rfidview=rfidview;
this->cardread=cardread;
this->rfidview->data=&(this->cardread->data);
}

Control::~Control()
{

}

 void Control::updateRFID(std::string rfidstr)
 {
if(rfidstr=="CARDCHECK")
{
cardread->getCardNumber();
rfidview->updateView("CARDCHECK");

}

 }