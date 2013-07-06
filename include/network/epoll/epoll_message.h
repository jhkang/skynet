
/*
	Copyright 2013 Skynet Project

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

	    http://www.apache.org/licenses/LICENSE-	2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/

#ifndef _SKYNET_NETWORK_EPOLL_EPOLL_MESSAGE_H_
#define _SKYNET_NETWORK_EPOLL_EPOLL_MESSAGE_H_

#include <sys/epoll.h>

#include "network/base_message.h"

namespace skynet {
namespace network {
namespace epoll {
	struct EpollMessage : BaseMessage
	{
		struct epoll_event ev;
		struct epoll_event* ctl;
		struct epoll_event* events;
	};
}
}
}

#endif