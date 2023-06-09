
#include "leftPanel.h"

#include "MainWindow.h"

const int ID_PLUS = 101;
const int ID_MINUS = 102;

leftPanel::leftPanel(wxPanel *parent) : wxPanel(parent,-1,wxPoint(-1,-1),wxSize(-1,-1),wxBORDER_SUNKEN)
{
    count = 0;
    m_parent = parent;
    m_plus = new wxButton(this,ID_PLUS,wxT("+"),wxPoint(10,10));
    m_minus = new wxButton (this,ID_MINUS,wxT("-"),wxPoint(10,60));
    Connect(ID_PLUS,wxEVT_COMMAND_BUTTON_CLICKED,wxCommandEventHandler(leftPanel::OnPlus));
    Connect(ID_MINUS,wxEVT_COMMAND_BUTTON_CLICKED,wxCommandEventHandler(leftPanel::OnMinus));

}

void leftPanel::OnPlus(wxCommandEvent &event)
{
    count++;
    MainWindow *comm = ( MainWindow *) m_parent->GetParent();
    comm->m_rp->m_text->SetLabel(wxString::Format(wxT("%d"),count));
}


void leftPanel::OnMinus(wxCommandEvent &event)
{
    count--;
    MainWindow *comm = (MainWindow*) m_parent->GetParent();
    comm->m_rp->m_text->SetLabel(wxString::Format(wxT("%d"),count)); 
}
