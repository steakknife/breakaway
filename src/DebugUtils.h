/*
 * DebugUtils.h
 * Breakaway
 * Created by Kevin Nygaard on 11/16/06.
 * Copyright 2008 Kevin Nygaard.
 *
 * This file is part of Breakaway.
 *
 * Breakaway is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Breakaway is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Breakaway.  If not, see <http://www.gnu.org/licenses/>.
 */

#if DEBUG
#warning "debugging enabled"
#define DEBUG_OUTPUT( a )         NSLog( a )
#define DEBUG_OUTPUT1( a, b )     NSLog( a, b )
#else
#define DEBUG_OUTPUT( a )         // (a)
#define DEBUG_OUTPUT1( a, b )     // (a,b)
#endif

