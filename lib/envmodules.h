/*************************************************************************
 *
 * ENVMODULES.H, Modules Tcl extension library
 * Copyright (C) 2018 Xavier Delaruelle
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
 *
 ************************************************************************/

#ifndef _ENVMODULES_H
#define _ENVMODULES_H 1

#include <tcl.h>

#define READ_BUFFER_SIZE 4096
#define FIRSTLINE_LENGTH 32

/* Prototypes of internal functions. */
MODULE_SCOPE int Envmodules_ReadFileObjCmd (ClientData dummy,
   Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);

MODULE_SCOPE int Envmodules_GetFilesInDirectoryObjCmd (ClientData dummy,
   Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);

/* Only the _Init function is exported. */
extern DLLEXPORT int Envmodules_Init (Tcl_Interp *interp);

#endif /* _ENVMODULES_H */

/* vim:set tabstop=3 shiftwidth=3 expandtab autoindent: */
