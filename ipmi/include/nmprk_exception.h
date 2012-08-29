/***************************************************************************
 * Copyright 2012 Intel Corporation                                        *
 *Licensed under the Apache License, Version 2.0 (the "License");          *
 * you may not use this file except in compliance with the License.        *
 * You may obtain a copy of the License at                                 *
 * http://www.apache.org/licenses/LICENSE-2.0                              *
 * Unless required by applicable law or agreed to in writing, software     *
 * distributed under the License is distributed on an "AS IS" BASIS,       *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
 * See the License for the specific language governing permissions and     *
 * limitations under the License.                                          *
 ***************************************************************************/
/**************************************************************************
 * Author: Stewart Dale <IASI NM TEAM>                                    *
 * Updates:							                                      *
 * 4/30: prep for initial external release                                *
 **************************************************************************/
#ifndef NMPRK_EXCEPTION_H
#define NMPRK_EXCEPTION_H

#include <string>


#include "nmprk_defines.h"
#include "nmprk_ipmi.h"

namespace nmprk {

  class nmprkException {
  public:
    nmprk::ipmi::byte_t errorCode;
    std::string errorMsg;
  nmprkException(nmprk::ipmi::byte_t code,std::string msg) throw () : errorCode(code), errorMsg(msg) 
    {}
  };

};

#endif