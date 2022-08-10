/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.12                          *
*        Compiled Jun 29 2011, 15:28:47                              *
*        (c) 2011 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"
#include "debug_frmwrk.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define DIALOG_TIMER		(9)

#define ID_FRAMEWIN_0   (GUI_ID_USER + 0x04)
#define ID_PROGBAR_0   (GUI_ID_USER + 0x05)
#define ID_TEXT_0   (GUI_ID_USER + 0x06)

// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
	static int Progress = 0;

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { FRAMEWIN_CreateIndirect, "Framewin", ID_FRAMEWIN_0, 101, 50, 250, 150, 0, 0, 0 },
  { PROGBAR_CreateIndirect, "Progbar", ID_PROGBAR_0, 4, 81, 232, 20, 0, 0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_0, 10, 60, 223, 20, 0, 100, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem, hWin;
  int Id, NCode;
  static WM_HTIMER hTimerDialog;
  // USER START (Optionally insert additional variables)
  // USER END

  hWin = pMsg->hWin;
  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
    TEXT_SetFont(hItem, GUI_FONT_20_ASCII);
    TEXT_SetText(hItem, "EKRAN  PARLAKLIGI");
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetTextColor(hItem, 0x0000FFFF);
    // USER START (Optionally insert additional code for further widget initialization)
 			hTimerDialog      = WM_CreateTimer(WM_GetClientWindow(hWin), DIALOG_TIMER,      200, 0);
      hItem = WM_GetDialogItem(hWin, ID_PROGBAR_0);
			PROGBAR_SetText(hItem, "DENEE");
			Progress = 0;
      GUI_MEMDEV_FadeInWindow(pMsg->hWin, 500);
   // USER END
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  case WM_TIMER:
 			DEBUGM("timer HIT");
   Id = WM_GetTimerId(pMsg->Data.v);
    switch (Id) {
			case DIALOG_TIMER:
			{
    if (Progress < 100) {
      Progress += 2;
      hItem = WM_GetDialogItem(hWin, ID_PROGBAR_0);
      PROGBAR_SetValue(hItem, Progress);
      WM_RestartTimer(pMsg->Data.v, 200);
    } else {
      WM_DeleteTimer(pMsg->Data.v);
      GUI_MEMDEV_FadeOutWindow(pMsg->hWin, 500);
      GUI_EndDialog(pMsg->hWin, 0);
    }
    break;




			Progress += 5;
      hItem = WM_GetDialogItem(hWin, GUI_ID_PROGBAR0);
      PROGBAR_SetValue(hItem, Progress);
      WM_RestartTimer(pMsg->Data.v, 500);
			}
			break;
    }
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateFramewin
*/
WM_HWIN CreateFramewin(void);
WM_HWIN CreateFramewin(void) {
	WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), &_cbDialog, WM_HBKWIN, 101, 50);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/