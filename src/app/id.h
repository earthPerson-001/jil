#ifndef JIL_ID_H_
#define JIL_ID_H_
#pragma once

// Window ID, menu ID, etc.

#include "wx/defs.h"
#include "app/defs.h"

namespace jil {

enum {
  ID_JIL_BEGIN = wxID_HIGHEST + 100,

  ID_STATUS_BAR,

  ID_TEXT_BOOK,

  ID_FIND_WINDOW,
  ID_FIND_RESULT_PAGE,

  ID_GOTO_DIALOG,
  ID_NAVIGATION_DIALOG,

  // Find window
  ID_FIND_MODE_TOGGLE_BUTTON,
  ID_FIND_COMBOBOX,
  ID_REPLACE_COMBOBOX,
  ID_LOCATION_COMBOBOX,
  ID_OPTIONS_TOGGLE_BUTTON,
  ID_USE_REGEX_CHECKBOX,
  ID_CASE_SENSITIVE_CHECKBOX,
  ID_MATCH_WORD_CHECKBOX,
  ID_FIND_BUTTON,
  ID_FIND_ALL_BUTTON,
  ID_REPLACE_BUTTON,
  ID_REPLACE_ALL_BUTTON,

  // 32 themes at most.
  ID_MENU_THEME_0,
  ID_MENU_THEME_LAST = ID_MENU_THEME_0 + 31,

  // File menu
  ID_MENU_FILE_BEGIN,
  ID_MENU_FILE_NEW = ID_MENU_FILE_BEGIN,
#if JIL_MULTIPLE_WINDOW
  ID_MENU_FILE_NEW_WINDOW,
#endif  // JIL_MULTIPLE_WINDOW
  ID_MENU_FILE_OPEN,
  ID_MENU_FILE_CLOSE,
  ID_MENU_FILE_CLOSE_ALL,
  ID_MENU_FILE_CLOSE_ALL_BUT_THIS,
  ID_MENU_FILE_SAVE,
  ID_MENU_FILE_SAVE_AS,
  ID_MENU_FILE_SAVE_ALL,
  ID_MENU_FILE_COPY_PATH,
  ID_MENU_FILE_OPEN_FOLDER,
  ID_MENU_FILE_NEXT_PAGE,
  ID_MENU_FILE_PREV_PAGE,
  ID_MENU_FILE_NEXT_STACK_PAGE,
  ID_MENU_FILE_PREV_STACK_PAGE,
  ID_MENU_FILE_END,

  // Recent Files sub menu
  ID_MENU_FILE_RECENT_FILE_0,
  // Recent file 1, 2, ..., 8.
  ID_MENU_FILE_RECENT_FILE_9 = ID_MENU_FILE_RECENT_FILE_0 + 9,

  // Edit menu
  ID_MENU_EDIT_BEGIN,
  ID_MENU_EDIT_UNDO = ID_MENU_EDIT_BEGIN,
  ID_MENU_EDIT_REDO,
  ID_MENU_EDIT_CUT,
  ID_MENU_EDIT_COPY,
  ID_MENU_EDIT_PASTE,
  ID_MENU_EDIT_INCREASE_INDENT,
  ID_MENU_EDIT_DECREASE_INDENT,
  ID_MENU_EDIT_AUTO_INDENT,
  ID_MENU_EDIT_COMMENT,
  ID_MENU_EDIT_UNCOMMENT,
  ID_MENU_EDIT_FIND,
  ID_MENU_EDIT_REPLACE,
  ID_MENU_EDIT_GO_TO,

  // Items for find result page.
  ID_MENU_EDIT_CLEAR_ALL,
  ID_MENU_EDIT_GO_TO_LOCATION,

  ID_MENU_EDIT_END,

  // View menu
  ID_MENU_VIEW_BEGIN,
  ID_MENU_VIEW_WRAP = ID_MENU_VIEW_BEGIN,
  ID_MENU_VIEW_SHOW_NUMBER,
  ID_MENU_VIEW_SHOW_SPACE,
  ID_MENU_VIEW_FULL_SCREEN,
  ID_MENU_VIEW_END,

  // Tools menu
  ID_MENU_TOOLS_BEGIN,
  ID_MENU_TOOLS_END,

  // Preferences menu
  ID_MENU_PREFS_EDITOR_0,
  ID_MENU_PREFS_EDITOR_LAST = ID_MENU_PREFS_EDITOR_0 + kMaxFileTypes,

  // Help menu
  ID_MENU_HELP_BEGIN,
  ID_MENU_HELP_VIEW_ONLINE,
  ID_MENU_HELP_END,

  // Encoding menu on status bar.
  ID_MENU_ENCODING_BEGIN,
  ID_MENU_ENCODING_UTF8 = ID_MENU_ENCODING_BEGIN,
  ID_MENU_ENCODING_UTF8_BOM,
  ID_MENU_ENCODING_UTF16_BE,
  ID_MENU_ENCODING_UTF16_LE,
  ID_MENU_ENCODING_GB18030,
  ID_MENU_ENCODING_BIG5,
  ID_MENU_ENCODING_SHIFT_JIS,
  ID_MENU_ENCODING_EUC_JP,
  ID_MENU_ENCODING_KOI8_R,
  ID_MENU_ENCODING_ISO_8859_1,
  ID_MENU_ENCODING_ISO_8859_2,
  ID_MENU_ENCODING_ISO_8859_5,
  ID_MENU_ENCODING_ISO_8859_7,
  ID_MENU_ENCODING_TIS_620,
  ID_MENU_ENCODING_WINDOWS_1250,
  ID_MENU_ENCODING_WINDOWS_1251,
  ID_MENU_ENCODING_WINDOWS_1253,
  ID_MENU_ENCODING_MAC_CYRILLIC,
  ID_MENU_ENCODING_END,

  // File format menu on status bar.
  ID_MENU_FILE_FORMAT_BEGIN,
  ID_MENU_FILE_FORMAT_WIN = ID_MENU_FILE_FORMAT_BEGIN,
  ID_MENU_FILE_FORMAT_UNIX,
  ID_MENU_FILE_FORMAT_MAC,
  ID_MENU_FILE_FORMAT_END,
};

}  // namespace jil

#endif  // JIL_ID_H_
