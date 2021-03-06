#include "include/cef_base.h"
#include "ibrowserapp.cpp"

class IBrowserApp;

// Program entry point function.
int APIENTRY wWinMain(	HINSTANCE	hInstance,
						HINSTANCE	hPrevInstance,
						LPTSTR		lpCmdLine,
						int			nCmdShow) {
  UNREFERENCED_PARAMETER(hPrevInstance);
  UNREFERENCED_PARAMETER(lpCmdLine);

  // Structure for passing command-line arguments.
  // The definition of this structure is platform-specific.
  CefMainArgs							main_args(hInstance);

  // Optional implementation of the CefApp interface.
  CefRefPtr<IBrowserApp>	app(new IBrowserApp());

  // Execute the sub-process logic. This will block until the sub-process should exit.
  return CefExecuteProcess(main_args, app.get());
}
