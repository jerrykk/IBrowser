﻿/****************************************************************************
 *   Copyright (C) 2014 by Jerry			                           		*
 *                                                                        	*
 *   This file is part of IBrowser.                                        	*
 *                                                                         	*
 *   IBrowser is private software.                                         	*
 *   program.  If not, see <https://github.com/jerrykk/IBrowser>.          	*
 *                                                                         	*
 *   IBrowser website: https://github.com/jerrykk/IBrowser                 	*
 ****************************************************************************/
/*
 * ibrowser global function
 */

#ifndef R_IBROWSER_GLOBAL_H
#define R_IBROWSER_GLOBAL_H

// cef
#include <include/cef_app.h>
#include <include/cef_base.h>
#include <include/utils/resource.h>
#include <include/cef_browser.h>
#include <include/cef_command_line.h>
#include <include/cef_frame.h>
#include <include/cef_runnable.h>

// Qt
#include <QString>

/*
 * @brief : Returns the application working directory.
 */
QString AppGetWorkingDirectory();

/*
 * @brief : Returns the application settings based on command line arguments.
 */
void AppGetSettings(CefSettings& settings);

#endif // R_IBROWSER_GLOBAL_H