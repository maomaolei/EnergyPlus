#ifndef HeatBalanceAirManager_hh_INCLUDED
#define HeatBalanceAirManager_hh_INCLUDED

// EnergyPlus Headers
#include <EnergyPlus.hh>

namespace EnergyPlus {

namespace HeatBalanceAirManager {

	// Data
	// MODULE PARAMETER DEFINITIONS:
	// na

	//         Subroutine Specifications for the Heat Balance Module
	// Driver Routines

	// Get Input routines for module

	// Initialization routines for module

	// Algorithms for the module
	// Reporting routines for module

	// Functions
	void
	clear_state();

	void
	ManageAirHeatBalance();

	// Get Input Section of the Module
	//******************************************************************************

	void
	GetAirHeatBalanceInput();

	void
	GetAirFlowFlag( bool & ErrorsFound ); // Set to true if errors found

	void
	SetZoneMassConservationFlag();  // sets the zone air mass flow variables

	void
	GetSimpleAirModelInputs( bool & ErrorsFound ); // IF errors found in input

	//*****************************************************************************************
	// This subroutine was moved from 'RoomAirManager' Module

	void
	GetRoomAirModelParameters( bool & errFlag ); // True if errors found during this input routine

	// END of Get Input subroutines for the HBAir Module
	//******************************************************************************

	// Beginning Initialization Section of the Module
	//******************************************************************************

	void
	InitAirHeatBalance();

	void
	AllocateAirHeatBalArrays();

	void
	InitSimpleMixingConvectiveHeatGains();

	// END Initialization Section of the Module
	//******************************************************************************

	// Begin Algorithm Section of the Module
	//******************************************************************************

	void
	CalcHeatBalanceAir();

	// END Algorithm Section of the Module

	void
	ReportZoneMeanAirTemp();

} // HeatBalanceAirManager

} // EnergyPlus

#endif
