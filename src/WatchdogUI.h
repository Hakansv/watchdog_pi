///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec  3 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WATCHDOGUI_H__
#define __WATCHDOGUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/listctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/radiobut.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#include <wx/filepicker.h>
#include <wx/textctrl.h>
#include <wx/spinctrl.h>
#include <wx/panel.h>
#include <wx/radiobox.h>
#include <wx/slider.h>
#include <wx/statline.h>
#include <wx/choice.h>

#include "wxWTranslateCatalog.h"

///////////////////////////////////////////////////////////////////////////

#define GPSCOURSE 1000
#define GPSFIX 1001
#define AISGUARDZONE 1002
#define ANCHORALARM 1003

///////////////////////////////////////////////////////////////////////////////
/// Class WatchdogDialogBase
///////////////////////////////////////////////////////////////////////////////
class WatchdogDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxListCtrl* m_lStatus;
		wxButton* m_bConfiguration;
		wxButton* m_bReset;
		wxButton* m_bClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnDoubleClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnLeftDown( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnConfiguration( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		WatchdogDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("WatchDog"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL ); 
		~WatchdogDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class WatchdogPropertiesDialogBase
///////////////////////////////////////////////////////////////////////////////
class WatchdogPropertiesDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxFlexGridSizer* m_fgSizerProperties;
		wxStaticText* m_staticTextName;
		wxStaticText* m_staticTextNameVal;
		wxStaticText* m_staticTextVersion;
		wxStaticText* m_staticTextMajor;
		wxStaticText* m_staticTextMajorVal;
		wxStaticText* m_staticTextMinor;
		wxStaticText* m_staticTextMinorVal;
		wxStaticText* m_staticTextPatch;
		wxStaticText* m_staticTextPatchVal;
		wxStaticText* m_staticTextDate;
		wxStaticText* m_staticTextDateVal;
		wxStaticText* m_staticTextOther;
		wxStaticText* m_staticTextOtherVal;
		wxButton* m_buttonOK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnWatchdogPropertiesOKClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		WatchdogPropertiesDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About Watchdog Properties"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP ); 
		~WatchdogPropertiesDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ConfigurationDialogBase
///////////////////////////////////////////////////////////////////////////////
class ConfigurationDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* m_rbAlways;
		wxRadioButton* m_rbOnce;
		wxRadioButton* m_rbVisible;
		wxRadioButton* m_rbNever;
		wxButton* m_bNew;
		wxButton* m_bEdit;
		wxButton* m_bDelete;
		wxButton* m_bDeleteAll;
		wxListCtrl* m_lAlarms;
		wxButton* m_button7;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnEnabled( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNewAlarm( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEditAlarm( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDeleteAlarm( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDeleteAllAlarms( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDoubleClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void AlarmSelected( wxListEvent& event ) { event.Skip(); }
		virtual void OnAboutAuthor( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ConfigurationDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Watchdog Configuration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~ConfigurationDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class NewAlarmDialogBase
///////////////////////////////////////////////////////////////////////////////
class NewAlarmDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStdDialogButtonSizer* m_sdbSizer3;
		wxButton* m_sdbSizer3OK;
		wxButton* m_sdbSizer3Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnDoubleClick( wxMouseEvent& event ) { event.Skip(); }
		
	
	public:
		wxListCtrl* m_lAlarmType;
		
		NewAlarmDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New Alarm"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,300 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~NewAlarmDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class EditAlarmDialogBase
///////////////////////////////////////////////////////////////////////////////
class EditAlarmDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxFlexGridSizer* m_fgSizer;
		wxCheckBox* m_cbNoData;
		wxStaticText* m_staticText56;
		wxSpinCtrl* m_sDelay;
		wxStaticText* m_staticText57;
		wxCheckBox* m_cbAutoReset;
		wxCheckBox* m_cbgfxEnabled;
		wxButton* m_bTest;
		wxButton* m_button6;
		wxStdDialogButtonSizer* m_sdbSizer4;
		wxButton* m_sdbSizer4OK;
		wxButton* m_sdbSizer4Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnTestAlarm( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxCheckBox* m_cbSound;
		wxFilePickerCtrl* m_fpSound;
		wxCheckBox* m_cbCommand;
		wxTextCtrl* m_tCommand;
		wxCheckBox* m_cbMessageBox;
		wxCheckBox* m_cbRepeat;
		wxSpinCtrl* m_sRepeatSeconds;
		
		EditAlarmDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Edit Alarm"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~EditAlarmDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class LandFallPanel
///////////////////////////////////////////////////////////////////////////////
class LandFallPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText30;
		wxStaticText* m_staticText7;
		wxStaticText* m_staticText39122;
		wxStaticText* m_staticText45;
	
	public:
		wxRadioButton* m_rbTime;
		wxSpinCtrl* m_sTimeMinutes;
		wxRadioButton* m_rbDistance;
		wxTextCtrl* m_tDistance;
		
		LandFallPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~LandFallPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class BoundaryPanel
///////////////////////////////////////////////////////////////////////////////
class BoundaryPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText30;
		wxStaticText* m_staticText7;
		wxStaticText* m_staticText321;
		wxStaticText* m_staticText32;
		wxButton* m_button12;
		wxStaticText* m_staticTextCheckFrequency;
		wxStaticText* m_staticText39122;
		wxStaticLine* m_staticline1;
		
		// Virtual event handlers, overide them in your derived class
		void OnRadioButton( wxCommandEvent& event );
		void OnGuardZoneGUIDKillFocus( wxFocusEvent& event );
		void OnBoundaryGUIDKillFocus( wxFocusEvent& event );
		void OnGetBoundaryGUID( wxCommandEvent& event );
		
	
	public:
		wxRadioButton* m_rbTime;
		wxSpinCtrl* m_sTimeMinutes;
		wxRadioButton* m_rbDistance;
		wxTextCtrl* m_tDistance;
		wxRadioButton* m_rbGuard;
		wxTextCtrl* m_tGuardZoneGUID;
		wxRadioButton* m_rbAnchor;
		wxTextCtrl* m_tBoundaryGUID;
		wxRadioBox* m_radioBoxBoundaryType;
		wxRadioBox* m_radioBoxBoundaryState;
		wxSlider* m_sliderCheckFrequency;
		
		BoundaryPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~BoundaryPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class NMEADataPanel
///////////////////////////////////////////////////////////////////////////////
class NMEADataPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText34;
		wxStaticText* m_staticText35;
		wxStaticText* m_staticText13;
	
	public:
		wxTextCtrl* m_tSentences;
		wxSpinCtrl* m_sSeconds;
		
		NMEADataPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~NMEADataPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DeadmanPanel
///////////////////////////////////////////////////////////////////////////////
class DeadmanPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText33;
		wxStaticText* m_staticText6;
	
	public:
		wxSpinCtrl* m_sMinutes;
		
		DeadmanPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~DeadmanPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AnchorPanel
///////////////////////////////////////////////////////////////////////////////
class AnchorPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText71;
		wxStaticText* m_staticText8;
		wxButton* m_bSyncToBoat;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText39;
		wxStaticText* m_staticText39121;
		
		// Virtual event handlers, overide them in your derived class
		void OnSyncToBoat( wxCommandEvent& event );
		
	
	public:
		wxTextCtrl* m_tLatitude;
		wxTextCtrl* m_tLongitude;
		wxSpinCtrl* m_sRadius;
		wxCheckBox* m_cbAutoSync;
		
		AnchorPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~AnchorPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CoursePanel
///////////////////////////////////////////////////////////////////////////////
class CoursePanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText50;
		wxStaticText* m_staticText32;
		wxStaticText* m_staticText18;
		wxStaticText* m_staticText21;
		wxButton* m_bCurrentCourse;
		wxStaticText* m_staticText3912;
		
		// Virtual event handlers, overide them in your derived class
		void OnCurrentCourse( wxCommandEvent& event );
		
	
	public:
		wxChoice* m_cMode;
		wxSpinCtrl* m_sTolerance;
		wxSpinCtrl* m_sCourse;
		wxRadioButton* m_rbGPSCourse;
		wxRadioButton* m_rbHeading;
		
		CoursePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~CoursePanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class SpeedPanel
///////////////////////////////////////////////////////////////////////////////
class SpeedPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText51;
		wxStaticText* m_staticText44;
		wxStaticText* m_staticText24;
		wxStaticText* m_staticText28;
		wxStaticText* m_staticText391;
	
	public:
		wxChoice* m_cMode;
		wxTextCtrl* m_tSpeed;
		wxSlider* m_sliderSOGAverageNumber;
		
		SpeedPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~SpeedPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class WindPanel
///////////////////////////////////////////////////////////////////////////////
class WindPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText51;
		wxStaticText* m_staticText55;
		wxButton* m_bAboutWind;
		wxStaticText* m_staticText44;
		wxStaticText* m_staticText24;
		wxStaticText* m_staticText391;
		
		// Virtual event handlers, overide them in your derived class
		void OnAboutWind( wxCommandEvent& event );
		
	
	public:
		wxChoice* m_cMode;
		wxChoice* m_cType;
		wxSpinCtrl* m_sValue;
		
		WindPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~WindPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class WeatherPanelBase
///////////////////////////////////////////////////////////////////////////////
class WeatherPanelBase : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText50;
		wxStaticText* m_staticText51;
		wxStaticText* m_staticText511;
		wxStaticText* m_stUnits;
		wxStaticText* m_staticText53;
		wxStaticText* m_staticText54;
		wxStaticText* m_staticText391;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnVariable( wxCommandEvent& event ) = 0;
		
	
	public:
		wxChoice* m_cVariable;
		wxRadioButton* m_rbValue;
		wxRadioButton* m_rbRate;
		wxChoice* m_cType;
		wxTextCtrl* m_tValue;
		wxSpinCtrl* m_sRatePeriod;
		
		WeatherPanelBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~WeatherPanelBase();
	
};

#endif //__WATCHDOGUI_H__
