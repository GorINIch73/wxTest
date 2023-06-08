#ifndef LEFTPANEL_H
#define LEFTPANEL_H

#include <wx/wx.h>
#include <wx/panel.h>


class leftPanel : public wxPanel

{
public:
    leftPanel(wxPanel *parent);
    
    void OnPlus(wxCommandEvent &event);
    void OnMinus(wxCommandEvent &event);
    
    wxButton *m_plus;
    wxButton *m_minus;
    wxPanel *m_parent;
    int count;


};

#endif
