/*
 * bit (build in time) is a program to build directly c and c++ programs 
 * Copyright (C) 2019  Filipe Marques eagle.software3@gmail.com
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COMPILE_HPP
#define COMPILE_HPP

/**
 * @todo write docs
 */

#include "file.hpp"

class Compile
{
public:
  /**
   * Default constructor
   */
  Compile();

  void set_instructions(std::string instructions);

  int compile_file();
  int link_files();
  int execute_program();
  int clean_o_files();

  /**
   * Destructor
   */
  ~Compile();
	
private:
    File file{};
};

#endif
