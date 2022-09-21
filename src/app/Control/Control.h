#ifndef CONTROL_H
#define CONTROL_H

#pragma once
#include <string>
#include "RFID_View.h"
#include "CardReader.h"

class Control
{
public:
    Control(RFID_View *rfidview,CardReader *cardread);
    ~Control();
    void updateRFID(std::string rfidstr);

    RFID_View *rfidview;
    CardReader *cardread;

private:

};

#endif