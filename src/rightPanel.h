#ifndef RIGHTPANEL_H
#define RIGHTPANEL_H

#include <wx/wx.h>
#include <wx/panel.h>

#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/wxsqlite3.h>

class rightPanel :public wxPanel
{
public:
    rightPanel(wxPanel *parent);
    
    void OnSetText (wxCommandEvent& event) ;
    void OnRun(wxCommandEvent& event) ;
    wxStaticText *m_text ;

    wxTextCtrl *m_TextCtrlSqlQuery;
    wxBitmapButton* m_ButtonSqlGo;
    wxGrid* m_GridResult;

    wxSQLite3Database *database;
};

#endif

