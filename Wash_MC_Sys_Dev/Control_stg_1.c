/*
Project: Wash_MC_Sys_Dev
Control_stg_1.c
Author: James Heath
Date: January 29, 2015

Descript: This project is an emulated form of a washing machine.  A stepper motor
will spin in a typical fashion to an actual washing machine motor.  LEDs will
emulate the water flow valves and lights on the washing machine.  Switches and
buttons will serve as the actual machine inputs.

Peripherals:
Lights and Switches Board
Stepper Motor

Port Assignments:
SW1 Pin C_0, INPUT, PULLUP, "Hot Select"
SW2 Pin C_1, INPUT, PULLUP, "Warm Select"
SW3 Pin C_2, INPUT, PULLUP, "Cold Select"
SW4 Pin C_3, INPUT, PULLUP, "Open Door"

PB1 Pin C_4, INPUT, PULLUP, "Start/Run"

STP_IW Pin B_0, OUTPUT, "Stepper IW"
STP_IX Pin B_1, OUTPUT, "Stepper IX"
STP_IY Pin B_2, OUTPUT, "Stepper IY"
STP_IZ Pin B_3, OUTPUT, "Stepper IZ"

LED Pin D_3, OUTPUT, "Drain Valve"
LED Pin D_2, OUTPUT, "Hot Valve"
LED Pin D_1, OUTPUT, "Cold Valve"
LED Pin D_0, OUTPUT, "Finish LED"
 */ 


#include <avr/io.h>


int main(void)
{
    while(1)
    {
        //TODO:: Please write your application code 
    }
}