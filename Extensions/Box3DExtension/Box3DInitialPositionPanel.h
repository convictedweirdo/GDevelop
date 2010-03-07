/**

Game Develop - Box 3D Extension
Copyright (c) 2008-2010 Florian Rival (Florian.Rival@gmail.com)

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
    claim that you wrote the original software. If you use this software
    in a product, an acknowledgment in the product documentation would be
    appreciated but is not required.

    2. Altered source versions must be plainly marked as such, and must not be
    misrepresented as being the original software.

    3. This notice may not be removed or altered from any source
    distribution.

*/

#if defined(GDE)
#ifndef BOX3DINITIALPOSITIONPANEL_H
#define BOX3DINITIALPOSITIONPANEL_H

//(*Headers(Box3DInitialPositionPanel)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
//*)

class Box3DInitialPositionPanel: public wxPanel
{
	public:

		Box3DInitialPositionPanel(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Box3DInitialPositionPanel();

		//(*Declarations(Box3DInitialPositionPanel)
		wxTextCtrl* rollEdit;
		wxStaticText* StaticText2;
		wxStaticText* StaticText6;
		wxTextCtrl* yawEdit;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxTextCtrl* zEdit;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxTextCtrl* pitchEdit;
		wxStaticText* StaticText4;
		//*)

	protected:

		//(*Identifiers(Box3DInitialPositionPanel)
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		//*)

	private:

		//(*Handlers(Box3DInitialPositionPanel)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
#endif
