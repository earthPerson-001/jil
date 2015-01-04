#ifndef JIL_ID_H_
#define JIL_ID_H_
#pragma once

// Window ID, menu ID, etc.

#include "wx/defs.h"
#include "app/compile_config.h"

namespace jil {

enum WindowId {
  ID_WINDOW_BEGIN = wxID_HIGHEST + 100,

  ID_STATUS_BAR,
  ID_STATUS_BAR_INTERNAL_BEGIN,
  ID_STATUS_BAR_INTERNAL_END = ID_STATUS_BAR_INTERNAL_BEGIN + 100,

  ID_TEXT_BOOK,

  ID_BOOK_INTERNAL_BEGIN,
  ID_BOOK_INTERNAL_END = ID_BOOK_INTERNAL_BEGIN + 100,

  ID_FIND_WINDOW,
  ID_FIND_RESULT_PAGE,

  ID_GOTO_DIALOG,
  ID_NAVIGATION_DIALOG,

  ID_WINDOW_END,
};

enum MenuId {
  ID_MENU_BEGIN = ID_WINDOW_END,

  // File
  ID_MENU_FILE_BEGIN = ID_MENU_BEGIN,
  ID_MENU_FILE_NEW = ID_MENU_FILE_BEGIN,
#if JIL_MULTIPLE_WINDOW
  ID_MENU_FILE_NEW_WINDOW,
#endif  // JIL_MULTIPLE_WINDOW
  ID_MENU_FILE_OPEN,
  ID_MENU_FILE_CLOSE,
  ID_MENU_FILE_CLOSE_ALL,
  ID_MENU_FILE_SAVE,
  ID_MENU_FILE_SAVE_AS,
  ID_MENU_FILE_SAVE_ALL,
  ID_MENU_FILE_END,

  // Edit
  ID_MENU_EDIT_BEGIN = ID_MENU_FILE_END,
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
  ID_MENU_EDIT_TOGGLE_COMMENT,
  ID_MENU_EDIT_FORMAT,
  ID_MENU_EDIT_FIND,
  ID_MENU_EDIT_REPLACE,
  ID_MENU_EDIT_GOTO,
  ID_MENU_EDIT_END,

  // Tools
  ID_MENU_TOOLS_BEGIN = ID_MENU_EDIT_END,
  ID_MENU_TOOLS_OPTIONS,
  ID_MENU_TOOLS_END,

  // Help
  ID_MENU_HELP_BEGIN = ID_MENU_TOOLS_END,
  ID_MENU_HELP_VIEW_ONLINE,
  ID_MENU_HELP_ABOUT,
  ID_MENU_HELP_END,

  ID_MENU_END,
};

enum {
  // Right click menu on the book tab.
  ID_MENU_BOOK_RCLICK_BEGIN = ID_BOOK_INTERNAL_BEGIN,
  ID_MENU_BOOK_RCLICK_SAVE = ID_MENU_BOOK_RCLICK_BEGIN,
  ID_MENU_BOOK_RCLICK_CLOSE,
  ID_MENU_BOOK_RCLICK_CLOSE_ALL,
  ID_MENU_BOOK_RCLICK_CLOSE_ALL_BUT_THIS,
  ID_MENU_BOOK_RCLICK_COPY_PATH,
  ID_MENU_BOOK_RCLICK_OPEN_FOLDER,
  ID_MENU_BOOK_RCLICK_NEW_FILE,
  ID_MENU_BOOK_RCLICK_END,
};

enum EncodingMenuId {
  ID_MENU_ENCODING_BEGIN = ID_STATUS_BAR_INTERNAL_BEGIN,
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
};

enum FileFormatMenuId {
  ID_MENU_FILE_FORMAT_BEGIN = ID_MENU_ENCODING_END,
  ID_MENU_FILE_FORMAT_WIN = ID_MENU_FILE_FORMAT_BEGIN,
  ID_MENU_FILE_FORMAT_UNIX,
  ID_MENU_FILE_FORMAT_MAC,
  ID_MENU_FILE_FORMAT_END,
};

}  // namespace jil

#endif  // JIL_ID_H_
