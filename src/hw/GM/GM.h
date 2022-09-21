#ifndef GM_H
#define GM_H

#pragma once
#include "mfrc522.h"
#include "Listener.h"
#include "RFID_View.h"
# include "wiringPi.h"
#include "CardReader.h"
#include "Control.h"

class GM
{
public:
    GM(  );
    ~GM();
    void GM_Run();

 
CardReader *cardreader;
RFID_View *rfidview1;
Control *cont;
Listener *listener1;

private:

};

#endif