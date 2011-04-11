
#ifndef __view_framework_l10n_font_util_h__
#define __view_framework_l10n_font_util_h__

#pragma once

#include "gfx/size.h"

namespace gfx
{
    class Font;
}

namespace view
{

    // Returns the preferred size of the contents view of a window based on
    // its localized size data and the given font. The width in cols is held in a
    // localized string resource identified by |col_resource_id|, the height in the
    // same fashion.
    int GetLocalizedContentsWidthForFont(int col_resource_id,
        const gfx::Font& font);
    int GetLocalizedContentsHeightForFont(int row_resource_id,
        const gfx::Font& font);
    gfx::Size GetLocalizedContentsSizeForFont(int col_resource_id,
        int row_resource_id, const gfx::Font& font);

} //namespace view

#endif //__view_framework_l10n_font_util_h__