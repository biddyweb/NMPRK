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



#ifndef _OS_SPECIFIC_CRIT_SECT_LINUX_H
#define _OS_SPECIFIC_CRIT_SECT_LINUX_H

#include <pthread.h>
#include "OsSpecificCritSect.h"

namespace TransportPlugin
{

class OsSpecificCritSectLinux : public OsSpecificCritSect
{
public:
    /**
     *************************************************************************
     * Constructor.
     * @description
     * Initializes the critical section object. 
     *
     * @returns NONE
     *************************************************************************/
    OsSpecificCritSectLinux();

    /**
     *************************************************************************
     * Destructor.
     * @description
     * Releases resources used by the critical section object. 
     *
     * @returns NONE
     *************************************************************************/
    ~OsSpecificCritSectLinux();

    /**
     *************************************************************************
     * Marks the beginning of a critical section.
     * @description
     * Waits for ownership of critical section object.
     *
     * @returns NONE
     *************************************************************************/
    void EnterCritSect();

    /**
     *************************************************************************
     * Marks the end of a critical section.
     * @description
     * Realeases ownership of critical section object.
     *
     * @returns NONE
     *************************************************************************/
    void LeaveCritSect();

private:
    /// Linux critical section object
    pthread_mutex_t mutex;
};

}
#endif // _OS_SPECIFIC_CRIT_SECT_LINUX_H
