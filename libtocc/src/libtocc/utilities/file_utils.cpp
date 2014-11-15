/*
 * This file is part of Tocc. (see <http://t-o-c-c.com>)
 * Copyright (C) 2013, 2014, Aidin Gharibnavaz <aidin@t-o-c-c.com>
 *
 * Tocc is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Tocc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 *  along with Tocc.  If not, see <http://www.gnu.org/licenses/>.
 */

#include"libtocc/utilities/file_utils.h"


namespace libtocc
{
  std::string get_filename_from_path(std::string path)
  {
    std::string filename;
    //extract the file from path
    int last_slash_index = path.rfind("/");
    if(last_slash_index != std::string::npos)
    {
      filename = path.substr(last_slash_index + 1, path.length());
    }
    else
    {
      if(path.length()!=0)
      {
          filename=path;
      }
    }
    int last_point_index = filename.rfind(".");
    if(last_point_index != std::string::npos && last_point_index != 0)
    {
      filename = filename.substr(0, last_point_index);
    }
    return filename;
  }
}
