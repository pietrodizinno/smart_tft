/**
 * @file gui_demo.h
 * @brief demo menu (serialized, master side)
 * @author Duboisset Philippe
 * @version 0.1b
 * @date (yyyy-mm-dd) 2013-11-30
 *
 * Copyright (C) <2013>  Duboisset Philippe <duboisset.philippe@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _gui_demo_h_
#define _gui_demo_h_

#include "main.h"
#include "serial_remote.h"
#include "r_gui.h"
#include "r_p2d.h"
#include "r_mem.h"

#include "gui_demo_button.h"
#include "gui_demo_file_browser.h"
#include "gui_demo_keyboard.h"
#include "gui_demo_text.h"
#include "gui_demo_valuebox.h"
#include "gui_demo_rbutton.h"
#include "gui_demo_list.h"
#include "gui_demo_graph2.h"


#define SIG_DEMO_MENU 0xF00D  /*random...*/

/**
 * @function Gui_DemoFrame
 * @brief clear the screen, delete obejcts & draw a frame
 * @param const void *str: frame title
 * @return none
 */
void Gui_DemoFrame(const void *str);

/**
 * @function Gui_DemoNewPage
 * @brief erase all, add a frame & and 'menu' button; used by most demo pages
 * @param const void *str: frame title
 * @return none
 */
void Gui_DemoNewPage(const void *str);

/**
 * @function Gui_Demo
 * @brief Main menu of the GUI demo
 * @param none
 * @return none
 */
void Gui_Demo(void);

#endif
