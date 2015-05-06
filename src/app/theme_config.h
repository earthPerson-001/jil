#ifndef JIL_THEME_CONFIG_H_
#define JIL_THEME_CONFIG_H_
#pragma once

#include "editor/theme.h"

// Load theme file.

class wxString;

namespace jil {

namespace editor {
class Style;
}

bool LoadThemeFile(const wxString& theme_file, editor::SharedTheme& theme, editor::Style* style);

}  // namespace jil

#endif  // JIL_THEME_CONFIG_H_
