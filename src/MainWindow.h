#include <wx/wx.h>
#include <wx/wxprec.h>
#include <wx/menu.h>

#include "leftPanel.h"
#include "rightPanel.h"

class MainWindow : public wxFrame
{
public:
    MainWindow(const wxString &title);

    void OnQuit( wxCommandEvent& WXUNUSED(event));

    leftPanel *m_lp;
    rightPanel *m_rp;

    wxMenuBar *menubar;
    wxMenu * file;

};