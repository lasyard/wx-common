#ifndef _WX_COMMON_UTILS_H_
#define _WX_COMMON_UTILS_H_

class wxEvent;
class wxString;
class wxWindow;

namespace WxCommon
{

/**
 * @brief Delegate event to another window.
 *
 * @param win the window
 * @param event  the event
 * @return true means the event is processed
 * @return false means the event is skipped
 */
bool DelegateEvent(wxWindow *win, wxEvent &event);

void ReadAllText(wxString &text, const wxString &fileName);

void ShowTextBox(const wxString &title, const wxString &text);

}; // namespace WxCommon

#endif /* _WX_COMMON_UTILS_H_ */
