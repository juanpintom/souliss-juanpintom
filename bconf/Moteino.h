/**************************************************************************
	Souliss
    Copyright (C) 2014  Veseo

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
	
	Originally developed by Dario Di Maio
	
***************************************************************************/
/*!
    \file 
    \ingroup
*/
#ifndef bconf_ssMOTEINO_H
#define bconf_ssMOTEINO_H

// Arduino AVR Board
#define MCU_TYPE_INSKETCH
#define	MCU_TYPE			0x01

#define RFM69_INSKETCH
#define VNET_MEDIA_INSKETCH
#define	COMMS_MODEL_INSKETCH
#define	BOARD_MODEL_INSKETCH

// Refer to chibiUsrCfg.h and vNetCfg.h
#define HOPERF_RFM69				1
#define VNET_MEDIA2_ENABLE  		1
#define	COMMS_MODEL					0x08
#define	BOARD_MODEL					0x0A

#endif
