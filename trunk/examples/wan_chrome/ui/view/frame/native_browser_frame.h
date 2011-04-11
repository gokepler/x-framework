
#ifndef __wan_chrome_ui_view_frame_native_browser_frame_h__
#define __wan_chrome_ui_view_frame_native_browser_frame_h__

#pragma once

namespace view
{
    class NativeWindow;
}
class ThemeProvider;

class NativeBrowserFrame
{
public:
    virtual ~NativeBrowserFrame() {}

    virtual view::NativeWindow* AsNativeWindow() = 0;
    virtual const view::NativeWindow* AsNativeWindow() const = 0;

protected:
    friend class BrowserFrame;

    virtual BrowserNonClientFrameView* CreateBrowserNonClientFrameView() = 0;

    // BrowserFrame pass-thrus ---------------------------------------------------
    // See browser_frame.h for documentation:
    virtual int GetMinimizeButtonOffset() const = 0;
    virtual ThemeProvider* GetThemeProviderForFrame() const = 0;
    virtual bool AlwaysUseNativeFrame() const = 0;
    virtual void TabStripDisplayModeChanged() = 0;
};

#endif //__wan_chrome_ui_view_frame_native_browser_frame_h__