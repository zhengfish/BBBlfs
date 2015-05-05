/*
* Copyright 2013 Vlad V. Ungureanu <ungureanuvladvictor@gmail.com>.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this Github repository and wiki except in
* compliance with the License. You may obtain a copy of the License at
*
*       http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*/

#ifndef UDP_H
#define UDP_H

#include <stdint.h>

#include <WinSock2.h>

typedef struct udp {
	uint16_t udpSrc; /*!< Source port of UDP packet */
	uint16_t udpDst; /*!< Destination port of UDP packet */
	uint16_t udpLen; /*!< Length of header + data of the UDP packet */
	uint16_t chkSum; /*!< Checksum of the UDP packet */
} udp_t;

void make_udp(udp_t *udp_packet, uint16_t udp_len,
	uint16_t srcPort, uint16_t dstPort);

#endif